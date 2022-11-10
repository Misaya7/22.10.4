#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL



//#include <stdio.h>
//
//int main() {
//    int a, b;
//    int arr[100][100] = {0};
//    int arr2[100][100] = {0};
//    while (scanf("%d %d", &a, &b) != EOF) {
//        int a1 = 0;
//        int b1 = 0;
//      
//        for (a1; a1 < a; a1++) {
//            b1 = 0;
//            for (b1; b1 < b; b1++) {
//                scanf("%d ", &arr[a1][b1]);
//            }
//        }
//
//        a1 = 0;
//        b1 = 0;
//        for (a1; a1 < a; a1++) {
//            b1 = 0;
//            for (b1; b1 < b; b1++) {
//                scanf("%d ", &arr2[a1][b1]);
//            }
//        }
//
//
//        int cnt = 0; //表示相同的个数
//  //比较
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < b; j++)
//            {
//                if (arr[i][j] == arr2[i][j])
//                {
//                    cnt++;
//                }
//            }
//        }
//        //输出
//        printf("%.2f\n", 100.0 * cnt / (a * b));
//
//        return 0;
//
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include<string.h>
//int main() {
//   char a[6], b[6];
//    while (scanf("%s %s", a, b) != EOF) {
//        if (strcmp("admin", a) == 0 && strcmp("admin", b)==0) {
//            printf("Login Success!\n");
//        }
//        else {
//            printf("Login Fail!\n");
//        }
//    }
//
//        return 0;
//    }



//1-2019含有9的
//#include <stdio.h>
//
//
//
//int main() {
//
//    int sum = 0;
//
//
//    int i = 1;
//    for (i=1; i <= 2019; i++) {
//        int j = i;
//        while (j) {
//            if (j % 10 == 9) {
//                sum++;
//               /* printf("%d ", i);*/
//                break;
//            }
//            else {
//                j = j / 10;
//            }
//        }
//    }
//    printf("%d", sum);
// 
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {
//        int i = 1;
//        int j = 0;
//        int o = 0;
//        for (i; i <= a; i++) {
//            if (i % 2 == 0) {
//                o++;
//            }
//            else {
//                j++;
//            }
//        }
//        printf("%d %d", j, o);
//        printf("\n");
//    }
//
//    return 0;
//}


#include <stdio.h>

int main() {
    int a = 0;
    int arr[50] = { 0 };
    scanf("%d", &a);
    int b = a;
    int len = a;
        int i = 0;
        for (i; i < a; i++) {
            scanf("%d ", &arr[i]);
        }
        int z = 0;
        scanf("%d", &z);
        i = 0;
        for (i; i <= a; i++) {
            if (arr[i] == z) {
                arr[i] = -1;
                
            }
        }
        i = 0;
        for (i; i < a; i++) {
            if (arr[i] != -1)
            printf("%d ", arr[i]);
        }
            
            
        
        return 0;
    }