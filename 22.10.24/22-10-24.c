#define _CRT_SECURE_NO_WARNINGS 1

//P69
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main() {
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ��,str��������ΪNULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");//�Ƿ�����
//		printf(str);
//	}
//}
//int main() {
//	Test();
//	return 0;
//}
//###########################################################
//P70


//struct Stu {        //��������
//	int n;          
//	int arr[];//����ṹ�������һ��Ԫ����δ֪��С������,����ǰ�����������һ��Ԫ��
//};              //��������������,���Ĵ�С�ǿ��Ե�����
//int main() {
//	//struct Stu s;
//	//printf("%d\n", sizeof(s));//�������4,��С����������������
//	struct Stu* ps = (struct Stu*)malloc(sizeof(struct Stu)+5*sizeof(int));
//	//�����Ϊarr������5��int���͵Ŀռ�
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;
//
//	}
//	//�����������ǵĿռ䲻������
//	struct Stu* pss = (struct Stu*)realloc(ps, 44);
//	if (pss != NULL) {
//		ps = pss;
//		for (i = 5; i < 10; i++) {
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	pss = NULL;
//	return 0;
//} 

//������������������Խ�������С�仯����
//���ﻹ��һ�ַ������Խ��

//struct Stu {      
//	int n;
//	int* arr;
//};  
//int main() {
//	struct Stu* ps = (struct Stu*)malloc(sizeof(struct Stu));//psά������ṹ��
//	
//	assert(ps != NULL);
//	ps->arr = (int*)malloc(5*sizeof(int));//����Ϊarr������5��int��С�Ŀռ�
//	
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;
//	}
//	int* pss = (int*)realloc(ps->arr, 10*sizeof(int));//׷�ӿռ�
//	
//	assert(pss != NULL);
//	ps->arr = pss;
//
//	for (i = 5; i < 10; i++) {
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", ps->arr[i]);
//	}
//	
//	free(ps->arr);//���ͷ�С��,Ҳ�����ӿռ�
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	pss = NULL;
//	return 0;
//}
