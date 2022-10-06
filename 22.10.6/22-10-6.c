#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//struct --结构体关键字 stu-- 结构体标签 struct stu -- 结构体类型

//struct stu
//{
//	//成员变量
//	char name[10];
//	short age;
//	char tele[12];
//}s1, s2, s3;  //他们是三个全局的结构体变量

//typedef struct stu
//{
//	//成员变量
//	char name[10];
//	short age;
//	char tele[12];
//}Stu; //Stu是struct stu的新名字，现在就代表 struct stu
//
//int main() {
//	
//	struct stu s1;//局部的结构体变量
//	Stu s2 = { "张三",15,"12398210989" };//初始化
//	return 0;
//}

//struct P {
//	int a;
//	char arr[10];
//};
//
//struct O {
//	double i;
//	char orr[15];
//	struct P p1;    //结构体包含结构体
//};
//
//int main() {
//	struct O o1 = { 1.0,"1234",{5,"132"} };
//	printf("%lf\n", o1.i);
//	printf("%s\n", o1.p1.arr);
//	return 0;
//}

int main() {              //判断大小端
	int a = 0x11223344;
//	printf("%x", a);
	char* pa = &a;
	printf("%x\n", *pa);
	if (*(pa) == 0x44) {
		printf("小端");

	}
	else {
		printf("大端");
	}
	return 0;
}