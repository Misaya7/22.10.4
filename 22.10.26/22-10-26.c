#define _CRT_SECURE_NO_WARNINGS 1

//P76
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main() {  //fputcд�ļ�,һ���ַ�һ���ַ���д
//	//���ļ�
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('h', p);
//	fputc('e', p);
//	fputc('l', p);
//	fputc('l', p);
//	fputc('o', p);
//	//�ر��ļ�
//	fclose(p);
//	p == NULL;
//	return 0;
//}


//int main() {             //fgetc���ļ�,һ���ַ�һ���ַ��ض�
//	//���ļ�
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	//�ر��ļ�
//	fclose(p);
//	p == NULL;
//	return 0;
//}

//int main() {       //fgets���ļ� һ��һ�еض� 
//	char arr[1024] = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
// //���ļ�
//	fgets(arr, 1024, p);//��p�ж�ȡ�ļ��ŵ�arr��ȥ������1024���ַ�
//	//printf("%s", arr);
//	puts(arr);
//	fgets(arr, 1024, p);
//	//printf("%s", arr);
//	puts(arr);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {       //fputsд�ļ� һ��һ�е�д 
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", p);
//	fputs("world\n", p);
//
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main() {//�Ӽ��̶�һ�в�дһ��
//	
//	char arr[1024] = { 0 };
//	//fgets(arr,1024, stdin);//�ӱ�׼��������ȡ��Ҳ���ǴӼ��̶�ȡ
//	//fputs(arr, stdout);//�������׼�����
//
//	//��������д������������д���ȼ�
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

//int main() {//��ʽ��������ļ�
//	struct Stu s = { 100,3.14f,"world" };
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL) {
//		return 0;
//	}
//	//��ʽ��������ļ�
//	      //�������  
//	fprintf(p, "%d %f %s", s.n, s.score, s.arr);
//  fclose(p);
//  p=NULL;
//	return 0;
//}

//int main() {//��ʽ���������ļ�
//	struct Stu s = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL) {
//		return 0;
//	}
//	��ʽ���������ļ�
//		  ��������  
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
////����ʽ������ת��Ϊ�ַ���
//	   //�ŵ�����ȥ
//	sprintf(arr, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", arr);
////���ַ�����ȡ��ʽ������Ϣ
//	 //�����￪ʼ��ȡ
//	sscanf(arr, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s",tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

struct Stu {
	char name[20];
	int age;
	double score; 
};
//int main() {       //������д��
//	FILE* p = fopen("test.txt", "wb");
//	if (p == NULL) {
//		return 0;
//	}
//	//������д�ļ�
//	struct Stu s = { "����",22,29.2 };
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
		//�����ƶ��ļ�
	fread(&tmp, sizeof(struct Stu), 1, p);
	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
	fclose(p);
	p = NULL;
	return 0;
}