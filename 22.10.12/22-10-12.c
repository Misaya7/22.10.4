#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//()��[]�����ȼ���Ҫ����*

//(*(void (*)())0)(); ������δ������˼
  //��0ǿ������ת����: void (*)()����ָ������--0����һ�������ĵ�ַ
  //Ȼ�����0��ַ���ĸú���

//void (*signal(int , void(*)(int)))(int);������δ������˼
  //signal��һ���������� signal�����Ĳ�����2����
  // ��һ����int��
  // �ڶ����Ǻ���ָ�룬
  //�ú���ָ��ָ��ĺ����Ĳ�����int������������void  
  // signal�����ķ�������Ҳ��һ������ָ��:
  //�ú���ָ��ָ��ĺ����Ĳ�����int������������void



//int add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//printf("%d ", add(a, b));
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	//printf("%p\n", &add);
//	//printf("%p\n", add);
//	int(*pa)(int, int) = add;//pa��һ������ָ�룬����������ź�����ַ��ָ��
//	printf("%d\n", (*pa)(10, 20));
//	printf("%d\n", pa(10, 20));
//	//���ú���ָ����ú�����ʱ�����Ǽȿ��Խ�����Ҳ���Բ�������
//	return 0;
//}


int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}

//int main() {
//	int x = 30;
//	int y = 10;
////	int(*pa)(int, int) = add;
//	//���Է��֣�����ļӼ��˳������ķ���ֵ�Ͳ�������һ��
//	//��ô��û�з���������paͬʱ�洢�����ĸ������ĵ�ַ�أ�
//	//����ѧ����ָ�����飬�����Դ洢���ָ�룬�����뺯��ָ����һ��
//	int (*pa[4])(int, int) = { add,sub,mul,div };
//	//printf("%d\n%d\n%d\n%d\n", pa[0](x, y), pa[1](x, y), pa[2](x, y), pa[3](x, y));
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", pa[i](2, 3));
//	}
//	return 0;
//}
//int main() {
//	int input = 0;
//	do {
//		printf("1.�ӷ� 2.���� 3.�˷� 4.���� 0.�˳� ������:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			int x = 0;
//			int y = 0;
//			printf("���������������:>");
//			scanf("%d %d", &x, &y);
//			int(*parr[5])(int, int) = { NULL,add,sub,mul,div };
//			//parr��һ������ָ������--ת�Ʊ�
//			printf("%d\n", parr[input](x, y));
//		}
//		else if (input == 0) {
//			printf("�˳�����\n");
//		}
//		else {
//			printf("�������,����������\n");
//		}
//	} while (input);
//	return 0;
//}

//char* mystrcpy(char* dest, const char* str) {
//	;
//}
//int main() {
//	char(*pf)(char*, const char*) = mystrcpy;//ָ����mystrcpy
//	char(*pd[4])(char*, const char*) = {0};//���Դ���ĸ�mystrcpy�����ĵ�ַ
//
//}


int add(int x, int y) {
	;
}
int main() {
	int arr[10] = { 0 };
	int(*p)[10] = arr;//����ָ��

	int (*a)(int, int) = add;//����ָ��

	int(*pa[10])(int, int);//����ָ������

	int(*(*ppa)[10])(int, int) = &pa;//����ָ�������ָ��  
	//ָ��ָ���������10��Ԫ�أ�������Ԫ�ص������Ǻ���ָ��
	return 0;
}                                              