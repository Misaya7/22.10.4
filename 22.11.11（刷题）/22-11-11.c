#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL


////输入描述：
////输入包含两行，第一行包含一个正整数n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；第二行包含n个整数（范围1~5000），用空格分隔。
////
////输出描述：
////输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔。
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int arr[1000] = { 0 };
//    while (scanf("%d", &a) != EOF) {
//        int i = 0;
//        for (i; i < a; i++) {
//            scanf("%d", &arr[i]);
//        }
//        i = 0;
//        for (i; i < a; i++) {
//            int i2 = i;
//            int j = i2;
//
//            while (j < a-1) {
//
//                if (arr[i2] != arr[j + 1]) {
//                    j++;
//                }
//                else {
//                    arr[j + 1] = -1;
//                    j++;
//                }
//            }
//        }
//        i = 0;
//        for (i; i < a; i++) {
//            if (arr[i] != -1)
//                printf("%d ", arr[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main() {
//    char arr1[10] = { 0 };
//    char arr2[10] = { 0 };
//    while (scanf("%s %s", arr1, arr2) != EOF) {
//        if (strcmp(arr1, arr2) == 0) {
//            printf("same\n");
//        }
//        else {
//            printf("different\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 0 };
//    int i = 0;
//    while (i < 10) {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    i = 9;
//    for (i; i >= 0; i--) {
//        printf("%d ", arr[i]);
//    }
//        return 0;
//}


//描述
//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//
//数据范围：1 \le n \le 100 \1≤n≤100  ， 成绩使用百分制且不可能出现负数
//输入描述：
//两行，
//
//第1行，正整数n（1≤n≤100）
//
//第2行，n科成绩（范围0.0~100.0），用空格分隔。
//输出描述：
//输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    float arr[10] = { 0 };
//    while (scanf("%d", &a) != EOF) {
//        int i = 0;
//        for (i; i < a; i++) {
//            scanf("%f", &arr[i]);
//        }
//
//
//        float max = arr[0];
//        i = 1;
//        while (i < a) {
//            if (arr[i] > max) {
//                max = arr[i];
//                i++;
//            }
//            else {
//                i++;
//            }
//        }
//
//        float min = arr[0];
//        i = 1;
//        while (i < a) {
//            if (arr[i] < min) {
//                min = arr[i];
//                i++;
//            }
//            else {
//                i++;
//            }
//        }
//
//        float total = 0;
//        i = 0;
//        for (i; i < a; i++) {
//            total = arr[i] + total;
//        }
//        float avg = total / a;
//        printf("%.2f %.2f %.2f\n", max, min, avg);
//
//
//    }
//
//        return 0;
//}

//描述
//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//
//输入描述：
//第一行为N M(N: 矩阵行数；M: 矩阵列数, 且M, N <= 10)，接下来的N行为矩阵各行。
//输出描述：
//一行，其中大于零的元素之和

//#include <stdio.h>
//
//int main() {
//    int arr[10][10] = { 0 };
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) {
//        int i = 0;
//        int j = 0;
//        int sum = 0;
//        for (i; i < a; i++) {
//            int j = 0;
//            for (j; j < b; j++) {
//                scanf("%d", &arr[i][j]);
//                if (arr[i][j] > 0) {
//                    sum += arr[i][j];
//                }
//            }
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}

#include<stdio.h>

int main() {
    DATE;
    return 0;
}