#define _CRT_SECURE_NO_WARNINGS 1
//P74 75?
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main() {
//	int a = 10000;
//	FILE* p = fopen("test.txt", "wb");//������д��
//	fwrite(&a, 4, 1, p);//������Դ��a,д1��4���ֽڵ����ݣ��ŵ�pά�����ļ�����ȥ
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}


//int main() {           //д�ļ� 
//	FILE* write = fopen("test.txt", "w");
//	if (write == NULL) {
//		printf("%s", strerror(errno));
//	}
//	//д�ļ�
//	fputc('h', write);
//	fputc('e', write);
//	fputc('l', write);
//	fputc('l', write);
//	fputc('o', write);
//
//	fclose(write);
//	write = NULL;
//	return 0;
//}


int main() {           //���ļ� 
	FILE* read = fopen("test.txt", "r");
	if (read == NULL) {
		printf("%s", strerror(errno));
	}

	printf("%c", fgetc(read));
	printf("%c", fgetc(read));
	printf("%c", fgetc(read));
	printf("%c", fgetc(read));
	printf("%c", fgetc(read));

	fclose(read);
	read = NULL;
	return 0;
}