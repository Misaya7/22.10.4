#define _CRT_SECURE_NO_WARNINGS 1

//P77 78

#include<stdio.h>

//int main() {//д��
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		return 0;
//	}
//	fprintf(p, "%s","hello");
//
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//fseek �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(p, 1, SEEK_CUR);
//      fseek(p, -1, SEEK_END);
//	//2.��ȡ�ļ�
//	char c= fgetc(p);
//	printf("%c\n", c);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//ftell �����ļ�ָ���������ʼλ�õ�ƫ����
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		return 0;
//	}
//
//	fseek(p, -1, SEEK_END);
//	int pos = ftell(p);
//	printf("%d\n", pos);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//��������fseek��ftell���������ĵ��Ĵ�С(��λ���ֽ�)
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		return 0;
//	}
//	fseek(p, 0, SEEK_END);
//	int size = ftell(p);
//	printf("%d", size);
//
//	fclose(p);
//	p = NULL;
//}

//int main() {//rewind ���ļ�ָ��λ�ûص��ļ���ʼλ��
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		return 0;
//	}
//      fseek(p, -1, SEEK_END);
//	
//	char c= fgetc(p);
//	printf("%c\n", c);
//
//	rewind(p);
//	c = fgetc(p);
//	printf("%c\n", c);
//
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//feof�����������ж��ļ��Ƿ������,��ֻ���ж�����Ϊʲô��������
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		perror(0);
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(p)) != EOF) {
//		//fgetc��ȡʧ�ܻ������ļ�������ʱ�򶼻᷵��EOF
//		putchar(ch);
//	}
//	//�ж���ʲôԭ����ɵ�
//	if (ferror(p)) {//��ȡʧ��
//		printf("error\n");
//	}
//	else if (feof(p)) {//�ļ��Ѿ�����,�ж�����ΪEOF����������Ϊ��ȡʧ�ܽ���
//		printf("end of file\n");
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//Ԥ�������
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//int main() {//д�ļ���־(�����Ͻ�)
//	int arr[10] = { 0 };
//	FILE* p = fopen("log.txt", "w");
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//		fprintf(p, "file:%s line:%d date:%s time:%s \n",
//			__FILE__, __LINE__, __DATE__, __TIME__);
//	}
//	fclose(p);
//	p = NULL;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#define T "hehe"
#define reg register  //reg���滻��Ϊ��register
#define do_forever for(;;)
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL
             
		
int main() {
	//printf("file:%s\ndate:%s\ntime:%s \n", 
	//	__FILE__, __DATE__, __TIME__);
	DATE;
	return 0;
}