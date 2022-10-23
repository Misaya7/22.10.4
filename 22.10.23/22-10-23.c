#define _CRT_SECURE_NO_WARNINGS 1
//P66

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main() {
//	int* p = (int*)malloc(10 * sizeof(int));//malloc分配动态内存函数
//	if (p == NULL) {   //首先判断分配是否成功,没有成功就会给p空指针
//		printf("%s", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//释放p所指向的空间
//	p = NULL;//将p指针置为NULL
//	return 0;
//}

//#############################################
//P67

//int main() {
//	int* p = (int*)calloc(10, sizeof(int));//calloc动态分配内存函数
//	             //calloc(元素个数,每个元素有多少字节)
//	             //calloc函数会把每个字节初始化为0,malloc没有这个功能
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p + i)); //已经初始化过了,打印出来都是0
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main() {
//	int* p = (int*)malloc(20);//分配了20个字节
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		*(p + i) = i;
//	}
//
//	//这里使用了malloc函数开辟了20个字节的空间
//	//假设这里我们需要更多的空间，比如40个字节
//	//我们就可以用realloc来调整动态开辟的内存
//
//	//realloc函数使用的注意事项
//	//1.如果p指向的空间后面有足够的空间给我们追加,则直接追加,p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，
//	//则realloc函数会重新找一个新的内存区域开辟一块满足需求的空间
//	//并且把原来内存中的数据拷贝回过来,释放旧的内存空间
//	//最后返回新开辟的内存空间地址 如果追加失败,则返回NULL
//	//3.要用一个新的变量来接受realloc函数的返回值
//
//	int* pp = (int*)realloc(p, 40);
//	if (pp != NULL) {//这里继续用p来维护这块空间
//		p = pp;
//		i = 0;
//		for (i = 5; i < 10; i++) {
//			*(p + i) = i;
//		}
//		i = 0;
//		for (i = 0; i < 10; i++) {
//
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	pp = NULL;
//	return 0;
//}

//###################################################
//P68

//void test()//1.对NULL指针的解引用操作
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//void test()  //2.对动态开辟空间的越界访问
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}
//
//void test()  //3.对非动态开辟内存使用free释放
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok? no!
//}

//void test()  //4.使用free释放一块动态开辟内存的一部分
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}
//
//void test()//5.对同一块动态内存多次释放
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}

//int main() {  //6.动态开辟内存忘记释放
//	while (1) {
//		malloc(2);
//	}
//	return 0;
//}


//void GetMemory(char* p)//笔试题
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);           //这个代码有两个问题
//	strcpy(str, "hello world");//1.到这行，程序崩溃。因为str是NULL
//	printf(str);               //2.malloc申请的空间没有释放
//}
//int main() {
//	Test();
//	return 0;
//}

//void GetMemory(char** p)//上面这道题的正确写法
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main() {
//	Test();
//	return 0;
//}

//char* GetMemory(char* p)//上面这道题的另一种正确写法
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main() {
//	Test();
//	return 0;
//}

char* GetMemory()//输出的不是hello world

{
	char p[] = "hello world";
	return p;
}
void Test()
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main() {
	Test();
	return 0;
}