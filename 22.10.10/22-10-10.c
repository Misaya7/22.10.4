#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>//ʹ�ö��Ե�ͷ�ļ�
void my_strcpy1(char* arr1, char* arr2) {//ʹ�ú���ʵ��strcpy(������6��)
	while (*arr2 != '\0') {
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	*arr1 = *arr2;
}
void my_strcpy2(char* arr1, char* arr2) {//ʹ�ú���ʵ��strcpy(�Ż��󣬾�����)
	while (*arr2 != '\0') {
		*arr1++ = *arr2++;
	}
	*arr1 = *arr2;
}
void my_strcpy3(char* arr1, char* arr2) {//ʹ�ú���ʵ��strcpy(�Ż��󣬻���)
	while (*arr1++ = *arr2++) {//��Ϊ�Ǻ���++��arr2���ȸ�ֵ��arr1��Ȼ��++
		;                    //arr2����arr1��ֵ��ʲô�������б��ʽ��ֵ����ʲô
	}                        //���Ե���ֵ'\0'��whileѭ����ֹͣ��
}                             //������п�ָ���������͹���
void my_strcpy4(char* arr1, char* arr2) {//ʹ�ú���ʵ��strcpy(�Ż�����ء��7��)
	if (arr1 != NULL && arr2 != NULL) {//��֤û�д��ݿ�ָ��
	 	while (*arr1++ = *arr2++) {//�����п�ָ���ʱ������ֻ�ǹ�ܴ���
			;                   //��û�и����û����������
		}
	} 
}
void my_strcpy5(char* arr1, char* arr2) {//ʹ�ú���ʵ��strcpy(�Ż��󣬲��� 8��)
	assert(arr1 != NULL && arr2 != NULL);//����
	while (*arr1++ = *arr2++) {//����:���Ϊ�棬ʲô�������� Ϊ�٣�����
		;
	}
}
void my_strcpy6(char* arr1, const char* arr2) {
	//ʹ�ú���ʵ��strcpy(�Ż��󣬺ܺ� ) ʹ��const��*arr2���ᱻ�ı� 9��
	assert(arr1 != NULL && arr2 != NULL);//����
	while (*arr1++ = *arr2++) {//����:���Ϊ�棬ʲô�������� Ϊ�٣�����
		;
	}
}
char* my_strcpy7(char* arr1, const char* arr2) {//��arr1���׵�ַ����
	//ʹ�ú���ʵ��strcpy(�Ż������� 10��)
	char* ret = arr1;
	assert(arr1 != NULL && arr2 != NULL);//����
	while (*arr1++ = *arr2++) {//����:���Ϊ�棬ʲô�������� Ϊ�٣�����
		;           
	}
	return ret;//����Ŀ�ĵص���ʼ��ַ
}
//int main() {
//	char arr1[] = "########";
//	char arr2[] = "hello";
////	strcpy(arr1, arr2);//ϵͳ���ַ�������
////	my_strcpy5(NULL, arr2);
//	my_strcpy5(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", my_strcpy7(arr1, arr2));
//	return 0;
//}


//void qwe() {
//	//int a = 0;
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//
//}
//int main() {
//    int a = 0;
//	qwe();
//	qwe();
//	qwe();
//	return 0;
//}

//int main() {            //��������Ĵ���һ�𿴣�
//	const int num = 10;//����������ϣ��num���ɱ��޸�
//	int* p = &num;//���������pָ��֮�����ǿ���ͨ�������ò������ı�num��ֵ
//	*p = 20;      //����ȻΥ�������ǵ���Ը
//	printf("%d\n", num);
//	return 0;
//}
//int main() {
//	int n = 0;
//	const int num = 10;
//
//	//const int* p = &num;//const����ָ������е�*�����ʱ�����ε���*p
//	//*p = 20;            //Ҳ����:����ͨ��p���ı�*p��ֵ
//	//p = &n;
//
//	//int* const p = &num;//const����ָ������е�*���ұ�ʱ�����ε���p
//	//*p = 20;            //Ҳ����:���ܸı�p
//	//p = &n;
//
// 	printf("%d\n", num);
//	return 0;
//}
int my_strlen(const char* arr) {//ʵ��strlen���� ��֤��arr��ֵ���ᱻ�ı�
	assert(arr != NULL);//��ָ֤�����Ч��
	int count = 0;
	while (*arr++ != '\0') {
		count++;
//		arr++;
	}
	return count;
}
//int main() {
//	char arr1[] = "1\\088";
//	//char arr2[] = "����";
//	printf("%d\n", my_strlen(arr1));
//	//printf("%d\n", strlen(arr2));
//	return 0;
//}

int main() {
	char arr[] = "abcdef";
	char* pc = arr;
	printf("%s\n", arr);
	printf("%s\n", pc);
	return 0;
}