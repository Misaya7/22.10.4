#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//struct --�ṹ��ؼ��� stu-- �ṹ���ǩ struct stu -- �ṹ������

//struct stu
//{
//	//��Ա����
//	char name[10];
//	short age;
//	char tele[12];
//}s1, s2, s3;  //����������ȫ�ֵĽṹ�����

//typedef struct stu
//{
//	//��Ա����
//	char name[10];
//	short age;
//	char tele[12];
//}Stu; //Stu��struct stu�������֣����ھʹ��� struct stu
//
//int main() {
//	
//	struct stu s1;//�ֲ��Ľṹ�����
//	Stu s2 = { "����",15,"12398210989" };//��ʼ��
//	return 0;
//}

//struct P {
//	int a;
//	char arr[10];
//};
//
//struct O {
//	double i;
//	char orr[15];
//	struct P p1;    //�ṹ������ṹ��
//};
//
//int main() {
//	struct O o1 = { 1.0,"1234",{5,"132"} };
//	printf("%lf\n", o1.i);
//	printf("%s\n", o1.p1.arr);
//	return 0;
//}

int main() {              //�жϴ�С��
	int a = 0x11223344;
//	printf("%x", a);
	char* pa = &a;
	printf("%x\n", *pa);
	if (*(pa) == 0x44) {
		printf("С��");

	}
	else {
		printf("���");
	}
	return 0;
}