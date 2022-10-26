#define _CRT_SECURE_NO_WARNINGS 1

//P76
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main() {  //fputc写文件,一个字符一个字符地写
//	//打开文件
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('h', p);
//	fputc('e', p);
//	fputc('l', p);
//	fputc('l', p);
//	fputc('o', p);
//	//关闭文件
//	fclose(p);
//	p == NULL;
//	return 0;
//}


//int main() {             //fgetc读文件,一个字符一个字符地读
//	//打开文件
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	//关闭文件
//	fclose(p);
//	p == NULL;
//	return 0;
//}

//int main() {       //fgets读文件 一行一行地读 
//	char arr[1024] = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
// //读文件
//	fgets(arr, 1024, p);//从p中读取文件放到arr中去，最多读1024个字符
//	//printf("%s", arr);
//	puts(arr);
//	fgets(arr, 1024, p);
//	//printf("%s", arr);
//	puts(arr);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {       //fputs写文件 一行一行地写 
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", p);
//	fputs("world\n", p);
//
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//从键盘读一行并写一行
//	
//	char arr[1024] = { 0 };
//	//fgets(arr,1024, stdin);//从标准输入流读取，也就是从键盘读取
//	//fputs(arr, stdout);//输出到标准输出流
//
//	//上面这种写法和下面这种写法等价
//
//	gets(arr);
//	puts(arr);
//
//	return 0;
//}

//struct Stu {
//	int n;
//	float score;
//	char arr[10];
//};

//int main() {//格式化的输出文件
//	struct Stu s = { 100,3.14f,"world" };
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		return 0;
//	}
//	//格式化的输出文件
//	      //输出到哪  
//	fprintf(p, "%d %f %s", s.n, s.score, s.arr);
//  fclose(p);
//  p=NULL;
//	return 0;
//}

//int main() {//格式化的输入文件
//	struct Stu s = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		return 0;
//	}
//	格式化的输入文件
//		  从哪输入  
//	fscanf(p, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {
//	struct Stu s = { 100,3.14f,"world" };
//	char arr[1024] = { 0 };
//	struct Stu tmp = { 0 };
////将格式化数据转化为字符串
//	   //放到哪里去
//	sprintf(arr, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", arr);
////从字符串读取格式化的信息
//	 //从哪里开始读取
//	sscanf(arr, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s",tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

struct Stu {
	char name[20];
	int age;
	double score; 
};
//int main() {       //二进制写入
//	FILE* p = fopen("test.txt", "wb");
//	if (p == NULL) {
//		return 0;
//	}
//	//二进制写文件
//	struct Stu s = { "张三",22,29.2 };
//	fwrite(&s, sizeof(struct Stu), 1, p);
//
//	fclose(p);
//	p = NULL;
//	return 0;
//}
int main() {
	struct Stu tmp = { 0 };
	FILE* p = fopen("test.txt", "rb");
	if (p == NULL) {
		return 0;
	}
		//二进制读文件
	fread(&tmp, sizeof(struct Stu), 1, p);
	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
	fclose(p);
	p = NULL;
	return 0;
}