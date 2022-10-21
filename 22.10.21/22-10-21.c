#define _CRT_SECURE_NO_WARNINGS 1
//P58

#include<stdio.h>
//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量(对象)
//属性--姓名,电话，年龄

//struct Stu {
//	char name[20];
//	char tel[11]; //这三个是成员变量
//	int age;
//}s4,s5,s6;    //全局结构体变量
//struct Stu s3;//全局结构体变量
//
//
//int main(){ 
//	//创建局部结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//typedef struct Node {    //typedef重新起名字
//	char name[20];
//	char tel[11]; //这三个是成员变量
//	int age;
//}Node;    //全局结构体变量
//
//int main() {
//	Node n1;
//
//	return 0;
//}
//####################################################
//P59

struct S1	//发现S1和S2的大小是不一样的，这就牵扯到一个问题
{           //结构体内存对齐   VS默认对齐数为4
	        //可以说 结构体内存对齐就是拿空间换时间
	char c1;//设计结构体时为了尽可能的缩小空间缩短时间 
	int i;  //建议让占空间小的成员集中在一起
	char c2;
};
struct S2
{
	char c1; 
	char c2;
	int i;
};
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c1;
	struct S3 s3;       //这里要把s3放到s3最大的对齐数的整数倍数,即8
	double d;           
};

int main() {
	printf("%d\n", sizeof(struct S1));// 12 8 16 32
	printf("%d\n", sizeof(struct S2));
	printf("%d\n", sizeof(struct S3));
	printf("%d\n", sizeof(struct S4));
	return 0;
}

//struct S            //这里的默认对齐数是8，所以他占16个字节
//{
//	char c1;
//	double d;
//};
//
//#pragma pack (4)     //pragma 可以修改默认对齐数
//struct Q            //这里修改默认对齐数为4，所以他占12个字节
//{
//	char c1;
//	double d;
//};
//#pragma pack()      //修改完毕，里面的Q的默认对齐数就是4了
//
//#include<stddef.h>  //offsetof的头文件
//int main() {
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	struct Q q;
//	printf("%d\n", sizeof(q));
//
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, d));
//	printf("%d\n", offsetof(struct Q, c1));
//	printf("%d\n", offsetof(struct Q, d));
//
//	//offsetof并不是一个函数，而是一个宏
//	//他可以计算结构体中某变量相当于首地址的偏移
//	return 0;
//}

//####################################
//P61

//struct A {      //芝士位段，成员名后面有一个冒号和一个数字(位段可省空间)
//	int _a : 2; //位段--二进制位 a只需要2个bit位
//	int _b : 5;//b只需要5个比特位
//	int _c : 10;//.....
//	int _d : 30;//数字不可以超过32
//}; 
////47bit--6个字节
////系统看到是int类型的变量，首先分配了4个字节，也就是32个bit给A
////a b c用完之后，还剩15个比特位，不足以满足d的30个比特位的需求
////所以系统又开辟了4个字节32个bit为了存放d，所以一共分配了8个字节给A
//int main() {
//	struct A a;
//	printf("%d\n", sizeof(a));//8个字节
//	return 0;
//}

//################################################
//P62

//enum Sex {          //枚举
//	male,           //里面是枚举常量
//	female,
//	secret,
//};
//enum Color {
//	red = 7,
//	blue = 8,
//	green = 9,
//};
//enum Month {
//	sept = 9,
//	oct,
//	nov,
//};
//int main() {
//	enum Sex s = male;
//
//	enum Sex q;
//	enum Color w;
//	enum Month e;
//	//枚举常量默认取值从0开始依次加1
//	printf("%d %d %d\n", male, female, secret);//0 1 2
//	printf("%d %d %d\n", red, blue, green );//7 8 9 
//	printf("%d %d %d\n", sept,oct,nov );//9 10 11
//
//	printf("%d\n", sizeof(q));//枚举变量在初始化的时候默认为0即int类型
//	printf("%d\n", sizeof(w));//故其大小为4个字节
//	printf("%d\n", sizeof(e));
//	return 0;
//}

//union Un {  //联合体--共同体
//	char c; //我们开辟了一个空间,c和i可以共同使用这片空间
//	int i;  //在这里我们只需要四个字节的空间就可以满足我们的需求
//};          //联合变量的大小至少是最大成员的大小
//
//int main() {
//	union Un u;
//	printf("%d\n", sizeof(u));//和结构体的偏移一个思路
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	u.i = 0x11223344;
//	u.c = 0x66;
//	printf("%x\n", u.i);
//
//	return 0;
//}

//int check_sys(){//判断大小端的非常巧妙的代码
//union u {       //利用了共用体的特点
//	int i;
//	char o;
//}p;
//p.i = 1;
//return p.o;
//}
//
//int main() {
//	if (check_sys())
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}