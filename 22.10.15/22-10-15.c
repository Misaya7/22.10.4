#define _CRT_SECURE_NO_WARNINGS 1
//P43
#include<stdio.h>
#include<string.h>
//int main() {
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));//                      ��һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));       //*        ��һ�еڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//             ��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));//                �ڶ��е�ַ
//	printf("%d\n", sizeof(*(a + 1)));//                �ڶ��д�С
//	printf("%d\n", sizeof(&a[0] + 1));//              �ڶ��е�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//             �ڶ��д�С
//	printf("%d\n", sizeof(*a));//                        ��һ�д�С
//	printf("%d\n", sizeof(a[3])); //��û����ʵ����    *        
//	return 0;
//}

//48 4 16 4 4 4 4 16 16 16

////������1
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}


////������2
////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�

//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//    (struct Test*)p = 0x100000;
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long)p + 0x1);
//    printf("%p\n", (unsigned int*)p + 0x1);
//    return 0;
//}


//P44
////������3
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}


////������4
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}


////������5
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //ָ���ָ��Ϊ����ָ��֮���Ԫ�صĸ���
//    return 0;
//}


////P45
////������6
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));  //(*(aa + 1))�൱��aa[1]
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

////������7
//int main()
//{
//	
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//
////������7����:char* p = "qwer";p�д�ľ���q�ĵ�ַ
////������char* a[] = { "work","at","alibaba" }; a��һ�����飬�����char*���͵�����
////�������Ϊa[0]���w�ĵ�ַ��a[1]���a�ĵ�ַ��a[2]���a�ĵ�ַ
////pa�����a����Ԫ�ص�ַ��Ҳ����a[0],pa++�õ�a[1]Ҳ����a�ĵ�ַ
////��a�ĵ�ַΪ��ͷ��ӡһ���ַ�����Ҳ����at��


////������8
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


////P46
//int main() {
//	char arr[20] = {0};
//	//scanf("%s", &arr);
//	gets(arr);//��ȡһ��
//	printf("%s\n", arr);
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", strlen(arr));
//
//	return 0;
//}

int main() {          //*+**+***+****.....
	int i = 0;
	int j = 0;
	int n = 0;
	int sum = 0;
	printf("������һ������:>");
	scanf("%d", &i);
	int ii = i;
	printf("����ѭ�����ٴ�:>");
	scanf("%d", &j);
	for (n = 0; n < j; n++) {
		sum = sum + i;
		i = i * 10 + ii;
	}
	printf("%d\n", sum);
	return 0;
}