#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//输入描述：
//输入包含三行，
//
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。



//#include<stdio.h>
//                            //冒泡
//int main() {
//    int n,m = 0;
//    int arr[3000] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i ,j= 0;
//    for (i = 0; i < n + m; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n + m - 1; i++) {
//        for (j = 0; j < n + m - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int tem = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tem;
//            }
//        }
//    }
//    for (j = 0; j < n + m; j++) {
//        printf("%d ", arr[j]);
//    }
//
//    return 0;
//}


#include<stdio.h>
#include<stdlib.h>

int cmp_int(int *a, int *b) {//qsort函数
    return *a - *b;
}
int main() {
    int n, m = 0;
    int arr[3000] = { 0 };
    scanf("%d %d", &n, &m);
    int i, j = 0;
    for (i = 0; i < n + m; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n + m, sizeof(arr[0]), cmp_int);

    for (j = 0; j < n + m; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}