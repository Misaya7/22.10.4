#define _CRT_SECURE_NO_WARNINGS 1
//P74 75?
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main() {
//	int a = 10000;
//	FILE* p = fopen("test.txt", "wb");//二进制写入
//	fwrite(&a, 4, 1, p);//数据来源于a,写1个4个字节的数据，放到p维护的文件里面去
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


//int main() {           //写文件 
//	FILE* write = fopen("test.txt", "w");
//	if (write == NULL) {
//		printf("%s", strerror(errno));
//	}
//	//写文件
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


int main() {           //读文件 
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