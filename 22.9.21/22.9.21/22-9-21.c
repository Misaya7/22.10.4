#define _CRT_SECURE_NO_WARNINGS 1//��scanf��strcpy...����������VS��ʹ�ã�����Դ�ļ���һ��

#include<stdio.h>
#include<string.h>

//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf��C�����ṩ�� 
//	//��scanf_s��VS�������ṩ��
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


//int main() 
//{
//	500,900,1000   1.���泣��
//	int num = 5;
//	printf("%d", num);
//	return 0;
//}


//int main()
//{   2.//const-������ ���ɸı� ����
//	//const���γ������������κ������Ǳ���������ӵ���˳����ԣ������ǳ���
//	const int num = 5;
//	printf("%d", num);
//	num = 55;
//	printf("%d", num);
//	return 0;
//}

//int main() {
//	int n = 10;
//	int a[n] = { 0 };//�������У�n����Ϊ����������һ�ж�����n�Ǳ���
//	return 0;
//}

////3.#define ����ı�ʶ������
//#define MAX 10
//
//int main() {
//	int arr[MAX] = { 0 };
//	printf("%d", MAX);
//	return 0;
//}

////4.ö�ٳ���(һһ�о�)
////�Ա���ԭɫ������...
////ö�ٹؼ���-enum
//enum Sex {
//	Male,
//  Female,
//};
////Male,Female-ö�ٳ���
//int main() {
//	//enum Sex s = Male;
//	printf("%d\n", Male);
//	printf("%d\n", Female);
//	return 0;
//}

int main() {
	char arr1[] = "abc";
	//�����ڼ�����д洢��ʱ�򣬴洢���Ƕ�����
	//"abc"--'a','b','c','\0'  '\0'��ʾ�ַ����Ľ�����־
	//'\0'=0
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c' ,0 };
	char arr4[] = { 'a','b','c' ,'\0'};
	char arr5[] = "abc\0\0\0";
	//����б�ܣ��������Ϊ��һ��б�ܱ��ڶ���б��ת���ˣ�
	//���µ�һ��б��ֻ��һ��б�ܣ���������\0�Ľ���
	char arr6[] = "abc\\0\\0\\0";
	char arr7[] = { 'a','b','c' ,'0' };
	char arr8[] = { 'a','b','c' ,'0','\0' };
	printf("%d\n", strlen(arr1));//���3
	printf("%d\n", sizeof(arr1));//���4 �������ַ��������� \0
	printf("%d\n", strlen(arr2));//������ֵ ��Ϊ��֪��\0ʲôʱ����ܳ���
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
//	printf("%c\n",'\'');//����ת�壬������������С���ŵ�һ��������һ��������
//	//printf("%c\n", ''');
//	return 0;
//}

//int main() {
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	// \t ����һ���ַ���\32 ����һ���ַ�
//	printf("%c\n",'\32');
//	// \32 -- 32��2��8��������| 
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32 -- > 10����26->��ΪASCII��ֵ������ַ�
//	return 0;
//}


//int main() {
//	int input = 0;
//	printf("��Ҫ�Ժ�������(0/1)\n");
//	scanf("%d", &input);
//	if (input == 0) {
//		printf("����67����\n");
//	}
//	else {
//		printf("һ����ٳ�20��\n");
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
//	printf("������\n");
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����ʮ������������ 
//	while(i < 10) {
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main() {
//	// & ��λ��
//	// | ��λ��
//	// ^ ��λ���
//	// ���������� 
//	// ������λ��ͬ��Ϊ0
//	// ������λ��ͬ��Ϊ1
//	int i = 3;
//	//011
//	int b = 5;
//	//101
//	int a = i & b;
//	//011 101 -> 001 -> 1
//	int c = i ^ b;//���Ǵη��������
//	//011 101 -> 110 -> 6
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	int a = 0;
//  a = a + 10;
//	a += 10;//����һ��һ��
//	a = a - 10;
//	a -= 10;//����һ��һ��
//}