#define _CRT_SECURE_NO_WARNINGS 1


//else�������δƥ���ifƥ��
//switch�����α��ʽ�� 
//case ���γ������ʽ
  
#include<stdio.h>
#include<string.h>
//int main() {
//	//;//��һ����䣬һ�������
//	//int age = 10;
//	//if (age = 5)//����һ���Ⱥ��Ǹ�ֵ���������
//	//	printf("�Ǻ�");
//	int n = 0;
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 != 0) {
//			printf("%d ", i);
//			i++;
//			n++;
//		}
//		else {
//			i++;
//		}
//	}
//	printf("\n%d", n);
//	}

//int main() {
//	int in = 3;
//	scanf("%d", &in);
//	switch (in) {//switchҲ��Ƕ��if�������ɳ���continue
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main() {
//	int imp = getchar();
//	putchar(imp);
//	return 0;
//}


//int main() {
//	int in = 0;
//	while ((in = getchar()) != EOF) {   //ctrl + c
//		//EOF -> end of file-> -1
//		putchar(in);
//	}
//	return 0;
//}

//int main() {                       //�Ӵ˿�ʼ�����������ſ�
//	char ret = 0;
//	char passpord[20] = { 0 };
//	printf("����������:");
//	scanf("%s", &passpord);
//	//scanf��������������֮�����뻺������ʣһ��\n(Ҳ���ǻس���)
//	printf("��ȷ��(Y/N)");
//	ret = getchar();
//	//ret��\n�����ˣ�\n������if��䣬�������ǻ�û������Y/N��������Ѿ�����"ȡ��ȷ��"
//	if (ret == 'Y') {
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("ȡ��ȷ��");
//	}
//	return 0;
//}

// int main() {
//	char ret = 0;
//	char passpord[20] = { 0 };
//	printf("����������:");
//	scanf("%s", &passpord);
//	//scanf��������������֮�����뻺������ʣһ��\n(Ҳ���ǻس���)
//	getchar();
//	//�����뻺������\n�����ˣ����������ǾͿ�������Y/N��ȷ����
//	//���ǵ����ǰ���������Ϊ1234 abcd�����м���һ���ո�ʱ����������Ȼ������
//	//���뱻scanf���ߺ󣬿ո񱻵�һ��getchar�����ˣ�ʣ�µ�abcd���ڶ���getchar������
//	//���������ٴ������˺���һ������һ�������⣬��û������Y/N�������������
//	printf("��ȷ��(Y/N)");
//	ret = getchar();
//	if (ret == 'Y') {
//		printf("ȷ�ϳɹ�");
//	}else  {
//		printf("ȡ��ȷ��");
//	}
//	return 0;
//}
// 
// 
//int main() {          //���������������������������⣬������������������ո�	                  //
//	char re = 0;     //��Ҳֻ�ܶ�ȡ����һ���ո�ǰ��������ַ�
//	char ret = 0;   //�������Ϊ 1231 564 6545  �����ֻ�ܶ�ȡ1231
//	char passpord[20] = { 0 };
//	printf("����������:");
//	scanf("%s", &passpord);
//	while ((re = getchar()) != '\n') {
//		;
//	}
//	printf("��ȷ��(Y/N)");
//	ret = getchar();
//	if (ret == 'Y') {
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("ȡ��ȷ��");
//	}
//	return 0;
//}

//int main() {                //ֻ��ӡ��������
//	char ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


int main() {
	for (int i = 0; i < 10; i++)//10��ѭ�� 10�δ�ӡ 10��Ԫ��
		//for (int i = 0; i <=9; i++) ���ַ���Ҳ���ԣ����ǲ�����һ�е�д��
	{
		printf("%d ", i);
	}
	return 0;
}