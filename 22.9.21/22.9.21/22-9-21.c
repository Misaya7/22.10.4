#define _CRT_SECURE_NO_WARNINGS 1//让scanf，strcpy...函数可以在VS中使用，加在源文件第一行

#include<stdio.h>
#include<string.h>

//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf是C语言提供的 
//	//而scanf_s是VS编译器提供的
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


//int main() 
//{
//	500,900,1000   1.字面常量
//	int num = 5;
//	printf("%d", num);
//	return 0;
//}


//int main()
//{   2.//const-常变量 不可改变 如下
//	//const修饰常变量，被修饰后他还是变量，而且拥有了常属性，并不是常量
//	const int num = 5;
//	printf("%d", num);
//	num = 55;
//	printf("%d", num);
//	return 0;
//}

//int main() {
//	int n = 10;
//	int a[n] = { 0 };//这样不行，n必须为常量，而上一行定义了n是变量
//	return 0;
//}

////3.#define 定义的标识符常量
//#define MAX 10
//
//int main() {
//	int arr[MAX] = { 0 };
//	printf("%d", MAX);
//	return 0;
//}

////4.枚举常量(一一列举)
////性别，三原色，方向...
////枚举关键字-enum
//enum Sex {
//	Male,
//  Female,
//};
////Male,Female-枚举常量
//int main() {
//	//enum Sex s = Male;
//	printf("%d\n", Male);
//	printf("%d\n", Female);
//	return 0;
//}

int main() {
	char arr1[] = "abc";
	//数据在计算机中存储的时候，存储的是二进制
	//"abc"--'a','b','c','\0'  '\0'表示字符串的结束标志
	//'\0'=0
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c' ,0 };
	char arr4[] = { 'a','b','c' ,'\0'};
	char arr5[] = "abc\0\0\0";
	//两个斜杠，可以理解为第一个斜杠被第二个斜杠转义了，
	//导致第一个斜杠只是一个斜杠，而不再是\0的结束
	char arr6[] = "abc\\0\\0\\0";
	char arr7[] = { 'a','b','c' ,'0' };
	char arr8[] = { 'a','b','c' ,'0','\0' };
	printf("%d\n", strlen(arr1));//输出3
	printf("%d\n", sizeof(arr1));//输出4 包括了字符串最后面的 \0
	printf("%d\n", strlen(arr2));//输出随机值 因为不知道\0什么时候才能出现
	printf("%d\n", sizeof(arr2));
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);		
	//printf("%s\n", arr3);
	//printf("%s\n", arr4);
	//printf("%s\n", arr5);
	//printf("%s\n", arr6);
	//printf("%s\n", arr8);
	return 0;
}

//int main() {
//
//	printf("%c\n",'\'');//将’转义，他不再是两点小括号的一个，而是一个独立的
//	//printf("%c\n", ''');
//	return 0;
//}

//int main() {
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	// \t 算是一个字符，\32 算是一个字符
//	printf("%c\n",'\32');
//	// \32 -- 32是2个8进制数字| 
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32 -- > 10进制26->作为ASCII码值代表的字符
//	return 0;
//}


//int main() {
//	int input = 0;
//	printf("你要吃红烧肉吗？(0/1)\n");
//	scanf("%d", &input);
//	if (input == 0) {
//		printf("你是67公斤\n");
//	}
//	else {
//		printf("一个暑假长20斤\n");
//	}
//	return 0;
//}

//int main() {
//	int n = 0;
//	int sum = 0;
//	while (n <= 100) {
//		sum = sum + n;
//		n++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int Add(int a, int b) {
//	int c = a + b;
//	return c;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	printf("请输入\n");
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放十个整数的数组 
//	while(i < 10) {
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main() {
//	// & 按位与
//	// | 按位或
//	// ^ 按位异或
//	// 异或运算规律 
//	// 二进制位相同则为0
//	// 二进制位不同则为1
//	int i = 3;
//	//011
//	int b = 5;
//	//101
//	int a = i & b;
//	//011 101 -> 001 -> 1
//	int c = i ^ b;//不是次方，是异或
//	//011 101 -> 110 -> 6
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	int a = 0;
//  a = a + 10;
//	a += 10;//和上一个一样
//	a = a - 10;
//	a -= 10;//和上一个一样
//}