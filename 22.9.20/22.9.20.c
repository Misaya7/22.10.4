//����һ��stdio.h���ļ�
//std - ��׼standard i-input o-output
#include<stdio.h>
//int main() {//������-�������� ����ֻ��һ��
//	        //main֮ǰ��int��ʾmain�������ú󷵻�һ������ֵ
//	printf("hehe\n");//printf��C���ԵĿ⺯�� #include<stdio.h>
//	return 0;
//}
//
//int main() {
//	char ch = 'A';
//	printf("%c\n", ch);    //%c-��ӡ�ַ�
//	return 0;
//}
// 
//int main() {
//	float wei = 95.5;
//	printf("%d\n", sizeof(char));//��λ�����ֽ�
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(double));
//}

int main() {
	//extern �����ⲿ���ţ�������������Դ�ļ��ı���
	extern int we;
	printf("%d\n", we);
	return 0;
}