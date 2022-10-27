#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<assert.h>//╤оят


//int main() {
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		perror(0);
//		return 0;
//	}
//	fprintf(p, "%s", "qwewqe");
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fputs("hello", p);
//	return 0;
//	fclose(p);
//	p = NULL;
//}

//int main() {
//	char arr[1024] = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fgets(arr, 1024, p);
//	printf("%s", arr); 
//
//	return 0;
//	fclose(p);
//	p = NULL;
//}
struct Stu {
	char name[20];
	int age;
};
//int main() {
//	struct Stu s = { "уехЩ",11 };
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fprintf(p, "%s %d", s.name, s.age);
//
//	return 0;
//	fclose(p);
//	p = NULL;
//}

//int main() {
//	struct Stu s = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fscanf(p, "%s %d", s.name, (&s.age));
//	printf("%s %d ", s.name, s.age);
//	return 0;
//	fclose(p);
//	p = NULL;
//}

extern add(int a, int b);
int main() {
	int a = 10;
	int b = 30;
	
	printf("%d", add(a, b));
}