#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	//char* p = "qwer";//"qwer"��һ�������ַ��� ����p������ַ����׵�ַ
//	const char* p = "qwer";//����һ�ָ��õ�д�������涨��*p�����Ա��޸�
//
////	*p = 'W';//qwer��һ�������ַ��������ǲ����Ա��޸ĵģ���������Ĵ����ǲ��Ե�
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";//���������ַ������������ǲ������޸�����ͬ
//	const char* str4 = "hello bit.";//Ϊ�˽�ʡ�ռ䣬����ֻ��һ��
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

//int main() {           ////ָ������
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

//int main() {   //����ָ�루��ֻ���ڶ�ά�����������ʱ�����ʹ�õļ�ֵ��
//               //һά����ʹ�����������紫ͳ����
////	int* parr[10];  ����parr�Ⱥ�[]��ϣ�����һ��ָ������
////	int(*parr)[10]; ����parr�Ⱥ�*��ϣ�����һ������ָ�� 
//	int* p = NULL;//����ָ��--ָ�����ε�ָ��--���Դ�����εĵ�ַ
////arr--��Ԫ�ص�ַ   ����ָ��--ָ�������ָ��--���Դ������ĵ�ַ
////&arr--����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int* parr = &arr; �����ǲ��еģ�parr����������ָ����ô���Դ������ĵ�ַ��
////	int* parr[10] = &arr; ����Ҳ���У�����parr��һ��ָ�����飬������ָ��
//	int(* parr)[10] = &arr;//��ȷ parr��������ָ��
//	return 0;
//}

//int main() {
//	char* arr[5];//arr��һ�����char*���͵�ָ������� ָ������
//	char* (*pa)[5] = &arr; 
//	//����^:(*pa)֤������һ��ָ�룬char* [5]���������ͣ�����ʾpa��һ��ָ��
//	//����Ϊchar*�İ���5��Ԫ�ص�����
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
//		//printf("%d ",(*pa)[i]); �������е�һ�ַ���
//		//printf("%d ",*(*pa + i)); ��Ҳ�����е�һ�ַ��� *pa==arr
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//void print1(int arr[3][5], int x, int y) {//��ͨ����
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*parr)[5], int x, int y) {//��������ָ��
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			//printf("%d ", *(*(parr+i)+j));//Ҳ��һ�ַ���
//			printf("%d ", (*(parr+i))[j]);
//			//�����ִ�ӡ�����������ҵ��У�Ȼ��ͨ�����ҵ�ÿһ��Ԫ��
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
////	print1(arr, 3, 5); ��ά����������������һ�еĵ�ַ
//	print2(arr, 3, 5); 
//	return 0;
//}