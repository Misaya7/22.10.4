#define _CRT_SECURE_NO_WARNINGS 1
//P58

#include<stdio.h>
//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������(����)
//����--����,�绰������

//struct Stu {
//	char name[20];
//	char tel[11]; //�������ǳ�Ա����
//	int age;
//}s4,s5,s6;    //ȫ�ֽṹ�����
//struct Stu s3;//ȫ�ֽṹ�����
//
//
//int main(){ 
//	//�����ֲ��ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//typedef struct Node {    //typedef����������
//	char name[20];
//	char tel[11]; //�������ǳ�Ա����
//	int age;
//}Node;    //ȫ�ֽṹ�����
//
//int main() {
//	Node n1;
//
//	return 0;
//}
//####################################################
//P59

struct S1	//����S1��S2�Ĵ�С�ǲ�һ���ģ����ǣ����һ������
{           //�ṹ���ڴ����   VSĬ�϶�����Ϊ4
	        //����˵ �ṹ���ڴ��������ÿռ任ʱ��
	char c1;//��ƽṹ��ʱΪ�˾����ܵ���С�ռ�����ʱ�� 
	int i;  //������ռ�ռ�С�ĳ�Ա������һ��
	char c2;
};
struct S2
{
	char c1; 
	char c2;
	int i;
};
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c1;
	struct S3 s3;       //����Ҫ��s3�ŵ�s3���Ķ���������������,��8
	double d;           
};

int main() {
	printf("%d\n", sizeof(struct S1));// 12 8 16 32
	printf("%d\n", sizeof(struct S2));
	printf("%d\n", sizeof(struct S3));
	printf("%d\n", sizeof(struct S4));
	return 0;
}

//struct S            //�����Ĭ�϶�������8��������ռ16���ֽ�
//{
//	char c1;
//	double d;
//};
//
//#pragma pack (4)     //pragma �����޸�Ĭ�϶�����
//struct Q            //�����޸�Ĭ�϶�����Ϊ4��������ռ12���ֽ�
//{
//	char c1;
//	double d;
//};
//#pragma pack()      //�޸���ϣ������Q��Ĭ�϶���������4��
//
//#include<stddef.h>  //offsetof��ͷ�ļ�
//int main() {
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	struct Q q;
//	printf("%d\n", sizeof(q));
//
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, d));
//	printf("%d\n", offsetof(struct Q, c1));
//	printf("%d\n", offsetof(struct Q, d));
//
//	//offsetof������һ������������һ����
//	//�����Լ���ṹ����ĳ�����൱���׵�ַ��ƫ��
//	return 0;
//}

//####################################
//P61

//struct A {      //֥ʿλ�Σ���Ա��������һ��ð�ź�һ������(λ�ο�ʡ�ռ�)
//	int _a : 2; //λ��--������λ aֻ��Ҫ2��bitλ
//	int _b : 5;//bֻ��Ҫ5������λ
//	int _c : 10;//.....
//	int _d : 30;//���ֲ����Գ���32
//}; 
////47bit--6���ֽ�
////ϵͳ������int���͵ı��������ȷ�����4���ֽڣ�Ҳ����32��bit��A
////a b c����֮�󣬻�ʣ15������λ������������d��30������λ������
////����ϵͳ�ֿ�����4���ֽ�32��bitΪ�˴��d������һ��������8���ֽڸ�A
//int main() {
//	struct A a;
//	printf("%d\n", sizeof(a));//8���ֽ�
//	return 0;
//}

//################################################
//P62

//enum Sex {          //ö��
//	male,           //������ö�ٳ���
//	female,
//	secret,
//};
//enum Color {
//	red = 7,
//	blue = 8,
//	green = 9,
//};
//enum Month {
//	sept = 9,
//	oct,
//	nov,
//};
//int main() {
//	enum Sex s = male;
//
//	enum Sex q;
//	enum Color w;
//	enum Month e;
//	//ö�ٳ���Ĭ��ȡֵ��0��ʼ���μ�1
//	printf("%d %d %d\n", male, female, secret);//0 1 2
//	printf("%d %d %d\n", red, blue, green );//7 8 9 
//	printf("%d %d %d\n", sept,oct,nov );//9 10 11
//
//	printf("%d\n", sizeof(q));//ö�ٱ����ڳ�ʼ����ʱ��Ĭ��Ϊ0��int����
//	printf("%d\n", sizeof(w));//�����СΪ4���ֽ�
//	printf("%d\n", sizeof(e));
//	return 0;
//}

//union Un {  //������--��ͬ��
//	char c; //���ǿ�����һ���ռ�,c��i���Թ�ͬʹ����Ƭ�ռ�
//	int i;  //����������ֻ��Ҫ�ĸ��ֽڵĿռ�Ϳ����������ǵ�����
//};          //���ϱ����Ĵ�С����������Ա�Ĵ�С
//
//int main() {
//	union Un u;
//	printf("%d\n", sizeof(u));//�ͽṹ���ƫ��һ��˼·
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	u.i = 0x11223344;
//	u.c = 0x66;
//	printf("%x\n", u.i);
//
//	return 0;
//}

//int check_sys(){//�жϴ�С�˵ķǳ�����Ĵ���
//union u {       //�����˹�������ص�
//	int i;
//	char o;
//}p;
//p.i = 1;
//return p.o;
//}
//
//int main() {
//	if (check_sys())
//		printf("С��");
//	else
//		printf("���");
//	return 0;
//}