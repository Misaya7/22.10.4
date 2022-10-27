#define _CRT_SECURE_NO_WARNINGS 1

//P77 78

#include<stdio.h>

//int main() {//写入
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

//int main() {//fseek 根据文件指针的位置和偏移量来定位文件指针
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(p, 1, SEEK_CUR);
//      fseek(p, -1, SEEK_END);
//	//2.读取文件
//	char c= fgetc(p);
//	printf("%c\n", c);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//ftell 返回文件指针相对于起始位置的偏移量
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

//int main() {//可以利用fseek和ftell函数计算文档的大小(单位是字节)
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

//int main() {//rewind 让文件指针位置回到文件起始位置
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

//int main() {//feof函数并不能判断文件是否结束了,他只能判断是因为什么而结束的
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		perror(0);
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(p)) != EOF) {
//		//fgetc读取失败或遇到文件结束的时候都会返回EOF
//		putchar(ch);
//	}
//	//判断是什么原因造成的
//	if (ferror(p)) {//读取失败
//		printf("error\n");
//	}
//	else if (feof(p)) {//文件已经结束,判断是因为EOF结束还是因为读取失败结束
//		printf("end of file\n");
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//预定义符号
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//int main() {//写文件日志(并不严谨)
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
#define reg register  //reg被替换成为了register
#define do_forever for(;;)
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL
             
		
int main() {
	//printf("file:%s\ndate:%s\ntime:%s \n", 
	//	__FILE__, __DATE__, __TIME__);
	DATE;
	return 0;
}