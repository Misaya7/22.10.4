#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//()和[]的优先级都要高于*

//(*(void (*)())0)(); 解释这段代码的意思
  //把0强制类型转换成: void (*)()函数指针类型--0就是一个函数的地址
  //然后调用0地址处的该函数

//void (*signal(int , void(*)(int)))(int);解释这段代码的意思
  //signal是一个函数声明 signal函数的参数有2个，
  // 第一个是int。
  // 第二个是函数指针，
  //该函数指针指向的函数的参数是int，返回类型是void  
  // signal函数的返回类型也是一个函数指针:
  //该函数指针指向的函数的参数是int，返回类型是void



//int add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//printf("%d ", add(a, b));
//	//&函数名 和 函数名 都是函数的地址
//	//printf("%p\n", &add);
//	//printf("%p\n", add);
//	int(*pa)(int, int) = add;//pa是一个函数指针，他是用来存放函数地址的指针
//	printf("%d\n", (*pa)(10, 20));
//	printf("%d\n", pa(10, 20));
//	//利用函数指针调用函数的时候，我们既可以解引用也可以不解引用
//	return 0;
//}


int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}

//int main() {
//	int x = 30;
//	int y = 10;
////	int(*pa)(int, int) = add;
//	//可以发现，上面的加减乘除函数的返回值和参数类型一样
//	//那么有没有方法可以让pa同时存储他们四个函数的地址呢？
//	//我们学过了指针数组，他可以存储多个指针，将他与函数指针结合一下
//	int (*pa[4])(int, int) = { add,sub,mul,div };
//	//printf("%d\n%d\n%d\n%d\n", pa[0](x, y), pa[1](x, y), pa[2](x, y), pa[3](x, y));
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", pa[i](2, 3));
//	}
//	return 0;
//}
//int main() {
//	int input = 0;
//	do {
//		printf("1.加法 2.减法 3.乘法 4.除法 0.退出 请输入:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			int x = 0;
//			int y = 0;
//			printf("请两个输入操作数:>");
//			scanf("%d %d", &x, &y);
//			int(*parr[5])(int, int) = { NULL,add,sub,mul,div };
//			//parr是一个函数指针数组--转移表
//			printf("%d\n", parr[input](x, y));
//		}
//		else if (input == 0) {
//			printf("退出程序\n");
//		}
//		else {
//			printf("输入错误,请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

//char* mystrcpy(char* dest, const char* str) {
//	;
//}
//int main() {
//	char(*pf)(char*, const char*) = mystrcpy;//指向函数mystrcpy
//	char(*pd[4])(char*, const char*) = {0};//可以存放四个mystrcpy函数的地址
//
//}


int add(int x, int y) {
	;
}
int main() {
	int arr[10] = { 0 };
	int(*p)[10] = arr;//数组指针

	int (*a)(int, int) = add;//函数指针

	int(*pa[10])(int, int);//函数指针数组

	int(*(*ppa)[10])(int, int) = &pa;//函数指针数组的指针  
	//指针指向的数组有10个元素，数组里元素的类型是函数指针
	return 0;
}                                              