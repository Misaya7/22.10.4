#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
//        int p = 1;
//        for (a; a > 0; a--) {
//            int i = p;
//            for (i; i > 1; i--) {
//                printf(" ");
//            }
//            p++;
//            printf("*\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
//
//        for (a; a > 0; a--) {
//            int i = a;
//            for (i; i > 1; i--) {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>//!!
//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n; j++)
//            {
//                if (i == j || i + j == n + 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//����������
//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
//���������
//���ÿ�����룬����á� * ����ɵ�X��ͼ����
//#include <stdio.h>
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) != EOF) {
//        int i = 0;
//        for (i; i < n; i++) {
//            int j = 0;
//            for (j; j < n; j++) {
//                if (i == j || (i + 1) + (j + 1) == n + 1) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

#include<stdio.h>
int main() {
    DATE;
    return 0;
}