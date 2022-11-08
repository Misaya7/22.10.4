#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL


//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        int i = 0;
//        for (i; i < a; i++) {
//            int j = a;
//            if (i == 0 || i == a - 1) {
//                for (j; j > 0; j--) {
//                    printf("* ");
//                }
//                printf("\n");
//            }
//            else {
//                while (j) {
//                    if (j == a || j == 1) {
//                        printf("* ");
//                        j--;
//                    }
//                    else {
//                        printf("  ");
//                        j--;
//                    }
//                }
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}



//#include <stdio.h>

//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {
//        int i = 0;
//        int j = -1;
//        for (i; i < a; i++) {
//    
//            if (i == 0) {
//                printf("*");
//                printf("\n");
//            }
//            
//            else if (i > 0 && i < a - 1) {
//                printf("*");
//                j = j + 2;
//                int c = j;
//                for (c; c > 0; c--) {
//                    printf(" ");
//                }
//                printf("*");
//                printf("\n");
//               
//            }
//           
//            else{
//                j = a;
//                for (j; j > 0; j--) {
//                    printf("* ");
//                }
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a, b, c = 0;
//    while (scanf("%d %d %d", &a, &b, &c)) {
//        int d, e, f = 0;
//        scanf("%d %d %d", &d, &e, &f);
//        if (d < a) {
//            printf("no\n");
//            return 0;
//            if (e < b) {
//                printf("no\n");
//                return 0;
//            }
//            if (f < c) {
//                printf("no\n");
//                return 0;
//            }
//        }    
//        printf("yes\n");
//        return 0;
//    }
//
//}

#include<stdio.h>

int main() {
    DATE;
    return 0;
}