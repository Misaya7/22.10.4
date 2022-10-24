#define _CRT_SECURE_NO_WARNINGS 1

//P69
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main() {
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后,str并不会置为NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");//非法访问
//		printf(str);
//	}
//}
//int main() {
//	Test();
//	return 0;
//}
//###########################################################
//P70


//struct Stu {        //柔型数组
//	int n;          
//	int arr[];//允许结构体中最后一个元素是未知大小的数组,但他前面必须至少有一个元素
//};              //他叫做柔型数组,他的大小是可以调整的
//int main() {
//	//struct Stu s;
//	//printf("%d\n", sizeof(s));//输出的是4,大小并不包括柔型数组
//	struct Stu* ps = (struct Stu*)malloc(sizeof(struct Stu)+5*sizeof(int));
//	//这里就为arr开辟了5个int类型的空间
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;
//
//	}
//	//假如这里我们的空间不够用了
//	struct Stu* pss = (struct Stu*)realloc(ps, 44);
//	if (pss != NULL) {
//		ps = pss;
//		for (i = 5; i < 10; i++) {
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	pss = NULL;
//	return 0;
//} 

//上面这种柔型数组可以解决数组大小变化问题
//这里还有一种方法可以解决

//struct Stu {      
//	int n;
//	int* arr;
//};  
//int main() {
//	struct Stu* ps = (struct Stu*)malloc(sizeof(struct Stu));//ps维护这个结构体
//	
//	assert(ps != NULL);
//	ps->arr = (int*)malloc(5*sizeof(int));//这里为arr分配了5个int大小的空间
//	
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;
//	}
//	int* pss = (int*)realloc(ps->arr, 10*sizeof(int));//追加空间
//	
//	assert(pss != NULL);
//	ps->arr = pss;
//
//	for (i = 5; i < 10; i++) {
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", ps->arr[i]);
//	}
//	
//	free(ps->arr);//先释放小的,也就是子空间
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	pss = NULL;
//	return 0;
//}
