#define _CRT_SECURE_NO_WARNINGS 1
//unsigned char ȡֵ��Χ��0--255
//charȡֵ��Χ��-127--128

#include<stdio.h>
#include<string.h>
#include<limits.h> //�鿴���ε�ȡֵ��Χ
#include<float.h> //�鿴�����͵�ȡֵ��Χ
//void my_strcpy(char* arr1, char* arr2) {//ʹ�ú���ʵ��strcpy
//	while (*arr2 != '\0') {
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//int main() {
//	char arr1[] = "########";
//	char arr2[] = "hello";
////	strcpy(arr1, arr2);//ϵͳ���ַ�������
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//int main()               //��2��7�η��ӵ�2��31�η� 
//{                        //11111111111111111111111110000000�Ľ��
//    double sum = 0.0;
//    double ji = 1.0;
//    int i = 0;
//    for (i = 7; i <= 31; i++) {
//        int n = i;
//        while (n > 0) {
//            ji = ji * 2;
//            n--;
//        }
//        sum = sum + ji;
//        ji = 1;
//    }
//    printf("%lf", sum);
//    return 0;
//}


//int main() {              //��������������
//     char a = -128;
////10000000000000000000000010000000
////11111111111111111111111101111111
////11111111111111111111111110000000
//     //��Ϊaֻ��һ���ֽڣ�
//     //����char aҪ�ض� �ضϺ�Ϊ 10000000
//     //Ҫ��unsigned int��ӡ��������Ҫ������������
////11111111111111111111111110000000--������ ��Ϊ�޷��� ����ԭ�����붼һ�� ��ӡ����
//     printf("%u\n", a);// %u����unsigned int Ҳ�����޷�����
//     return 0;
//}

//int main()    //��������������
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    //ԭ��:10000001  ����:11111110 ����:11111111
//    //��Ϊc���޷������� ��������������ʱ��ǰ�油����0 ����c�������255
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}

//int main() {
//	//char arr[] = "1230464";
//	char arr[] = {1,2,0,3,4,5,7};
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//int main()        //һ�����⣨��������char���͵�Բ����������ϵ��
//{                                             //  0
//    char a[1000];
//    int i;             
//    for (i = 0; i < 1000; i++){            // -128 127
//        a[i] = -1 - i;
//    }
//    printf("%d\n", strlen(a));
//    return 0;
//}

//unsigned char i = 0;  //unsigned char��ȡֵ��Χ����0-255 forѭ���е����������
//int main()
//{
//    for (i = 0; i <= 255; i++){
//        printf("hello world\n");
//    }
//    return 0;
//}

//int main(){            //unsigned int ȡֵ��Χ����0-255��for�����������
//unsigned int i;
//for (i = 9; i >= 0; i--)
//  {
//    printf("%u\n", i);
//  }
//}

//int main() {
//	double b = 1E10;   //1.0��ʮ�η�
//	printf("%lf\n", b);
//	return 0;
//}

int main()         //�������洢
{ 
//9.0
//1001.0
//-1^0 * 1.001 * 2^3
//(-1)^S * M   * 2^E
//S - 0               M - 1.001              E - 3 
//  1                    23                    8           //32λ
//  1                    52                    11          //64λ 

	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}