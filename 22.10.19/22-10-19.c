#define _CRT_SECURE_NO_WARNINGS 1

//P52
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int my_strlen(char* arr) {  //递归实现strlen函数
//	if (*arr) {
//		return 1 + my_strlen(arr+1);
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {                    //strlen函数的返回值类型为unsigned int
//	char arr[] = "abc";
//	char arr1[] = "abcdef";
//	if (strlen(arr) - strlen(arr1) > 0) {
//		printf("hehe");
//	}
//	else {
//		printf("haha");
//	}
//
//	return 0;
//}

//int main() {               //strcpy函数不仅拷贝字符串，还拷贝\0
//	char arr1[] = "abcde";
//	char arr2[] = "oo";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//char* my_strcpy(char* arr1, const char* arr2) {//优秀的strcpy函数实现
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	while (*arr1++ = *arr2++) {
//		;
//	}
//	return ret;
//}
//
//int main() {
//    char arr1[10] = "78";
//	char arr2[] = "88888";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main() {             //strcat--追加函数
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//char* mystrcat(char* arr1,const char* arr2) {//优秀的strcat(追加函数)实现 
//    assert(arr1);
//    assert(arr2 != NULL); //这两个断言等价
//    char* ret = arr1;
//    while (*arr1)//这三个while中的条件等价
//        //while(*arr1 != 0)
//        /*while (*arr1 != '\0')*/ {
//        arr1++;
//    }
//    while (*arr1++ = *arr2++) { //实际上就是字符串拷贝功能
//        ;
//    }
//    
//    return ret;
//}
//
//int main() {
// 	char arr1[20] = "hello";
//    char arr2[] = " my world";
//    printf("%s\n", mystrcat(arr1, arr2));
//	return 0;
//}

////#############################################
////P53
//int my_strcmp(const char* arr1,const char* arr2) {//优秀的strcmp函数实现
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2) {
//		if (*arr1 == '\0') {
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 > *arr2) {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//}
//int main() {
//	char arr1[] = "abe";
//	char arr2[] = "abcdq";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	return 0;
//}


//int main() {                       //strncpy函数使用
//	char arr1[20] = "abaqwert";
//	char arr2[] = "qwe";
//	strncpy(arr1, arr2, 6);
//	//现在arr2虽然没有6个，但是他还是会copy6个，多余的用'\0'补齐
//	return 0;  
//}

//int main() {         //strncat函数使用
//	char arr1[20] = "he\0xxxxxx";
//	char arr2[] = "qwe";
//	strncat(arr1, arr2, 6);
//	//和上面的strncpy不同，即便超出了arr2的长度，他也只会在arr1后补一个'\0'
//	return 0;  
//}

int main() {           //strtok函数使用
	char arr[] = "qwe.ert.erer.ee";
	char arr2[30] = { 0 };
	strcpy(arr2, arr);
	char* p = ".";
	char* ret = NULL;
	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p)) {
		printf("%s\n", ret);
	}
	//这个函数较为复杂:可以理解为切割函数，返回类型为char*
	//需要两个参数，arr2和*p，arr2可以是一个字符串 *p是你想切割的部分(也可是数组)
	//因为切割后，arr2也将变化，所以并不建议使用本来的arr2，更好的方法是
	//使用arr2的拷贝版本。 
	//第一次使用:传入arr2的首地址和p
	//第n次使用:传入NULL和p
	//找到后返回前面字符串的首地址
	//当arr2中再也找不到p时,返回NULL
	//因为此函数有记忆功能，第一次使用后将第一个p赋值为'\0'，然后把前面的
	//字符串的首地址返回，第n次时候只需要赋给NULL和p参数即可完成第一次使用的功能
	//所以for循环实现这个函数十分巧妙
	return 0;
}