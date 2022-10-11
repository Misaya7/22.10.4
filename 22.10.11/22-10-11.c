#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	//char* p = "qwer";//"qwer"是一个常量字符串 这里p存的是字符串首地址
//	const char* p = "qwer";//这是一种更好的写法，他规定了*p不可以被修改
//
////	*p = 'W';//qwer是一个常量字符串，他是不可以被修改的，所以这里的代码是不对的
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";//这是两个字符串常量，他们不可以修改且相同
//	const char* str4 = "hello bit.";//为了节省空间，我们只存一份
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int main() {           ////指针数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	} 
//	return 0;
//}

//int main() {   //数组指针（他只有在二维及以上数组的时候才有使用的价值）
//               //一维数组使用它甚至不如传统方法
////	int* parr[10];  这里parr先和[]结合，他是一个指针数组
////	int(*parr)[10]; 这里parr先和*结合，他是一个数组指针 
//	int* p = NULL;//整形指针--指向整形的指针--可以存放整形的地址
////arr--首元素地址   数组指针--指向数组的指针--可以存放数组的地址
////&arr--数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int* parr = &arr; 这样是不行的，parr现在是整形指针怎么可以存放数组的地址呢
////	int* parr[10] = &arr; 这样也不行，这样parr是一个指针数组，而不是指针
//	int(* parr)[10] = &arr;//正确 parr就是数组指针
//	return 0;
//}

//int main() {
//	char* arr[5];//arr是一个存放char*类型的指针的数组 指针数组
//	char* (*pa)[5] = &arr; 
//	//解释^:(*pa)证明他是一个指针，char* [5]是他的类型，他表示pa是一个指向
//	//类型为char*的包含5个元素的数组
//
//	int arr2[10];
//	int(*p)[10] = &arr2;
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*pa)[10] = &arr;
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		//printf("%d ",(*pa)[i]); 这是其中的一种方法
//		//printf("%d ",*(*pa + i)); 这也是其中的一种方法 *pa==arr
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//void print1(int arr[3][5], int x, int y) {//普通遍历
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*parr)[5], int x, int y) {//利用数组指针
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			//printf("%d ", *(*(parr+i)+j));//也是一种方法
//			printf("%d ", (*(parr+i))[j]);
//			//这两种打印方法都是先找到行，然后通过行找到每一个元素
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
////	print1(arr, 3, 5); 二维数组的数组名代表第一行的地址
//	print2(arr, 3, 5); 
//	return 0;
//}