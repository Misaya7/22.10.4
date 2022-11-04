#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {
//        for (a; a > 0; a--) {
//            int i = 0;
//            for (i = 0; i < a; i++) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 0;
//
//    while (~scanf("%d", &a)) {
//        int i = 0;
//        for (i = a; i > 0; i--) {
//            int j = 0;
//            for (j; j < 2 * i - 2; j++) {
//                printf(" ");
//            }
//            int q = a - i + 1;
//            for (q; q > 0; q--) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
// 

//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (~scanf("%d", &a)) {
//        int i = 0;
//        for (i; i < a; i++) {
//            int t = i;
//            for (t; t > 0; t--) {
//                printf(" ");
//            }
//            int q = a - i;
//            for (q; q > 0; q--) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    
//    while (~scanf("%d", &a)) {
//        int o = a;
//        int line = 0;
//        for (a; a >= 0; a--) {
//            line++;
//            int i = a;
//            for (i; i > 0; i--) {
//                printf(" ");
//            }
//            int q = line;
//            for (q; q > 0; q--) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        a = o;
//        int line2 = 0;
//        for (a; a > 0; a--) {
//            line2++;
//            int j = line2;
//            for (j; j > 0; j--) {
//                printf(" ");
//            }
//            int i = a;
//            for (i; i > 0; i--) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        int o = a;
//        int x = 1;
//        for (o; o >= 0; o--) {
//            x++;
//            int i = 2 * o;
//            for (i; i > 0; i--) {
//                printf(" ");
//            }
//            int xx = x;
//            for (xx; xx > 1; xx--) {
//                printf("*");
//            }
//            printf("\n");
//        }
//        
//        o = 1;
//        int q = 0;
//        for (o; o <= a; o++) {
//           
//            int i = 2 * o;
//            for (i; i > 0; i--) {
//                printf(" ");
//            }
//            x = a - q;
//            for (x; x > 0; x--) {
//                printf("*");
//            }
//            q++;
//
//            printf("\n");
//        }
//    }
//    return 0;
//}



#include <stdio.h>

int main() {

    DATE;
    return 0;
}