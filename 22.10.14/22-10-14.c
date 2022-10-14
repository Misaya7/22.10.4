#define _CRT_SECURE_NO_WARNINGS 1
//P40
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct stu {                      //自己实现冒泡函数
	                              //可排序任何类型的元素
	char name[20];
	int score;
};
int cmp_int(const void* p, const void* pp) {
	return (*(int*)p - *(int*)pp);
}
int cmp_float(const void* p, const void* pp) {
	if (*(float*)p > *(float*)pp) {
		return 1;
	}
	else if (*(float*)p == *(float*)pp) {
		return 0;
	}
	else
		return -1;
}
int cmp_score(const void* p, const void* pp) {
	return ((struct stu*)p)->score - ((struct stu*)pp)->score;
}
int cmp_name(const void* p, const void* pp) {
	return strcmp(((struct stu*)p)->name, ((struct stu*)pp)->name);
}
void swap(char* dest1, char* dest2, int width) {
	int i = 0;
	for (i = 0; i < width; i++) {
		char tem = *dest1;
		*dest1 = *dest2;
		*dest2 = tem;
		dest1++;
		dest2++;
	}
}
void my_maopao(void* dest, int sz, int width, int (*cmp)(const void* q, const void* qq)) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - i - 1; j++) {
			if (cmp((char*)dest + j * width, (char*)dest + (j + 1) * width) > 0) {
				swap((char*)dest + j * width, (char*)dest + (j + 1) * width, width);
			}
		}	
	}
}
//int main() {            
//	int i = 0;
//	int arr[9] = { 1,4,7,8,9,6,5,2,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_maopao(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main() {
//	struct stu s[] = { {"zhangsan",55},{"lisi",24},{"wangwu",100} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_maopao(s, sz, sizeof s[0], cmp_score);
////	my_maopao(s, sz, sizeof s[0], cmp_name);
//	return 0;
//}

//int main() {               
//	int i = 0;
//	float arr[4] = { 2.8,5.5,8.3,3.5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_maopao(arr, sz, sizeof(arr[0]), cmp_float);
//	for (i = 0; i < sz; i++) {
//		printf("%f ", arr[i]);
//	}
//	return 0;
//}

////#######################################################################
////P40
 //一维数组
//int main() {
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0] + 1));
//	return 0;
//}
////16 4 4 4 4 4 16 4 4 4

// 2.这里的数组名代表首元素地址，a+0还是首元素地址
//#######################################################################


//字符数组
//int main() {
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

//	//6 4 1 1 4 4 4
	//char arr[] = { 'a','b','c','d','e','f' };

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	//return 0;
//}
//##############################################################

////字符串
//int main() {
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));     //*
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	//7 4 1 1 4 4 4 
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));            *
//	printf("%d\n", strlen(arr + 0));        *
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));          *
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));     *
//	return 0;
//}
// 
// 6 6 error error 6 随机值 5
//#######################################################

int main() {
	//char* p = "abcdef";
	//printf("%d\n", sizeof(p)); //  *
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p));
	//printf("%d\n", sizeof(p[0]));
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));
//
// 
//4 4 1 1 4 4 4 
//
////4.int arr[10];arr[0]==*(arr+0);p[0]==*(p+o)=='a'
	char* p = "abcdef";
	printf("%d\n", strlen(p));//6         *
	printf("%d\n", strlen(p + 1));//5     *
	//printf("%d\n", strlen(*p));//error
	//printf("%d\n", strlen(p[0]));//error
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5 * 
//
//	return 0;
}