#define _CRT_SECURE_NO_WARNINGS 1

//P55
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<assert.h>
//int main() {       //strerror����
//	//char* str = strerror(errno);
////strerror���������þ��ǰѴ�����ת����������Ϣ���������Ǿ������������
////errno��һ��ȫ�ֵĴ��������
////��C���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ����Ӧ�Ĵ����븳ֵ��errno��
//	FILE* pf = fopen("22-10-20.txt", "r");
////fopen�����ķ���ֵ��һ��FILE*��ָ�� ����һ�����ļ��ĺ���
////�����������ʧ���ˣ��ͻ᷵��һ��NULLָ��
//	if (pf == NULL) {
//		printf("%s", strerror(errno));
//	}
//	else {
//		printf("success\n");
//	}
//	return 0;
//}

//int main() {         //����ʾ������ �ַ����ຯ�� ���кܶ� 
//	char ch = 'W';
////	int ret = islower(ch);//�ж��Ƿ�ΪСд�ַ�
////	int ret = isdigit(ch);//�ж��Ƿ�Ϊʮ��������
//	int ret = isupper(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {                 //�ַ�ת������
//	//char ch = tolower('W');//ת��ΪСд
//	//putchar(ch);
//
//	//char sh = toupper('a');//ת��Ϊ��д
//	//putchar(sh);
//
//	char arr[50] = "QSsD hqWDHoSwSD";
//	int i = 0;
//	while (arr[i]) {
//		if (isupper(arr[i])) {
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}

//###############################################
//P56
//struct S {                  //memcpy����ʹ��
//	char name[10];
//	int age;
//};
//
//int main(){        
//	//����ѧ����strlen,strstr,strcpy,strcmp�ȵȺ���
//	//���ǵĲ����������ַ���,Ҳ����˵���������е��ַ���������Ҫ��'\0'�򽻵�
//	//������ǲ����Ķ����� ��������,����������,�ṹ������� �Ͳ�������Щ����
//	��memcpy��memmove�����ǳ�Ϊ�ڴ溯��
// 
//	//int arr1[10] = { 1,2,3,4,5 };
//	//int arr2[] = { 0,7,8,9 };
//	//memcpy(arr1, arr2, sizeof(arr2));
//
//	struct S arr3[2] = { {"����",20},{"����",15} };
//	struct S arr4[5] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//                    //Ŀ�ĵ�      //Դ��ַ   //���������ֽ�
//void* my_memcpy(void* arr1, const void* arr2, size_t num) {//��׼��memcpyʵ��
//	assert(arr1 && arr2);
//	void* ret = arr1;
//	while (num--) {
//		*(char*)arr1 = *(char*)arr2;
//		((char*)arr1)++;
//		((char*)arr2)++;
//	}
//	return ret;
//}
//struct S {                  
//	char name[10];
//	int age;
//};
//
//int main(){
//	//struct S arr3[2] = { {"����",20},{"����",15} };
//	//struct S arr4[5] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//
//	//int arr1[10] = { 1,2,3,4,5 };
//	//int arr2[] = { 0,7,8,9 };
//	//my_memcpy(arr1, arr2, sizeof(arr2));
//
////C���Թ涨 memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
////	        memmove �����ص����ڴ濽��
////��ʵ��    memcpy Ҳ�ɴ����ص��ĺ���
////	        memmove �ȿ��Դ����ص���Ҳ���Դ������ص���
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr1+2, arr1, 20);
//
//	//���������ص�������������Ϳ�����memmove����
//	memmove(arr1 + 2, arr1, 20);
//
//	return 0;
//}

//########################################
// P57

//int main() {              //memcmp����ʹ��
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,5,6 };
//	printf("%d", memcmp(arr1, arr2, 16));//�����16ָ����16���ֽ� 
//	return 0;
//}

int main() {        //memset(�ڴ�����)���� 
	int arr1[10] = { 0 };
	memset(arr1, 1, 10);//10���ֽ�
	char arr2[10] = { 0 };
	memset(arr2, '*', 4);//4���ֽ�
	return 0;
}