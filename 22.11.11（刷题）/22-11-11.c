#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL


////����������
////����������У���һ�а���һ��������n��1 �� n �� 1000������ʾ�ڶ������������ֵĸ������ڶ��а���n����������Χ1~5000�����ÿո�ָ���
////
////���������
////���Ϊһ�У����������˳�����ȥ��֮������֣��ÿո�ָ���
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


//����
//����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
//
//���ݷ�Χ��1 \le n \le 100 \1��n��100  �� �ɼ�ʹ�ðٷ����Ҳ����ܳ��ָ���
//����������
//���У�
//
//��1�У�������n��1��n��100��
//
//��2�У�n�Ƴɼ�����Χ0.0~100.0�����ÿո�ָ���
//���������
//���һ�У��������������ֱ��ʾ����߷֣���ͷ��Լ�ƽ���֣�С�������2λ�����ÿո�ָ���
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

//����
//����NxM���󣬾���Ԫ�ؾ�Ϊ�������������д������Ԫ��֮�͡�
//
//����������
//��һ��ΪN M(N: ����������M: ��������, ��M, N <= 10)����������N��Ϊ������С�
//���������
//һ�У����д������Ԫ��֮��

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