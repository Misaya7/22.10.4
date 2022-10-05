#define _CRT_SECURE_NO_WARNINGS 1

#include"declaration.h"


//int main() {        //使用冒泡函数
//	int i = 0;
//	int arr[9] = { 1,78,95,45,64,13,54,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//9
//    maopao(arr,sz);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[9] = { 1,78,95,45,64,13,54,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
////	init(arr, sz);
//	maopao(arr, sz);
//	print(arr,sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int main() {
//	int arr1[] = { 9,8,7,6,5,4,3,2,1 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	exchange(arr1, arr2,sz);
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}

//int a;
//int main() {         //局部变量不初始化是一个随机值
//    int a;     	   //全局变量不初始化默认0
//	printf("%d", a);
//	return 0;
//}

//int i;                      //一道坑题  (作业讲解1)
//int main() { 
//	i--;
//	if (i > sizeof(i)) { //sizeof计算所占内存大小，它的返回值一定是>=0的
//		printf(">\n");   //所以规定了他的返回值是unsigned类型的
//	}                    //此时当int与unsigned比较时要先把int转换成unsigned
//	else {               //i=-1，补码为111111111111111111111111
//		printf("<\n");   //转化为unsigned过程中符号位的1就变成了数值位
//		                 //他就会是一个非常大的正数 原码，补码：11111111111111111
//	}
//	return 0;
//}


//int main() {                    //一道坑题 (作业讲解1)
//	int a, b, c; a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++, b += a++ + c;  //=的优先级高于，所以c++后直接赋值给了b
//	printf("a = %d b = %d c = %d\n ", a, b, c);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);	
//	count = erjinyi2(a);
//	printf("%d\n", count);
//	return 0;
//}

//int main() {
//	int a, b = 0;
//	scanf("%d%d", &a, &b);
//	int count = get_diff(a, b);
//	printf("%d\n", count);
//	return 0;
//}

//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	ji_ou(i);
//	return 0;
//}


//#define oo(x) x+x;
//int main() {
//	int i = 5 * oo(7);
//	printf("%d", i);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[] = { 87,78,51,568,15,48,6,52 };
//	int* parr = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(parr+i));
//
//	}
//}

//int main() {               //根据输入的行数输出乘法表
//	int i = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d", &t);
//	for (i = 1; i <= t; i++) {
//		for (n = 1; n <= i; n++) {
//			printf("%-2d*%d=%-3d ", i, n, i * n);
//		}
//		printf("\n");
//	}
//}

//int main() {                  //100-200的素数
//	int n = 0;
//	int i = 0;
//	for (n = 101; n <= 200; n+=2) {
//		for (i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0) {
//				break;
//			}
//		}	
//		if (i > sqrt(n)) {
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//int main() {        //函数实现阶乘
//	int i = 20;
//	double num = 1.0;
//	while (i > 1) {
//		num = num * i * (i - 1);
//		i -= 2;
//	}
//	printf("%lf", num);
//	return 0;
//}
//int main() {            //函数实现阶乘
//	int i = 0;
//	double num = 1.0;
//	for (i = 2; i < 10; i++) {
//		num = num * i;
//	}
//	printf("%lf",num);
//	return 0;
//}
//int main() {          //递归实现阶乘
//	int i = 5;
//	int num = digui(i);
//	printf("%d",num);
//	return 0;
//}
//int digui(int i) {
//	if (i > 1) {
//		return i * digui(i - 1);
//	}
//	else {
//		return 1;
//	}
//}

//int main() {             //求出数字的每一位相加结果
//	int i = 123456;
//	int num = plus(i);
//	printf("%d", num);
//	return 0;
//}
//int plus(int i) {
//	if (i == 0) {
//		return 0;
//	}
//	return plus(i / 10) + i % 10;
//}

int main() {
	int i = 2;
	int k = -3;
	double num = cifang(i, k);
	printf("%lf", num);
	return 0;
}

