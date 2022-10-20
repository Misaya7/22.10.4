#define _CRT_SECURE_NO_WARNINGS 1

//P55
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<assert.h>
//int main() {       //strerror函数
//	//char* str = strerror(errno);
////strerror函数的作用就是把错误码转换成文字信息，告诉我们具体错在了哪里
////errno是一个全局的错误码变量
////当C语言的库函数在执行过程中发生了错误，就会把相应的错误码赋值给errno中
//	FILE* pf = fopen("22-10-20.txt", "r");
////fopen函数的返回值是一个FILE*的指针 就是一个打开文件的函数
////如果函数调用失败了，就会返回一个NULL指针
//	if (pf == NULL) {
//		printf("%s", strerror(errno));
//	}
//	else {
//		printf("success\n");
//	}
//	return 0;
//}

//int main() {         //以下示范都是 字符分类函数 还有很多 
//	char ch = 'W';
////	int ret = islower(ch);//判断是否为小写字符
////	int ret = isdigit(ch);//判断是否为十进制数组
//	int ret = isupper(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {                 //字符转化函数
//	//char ch = tolower('W');//转换为小写
//	//putchar(ch);
//
//	//char sh = toupper('a');//转换为大写
//	//putchar(sh);
//
//	char arr[50] = "QSsD hqWDHoSwSD";
//	int i = 0;
//	while (arr[i]) {
//		if (isupper(arr[i])) {
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}

//###############################################
//P56
//struct S {                  //memcpy函数使用
//	char name[10];
//	int age;
//};
//
//int main(){        
//	//上面学到的strlen,strstr,strcpy,strcmp等等函数
//	//他们的操作对象都是字符串,也就是说基本上所有的字符串函数都要和'\0'打交道
//	//如果我们操作的对象是 整形数组,浮点型数组,结构体数组等 就不能用这些函数
//	如memcpy，memmove等我们称为内存函数
// 
//	//int arr1[10] = { 1,2,3,4,5 };
//	//int arr2[] = { 0,7,8,9 };
//	//memcpy(arr1, arr2, sizeof(arr2));
//
//	struct S arr3[2] = { {"张三",20},{"李四",15} };
//	struct S arr4[5] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//                    //目的地      //源地址   //拷贝多少字节
//void* my_memcpy(void* arr1, const void* arr2, size_t num) {//标准的memcpy实现
//	assert(arr1 && arr2);
//	void* ret = arr1;
//	while (num--) {
//		*(char*)arr1 = *(char*)arr2;
//		((char*)arr1)++;
//		((char*)arr2)++;
//	}
//	return ret;
//}
//struct S {                  
//	char name[10];
//	int age;
//};
//
//int main(){
//	//struct S arr3[2] = { {"张三",20},{"李四",15} };
//	//struct S arr4[5] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//
//	//int arr1[10] = { 1,2,3,4,5 };
//	//int arr2[] = { 0,7,8,9 };
//	//my_memcpy(arr1, arr2, sizeof(arr2));
//
////C语言规定 memcpy 只要处理 不重叠的内存拷贝就可以
////	        memmove 处理重叠的内存拷贝
////事实上    memcpy 也可处理重叠的函数
////	        memmove 既可以处理重叠的也可以处理不是重叠的
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr1+2, arr1, 20);
//
//	//处理这种重叠拷贝的情况，就可以用memmove函数
//	memmove(arr1 + 2, arr1, 20);
//
//	return 0;
//}

//########################################
// P57

//int main() {              //memcmp函数使用
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,5,6 };
//	printf("%d", memcmp(arr1, arr2, 16));//这里的16指的是16个字节 
//	return 0;
//}

int main() {        //memset(内存设置)函数 
	int arr1[10] = { 0 };
	memset(arr1, 1, 10);//10是字节
	char arr2[10] = { 0 };
	memset(arr2, '*', 4);//4是字节
	return 0;
}