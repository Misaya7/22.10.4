#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int arr[10] = { 0 };
//    int positive = 0;//+
//    int negative = 0;//-
//    for (n; n < 10; n++) {
//        scanf("%d", &arr[n]);
//        if (arr[n] > 0) {
//            positive++;
//        }
//        else if (arr[n] < 0) {
//            negative++;
//        }
//    }
//    printf("positive:%d\nnegative:%d\n", positive, negative);
//   
//
//        return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int num = 0;
//    while (scanf("%d", &a) != EOF) {
//        int n = 0;
//        int sum = 0;
//        for (n; n < a; n++) {
//            scanf("%d", &num);
//            sum += num;
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    
//    while (scanf("%d", &a) != EOF) {
//        int i = a;
//        int num = 0;
//        int last = 0;
//        for (i; i > 0; i--) {
//            scanf("%d", &num);
//            if (num >= last) {
//                last = num;
//            }
//            else {
//                printf("unsorted\n");
//                break;
//            }
//        }
//        if (i == 0)
//        printf("sorted\n");
//    }
//
//    return 0;
//}
//描述
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//输入描述：
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数，用空格分隔N个整数。
//输出描述：
//输出为一行，如果序列有序输出sorted，否则输出unsorted。
#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
        int i = a;
        int num = 0;
        int last = 0;
        int p = -1;//大于
        int t = 0;
        for (i; i > 0; i--) {
            scanf("%d", &num);
            if (i == a) {
                last = num;
            }

            if (i == a - 1){
                if ((last - num) >= 0) {
                    p = 1;
                }
                else {
                    p = 0;
                }
                /*(last - num) > 0 ? p = 1 : p = 0;*/
            }

            if (num >= last && p == 0) {
                last = num;
            }
            else if (num < last && p == 0) {
                printf("unsorted\n");
                t = -1;
                return 0;
            }

            if (num <= last && p == 1) {
                last = num;
            }
            else if (num >= last && p == 1) {
                printf("unsorted\n");
                t = -1;
                return 0;
            }

        }      
            printf("sorted\n");
    return 0;
}