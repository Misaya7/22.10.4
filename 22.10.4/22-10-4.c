#define _CRT_SECURE_NO_WARNINGS 1

//ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩
//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p:*p�ܹ�����4���ֽ� char* p; *p �ܹ�����1���ֽ� double* p; *p�ܹ�����8���ֽ�

#include<stdio.h>
#include<string.h>
//int main() {
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ �����һ��Ұָ��
//
//	return 0;
//}

//int main()
//{
//    printf("%d\n", strlen("abcdef"));//6
//    // \62��������һ��ת���ַ�
//    printf("%d\n", strlen("c:\test\628\test.c"));//
//    return 0;
//}

//int main() {
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[8] - &arr[0]);//ָ���ָ��õ���������ָ��֮���Ԫ�ظ���
//	return 0;
//}


//int str(char* parr) {             // ������ָ������õ�����֮��Ԫ�ظ����������
//	char* start = parr;           //�������ַ�������
//	char* end = parr;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//int str(char* parr) {            //��ͳ���� 
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
//    int* p = arr; //ָ����������Ԫ�صĵ�ַ
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
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	return 0;
//}


////ָ������--����--���ָ�������
////����ָ��--ָ��
//int main() {
//	int a = 0;
//	int b = 10;
//	int c = 20;
//	int* arr[3] = { &a,&b,&c };//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}