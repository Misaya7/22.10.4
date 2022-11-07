#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
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
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
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

//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述：
//针对每行输入，输出用“ * ”组成的X形图案。
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