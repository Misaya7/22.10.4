#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>//使用断言的头文件
void my_strcpy1(char* arr1, char* arr2) {//使用函数实现strcpy(很龊，6分)
	while (*arr2 != '\0') {
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	*arr1 = *arr2;
}
void my_strcpy2(char* arr1, char* arr2) {//使用函数实现strcpy(优化后，就那样)
	while (*arr2 != '\0') {
		*arr1++ = *arr2++;
	}
	*arr1 = *arr2;
}
void my_strcpy3(char* arr1, char* arr2) {//使用函数实现strcpy(优化后，还行)
	while (*arr1++ = *arr2++) {//因为是后置++，arr2首先赋值给arr1，然后++
		;                    //arr2赋给arr1的值是什么，括号中表达式的值就是什么
	}                        //所以当赋值'\0'后，while循环就停止了
}                             //但如果有空指针这个代码就挂了
void my_strcpy4(char* arr1, char* arr2) {//使用函数实现strcpy(优化后，彳亍，7分)
	if (arr1 != NULL && arr2 != NULL) {//保证没有传递空指针
	 	while (*arr1++ = *arr2++) {//但当有空指针的时候我们只是规避错误
			;                   //而没有告诉用户哪里出错了
		}
	} 
}
void my_strcpy5(char* arr1, char* arr2) {//使用函数实现strcpy(优化后，不错 8分)
	assert(arr1 != NULL && arr2 != NULL);//断言
	while (*arr1++ = *arr2++) {//断言:如果为真，什么都不发生 为假，报错
		;
	}
}
void my_strcpy6(char* arr1, const char* arr2) {
	//使用函数实现strcpy(优化后，很好 ) 使用const，*arr2不会被改变 9分
	assert(arr1 != NULL && arr2 != NULL);//断言
	while (*arr1++ = *arr2++) {//断言:如果为真，什么都不发生 为假，报错
		;
	}
}
char* my_strcpy7(char* arr1, const char* arr2) {//将arr1的首地址返回
	//使用函数实现strcpy(优化后，完美 10分)
	char* ret = arr1;
	assert(arr1 != NULL && arr2 != NULL);//断言
	while (*arr1++ = *arr2++) {//断言:如果为真，什么都不发生 为假，报错
		;           
	}
	return ret;//返回目的地的起始地址
}
//int main() {
//	char arr1[] = "########";
//	char arr2[] = "hello";
////	strcpy(arr1, arr2);//系统的字符串复制
////	my_strcpy5(NULL, arr2);
//	my_strcpy5(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", my_strcpy7(arr1, arr2));
//	return 0;
//}


//void qwe() {
//	//int a = 0;
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//
//}
//int main() {
//    int a = 0;
//	qwe();
//	qwe();
//	qwe();
//	return 0;
//}

//int main() {            //（和下面的代码一起看）
//	const int num = 10;//主观上我们希望num不可被修改
//	int* p = &num;//但有了这个p指针之后我们可以通过解引用操作来改变num的值
//	*p = 20;      //这显然违背了我们的意愿
//	printf("%d\n", num);
//	return 0;
//}
//int main() {
//	int n = 0;
//	const int num = 10;
//
//	//const int* p = &num;//const放在指针变量中的*的左边时，修饰的是*p
//	//*p = 20;            //也就是:不能通过p来改变*p的值
//	//p = &n;
//
//	//int* const p = &num;//const放在指针变量中的*的右边时，修饰的是p
//	//*p = 20;            //也就是:不能改变p
//	//p = &n;
//
// 	printf("%d\n", num);
//	return 0;
//}
int my_strlen(const char* arr) {//实现strlen函数 保证了arr的值不会被改变
	assert(arr != NULL);//保证指针的有效性
	int count = 0;
	while (*arr++ != '\0') {
		count++;
//		arr++;
	}
	return count;
}
//int main() {
//	char arr1[] = "1\\088";
//	//char arr2[] = "我们";
//	printf("%d\n", my_strlen(arr1));
//	//printf("%d\n", strlen(arr2));
//	return 0;
//}

int main() {
	char arr[] = "abcdef";
	char* pc = arr;
	printf("%s\n", arr);
	printf("%s\n", pc);
	return 0;
}