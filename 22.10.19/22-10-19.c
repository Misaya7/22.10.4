#define _CRT_SECURE_NO_WARNINGS 1

//P52
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int my_strlen(char* arr) {  //�ݹ�ʵ��strlen����
//	if (*arr) {
//		return 1 + my_strlen(arr+1);
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {                    //strlen�����ķ���ֵ����Ϊunsigned int
//	char arr[] = "abc";
//	char arr1[] = "abcdef";
//	if (strlen(arr) - strlen(arr1) > 0) {
//		printf("hehe");
//	}
//	else {
//		printf("haha");
//	}
//
//	return 0;
//}

//int main() {               //strcpy�������������ַ�����������\0
//	char arr1[] = "abcde";
//	char arr2[] = "oo";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//char* my_strcpy(char* arr1, const char* arr2) {//�����strcpy����ʵ��
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	while (*arr1++ = *arr2++) {
//		;
//	}
//	return ret;
//}
//
//int main() {
//    char arr1[10] = "78";
//	char arr2[] = "88888";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main() {             //strcat--׷�Ӻ���
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//char* mystrcat(char* arr1,const char* arr2) {//�����strcat(׷�Ӻ���)ʵ�� 
//    assert(arr1);
//    assert(arr2 != NULL); //���������Եȼ�
//    char* ret = arr1;
//    while (*arr1)//������while�е������ȼ�
//        //while(*arr1 != 0)
//        /*while (*arr1 != '\0')*/ {
//        arr1++;
//    }
//    while (*arr1++ = *arr2++) { //ʵ���Ͼ����ַ�����������
//        ;
//    }
//    
//    return ret;
//}
//
//int main() {
// 	char arr1[20] = "hello";
//    char arr2[] = " my world";
//    printf("%s\n", mystrcat(arr1, arr2));
//	return 0;
//}

////#############################################
////P53
//int my_strcmp(const char* arr1,const char* arr2) {//�����strcmp����ʵ��
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2) {
//		if (*arr1 == '\0') {
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 > *arr2) {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//}
//int main() {
//	char arr1[] = "abe";
//	char arr2[] = "abcdq";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	return 0;
//}


//int main() {                       //strncpy����ʹ��
//	char arr1[20] = "abaqwert";
//	char arr2[] = "qwe";
//	strncpy(arr1, arr2, 6);
//	//����arr2��Ȼû��6�������������ǻ�copy6�����������'\0'����
//	return 0;  
//}

//int main() {         //strncat����ʹ��
//	char arr1[20] = "he\0xxxxxx";
//	char arr2[] = "qwe";
//	strncat(arr1, arr2, 6);
//	//�������strncpy��ͬ�����㳬����arr2�ĳ��ȣ���Ҳֻ����arr1��һ��'\0'
//	return 0;  
//}

int main() {           //strtok����ʹ��
	char arr[] = "qwe.ert.erer.ee";
	char arr2[30] = { 0 };
	strcpy(arr2, arr);
	char* p = ".";
	char* ret = NULL;
	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p)) {
		printf("%s\n", ret);
	}
	//���������Ϊ����:�������Ϊ�и������������Ϊchar*
	//��Ҫ����������arr2��*p��arr2������һ���ַ��� *p�������и�Ĳ���(Ҳ��������)
	//��Ϊ�и��arr2Ҳ���仯�����Բ�������ʹ�ñ�����arr2�����õķ�����
	//ʹ��arr2�Ŀ����汾�� 
	//��һ��ʹ��:����arr2���׵�ַ��p
	//��n��ʹ��:����NULL��p
	//�ҵ��󷵻�ǰ���ַ������׵�ַ
	//��arr2����Ҳ�Ҳ���pʱ,����NULL
	//��Ϊ�˺����м��书�ܣ���һ��ʹ�ú󽫵�һ��p��ֵΪ'\0'��Ȼ���ǰ���
	//�ַ������׵�ַ���أ���n��ʱ��ֻ��Ҫ����NULL��p����������ɵ�һ��ʹ�õĹ���
	//����forѭ��ʵ���������ʮ������
	return 0;
}