#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	int i = 0;
//	char arr[10] = "qwqqqqqqqq";
//	while (i < 10) {
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0; 
//}

//int MAX(int q, int w) {
//	if (q > w)
//		return q;
//	if (q < w)
//		return w;		
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	printf("��������������\n");
//	scanf("%d%d", &a, &b);
//	int max = MAX(a,b);
//	printf("������� %d", max);
//	return 0;
//}

//int main() {
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("%d %d", a, b);
//	return 0;
//}

//int main() {
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	printf("��������������\n");
//	scanf("%d%d", &a, &b);
//	int max = (a > b ? a : b);//��Ŀ������
//	printf("������� %d", max);
//	return 0;
//}



//void test() {
//	int a = 1;
//	a++;
//	printf("a= %d\n", a);
//}
//1.static���ξֲ�������ʹ�ֲ������������ڱ䳤
//2.static����ȫ�ֱ������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//3.static���κ���
//Ҳ�Ǹı��˺���������������˵����׼ȷ��
//static���κ����ı��˺�������������
//�ⲿ�������ԣ�����������ڵģ�->�ڲ���������
//void test() {
//	static int a = 1; //a��һ����̬�ľֲ�����
//	a++;
//	printf("a= %d\n", a);
//}
//int main() {
//	int i = 0;
//	while (i < 5) {
//		test(); 
//		i++;
//	}
//	return 0;
//}

//#define���Զ����־������ ��#define MAX 100
//��Ҳ�ɶ����
//#define MAX(X,Y) (X>Y?X:Y)//��Ķ���
//
//int main() {
//	int max = 0;
//	int a = 10;
//	int b = 20;
//	max = MAX(a, b);
//	printf("%d", max);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* p = &a;
//	*p = 50;
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	printf("%d\n", a);
//	printf("%d\n", sizeof(p));
//	return 0;
//}


/////////////////////////////////////////
#include<string.h>
struct Book
{
	char name[20];
	int price;
};
int main() {
	struct Book b1 = { "C����",20 };
	printf("%s\n", b1.name);
	printf("%d\n", b1.price);
	struct Book* pb = &b1;
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
//	b1.name = "��������";//���ַ����ǲ��Եģ���������������һ����ַ
	strcpy(pb->name, "��������");
	b1.price = 55;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}

