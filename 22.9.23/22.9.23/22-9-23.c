#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	int i = 0;
//	char arr[10] = "qwqqqqqqqq";
//	while (i < 10) {
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0; 
//}

//int MAX(int q, int w) {
//	if (q > w)
//		return q;
//	if (q < w)
//		return w;		
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数\n");
//	scanf("%d%d", &a, &b);
//	int max = MAX(a,b);
//	printf("更大的是 %d", max);
//	return 0;
//}

//int main() {
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	int b = ++a;//前置++，先++，再使用
//	printf("%d %d", a, b);
//	return 0;
//}

//int main() {
//	int a = (int)3.14;//强制类型转换
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数\n");
//	scanf("%d%d", &a, &b);
//	int max = (a > b ? a : b);//三目操作符
//	printf("更大的是 %d", max);
//	return 0;
//}



//void test() {
//	int a = 1;
//	a++;
//	printf("a= %d\n", a);
//}
//1.static修饰局部变量，使局部变量生命周期变长
//2.static修饰全局变量，让静态的全局变量只能在自己所在的源文件内部使用
//3.static修饰函数
//也是改变了函数的作用域（这种说法不准确）
//static修饰函数改变了函数的链接属性
//外部链接属性（函数本身存在的）->内部链接属性
//void test() {
//	static int a = 1; //a是一个静态的局部变量
//	a++;
//	printf("a= %d\n", a);
//}
//int main() {
//	int i = 0;
//	while (i < 5) {
//		test(); 
//		i++;
//	}
//	return 0;
//}

//#define可以定义标志符常量 如#define MAX 100
//它也可定义宏
//#define MAX(X,Y) (X>Y?X:Y)//宏的定义
//
//int main() {
//	int max = 0;
//	int a = 10;
//	int b = 20;
//	max = MAX(a, b);
//	printf("%d", max);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* p = &a;
//	*p = 50;
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	printf("%d\n", a);
//	printf("%d\n", sizeof(p));
//	return 0;
//}


/////////////////////////////////////////
#include<string.h>
struct Book
{
	char name[20];
	int price;
};
int main() {
	struct Book b1 = { "C语言",20 };
	printf("%s\n", b1.name);
	printf("%d\n", b1.price);
	struct Book* pb = &b1;
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
//	b1.name = "高中物理";//这种方法是不对的，数组名本质上是一个地址
	strcpy(pb->name, "高中物理");
	b1.price = 55;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}

