#define _CRT_SECURE_NO_WARNINGS 1
//P66

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main() {
//	int* p = (int*)malloc(10 * sizeof(int));//malloc���䶯̬�ڴ溯��
//	if (p == NULL) {   //�����жϷ����Ƿ�ɹ�,û�гɹ��ͻ��p��ָ��
//		printf("%s", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//�ͷ�p��ָ��Ŀռ�
//	p = NULL;//��pָ����ΪNULL
//	return 0;
//}

//#############################################
//P67

//int main() {
//	int* p = (int*)calloc(10, sizeof(int));//calloc��̬�����ڴ溯��
//	             //calloc(Ԫ�ظ���,ÿ��Ԫ���ж����ֽ�)
//	             //calloc�������ÿ���ֽڳ�ʼ��Ϊ0,mallocû���������
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p + i)); //�Ѿ���ʼ������,��ӡ��������0
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main() {
//	int* p = (int*)malloc(20);//������20���ֽ�
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		*(p + i) = i;
//	}
//
//	//����ʹ����malloc����������20���ֽڵĿռ�
//	//��������������Ҫ����Ŀռ䣬����40���ֽ�
//	//���ǾͿ�����realloc��������̬���ٵ��ڴ�
//
//	//realloc����ʹ�õ�ע������
//	//1.���pָ��Ŀռ�������㹻�Ŀռ������׷��,��ֱ��׷��,p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ�
//	//��realloc������������һ���µ��ڴ����򿪱�һ����������Ŀռ�
//	//���Ұ�ԭ���ڴ��е����ݿ����ع���,�ͷžɵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ ���׷��ʧ��,�򷵻�NULL
//	//3.Ҫ��һ���µı���������realloc�����ķ���ֵ
//
//	int* pp = (int*)realloc(p, 40);
//	if (pp != NULL) {//���������p��ά�����ռ�
//		p = pp;
//		i = 0;
//		for (i = 5; i < 10; i++) {
//			*(p + i) = i;
//		}
//		i = 0;
//		for (i = 0; i < 10; i++) {
//
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	pp = NULL;
//	return 0;
//}

//###################################################
//P68

//void test()//1.��NULLָ��Ľ����ò���
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	free(p);
//}

//void test()  //2.�Զ�̬���ٿռ��Խ�����
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//}
//
//void test()  //3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok? no!
//}

//void test()  //4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}
//
//void test()//5.��ͬһ�鶯̬�ڴ����ͷ�
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}

//int main() {  //6.��̬�����ڴ������ͷ�
//	while (1) {
//		malloc(2);
//	}
//	return 0;
//}


//void GetMemory(char* p)//������
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);           //�����������������
//	strcpy(str, "hello world");//1.�����У������������Ϊstr��NULL
//	printf(str);               //2.malloc����Ŀռ�û���ͷ�
//}
//int main() {
//	Test();
//	return 0;
//}

//void GetMemory(char** p)//������������ȷд��
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main() {
//	Test();
//	return 0;
//}

//char* GetMemory(char* p)//������������һ����ȷд��
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main() {
//	Test();
//	return 0;
//}

char* GetMemory()//����Ĳ���hello world

{
	char p[] = "hello world";
	return p;
}
void Test()
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main() {
	Test();
	return 0;
}