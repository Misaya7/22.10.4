#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL


//�������
//#include<stdio.h>
//int main() {
//    int a = 0;
//
//    scanf("%d", &a);
//    while (a) {
//        printf("%d ", a & 10);
//        a = a / 10;
//
//    } 
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        putchar(ch + 32);
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include<math.h>
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d", (int)pow(2, a));
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b, c = 0;
//    scanf("%4d%2d%2d", &a, &b, &c);
//    printf("year=%d\n", a);
//    printf("month=%02d\n", b);
//    printf("day=%02d\n", c);
//    return 0;
//}


//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�
//����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), 
//������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//���� 655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//��� 5λ���е����� Lily Number��

//#include<stdio.h>
//#include<math.h>
//int main() {
//
//    for (int i = 10000; i <= 99999; i++) {
//
//        int sum = 0;
//        int q = 0;
//        int o = 0;
//        for (int n = 1; n < 6; n++) {
//            q = i % (int)pow(10, n);
//            o = i / pow(10, n);
//            sum = sum + q * o;
//        }
//        if (sum == i) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
// 

////���⣺һ��Լ�� 3.156��107 s��Ҫ�������������䣬��ʾ������϶����롣
//#include <stdio.h>
//#include<math.h>
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    double p = 3.156 * pow(10, 7);
//    printf("%.0f", a * p);
//    return 0;
//}

////���Ľ�
#include <stdio.h>
//
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d ", a / 3600);
//    a = a % 3600;
//    printf("%d ", a / 60);
//    a = a % 60;
//    printf("%d ", a);
//   
//    return 0;
//}
int main() {


    DATE;
}

