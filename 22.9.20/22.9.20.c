//包含一个stdio.h的文件
//std - 标准standard i-input o-output
#include<stdio.h>
//int main() {//主函数-程序的入口 有且只有一个
//	        //main之前的int表示main函数调用后返回一个整型值
//	printf("hehe\n");//printf是C语言的库函数 #include<stdio.h>
//	return 0;
//}
//
//int main() {
//	char ch = 'A';
//	printf("%c\n", ch);    //%c-打印字符
//	return 0;
//}
// 
//int main() {
//	float wei = 95.5;
//	printf("%d\n", sizeof(char));//单位都是字节
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(double));
//}

int main() {
	//extern 声明外部符号，可以引用其他源文件的变量
	extern int we;
	printf("%d\n", we);
	return 0;
}