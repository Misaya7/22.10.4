#define _CRT_SECURE_NO_WARNINGS 1

//指针的类型决定了指针向前或者向后走一步有多大（距离）
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p:*p能够访问4个字节 char* p; *p 能够访问1个字节 double* p; *p能够访问8个字节

#include<stdio.h>
#include<string.h>
//int main() {
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值 这就是一个野指针
//
//	return 0;
//}

//int main()
//{
//    printf("%d\n", strlen("abcdef"));//6
//    // \62被解析成一个转义字符
//    printf("%d\n", strlen("c:\test\628\test.c"));//
//    return 0;
//}

//int main() {
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[8] - &arr[0]);//指针减指针得到的是两个指针之间的元素个数
//	return 0;
//}


//int str(char* parr) {             // 可利用指针相减得到他们之间元素个数这个特性
//	char* start = parr;           //来计算字符串长度
//	char* end = parr;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//int str(char* parr) {            //传统方法 
//	int count = 0;
//	int i = 0;
//	while (parr[i] != '\0') {
//		count++;
//		i++;
//	}
//	return count;
//}
//int main() {
//	char arr[] = "good";
//	int num = str(arr);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    int* p = arr; //指针存放数组首元素的地址
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//    }
//    return 0;
//}

//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	return 0;
//}


////指针数组--数组--存放指针的数组
////数组指针--指针
//int main() {
//	int a = 0;
//	int b = 10;
//	int c = 20;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}