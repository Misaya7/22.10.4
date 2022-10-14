#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort-�⺯��-�������� 
//qsort(�������������Ԫ�ص�ַ��Ԫ�ظ�����Ԫ�ش�С(�ֽ�)������ָ��(�Ƚ�Ԫ�صĺ����ĵ�ַ����Ҫ�Լ�ʵ��)
// ���������������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ
// ����return 1 ����return 0 С��return -1
//void* ���͵�ָ����Խ����κ����͵ĵ�ַ
//void* ���͵�ָ�벻���Խ��н����ò���
//void* ���͵�ָ�벻���Խ���+-����

struct stu {                      //ʹ��qsort����
	char name[20];
	int score;
};
int cmp_int(const void* p, const void* pp) {
	return (*(int*)p - *(int*)pp);
}
int cmp_float(const void* p, const void* pp) {
	if (*(float*)p > *(float*)pp) {
		return 1;
	}
	else if (*(float*)p == *(float*)pp) {
		return 0;
	}
	else
		return -1;
}
int cmp_score(const void* p, const void* pp) {
	return ((struct stu*)p)->score - ((struct stu*)pp)->score;
}
int cmp_name(const void* p, const void* pp) {
	return strcmp(((struct stu*)p)->name , ((struct stu*)pp)->name);
}
int main() {            //qsort��������int����
	int i = 0;
	int arr[9] = { 1,4,7,8,9,6,5,2,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
//int main() {                //qsort��������float����
//	int i = 0;
//	float arr[4] = { 2.8,5.5,8.3,3.5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	for (i = 0; i < sz; i++) {
//		printf("%f ", arr[i]);
//	}
//	return 0;
//}
//int main() {
//	struct stu s[] = { {"zhangsan",55},{"lisi",24},{"wangwu",100} };
//	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof s[0], cmp_score);
//	qsort(s, sz, sizeof s[0], cmp_name);
//	return 0;
//}