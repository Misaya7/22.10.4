#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//����������
//����������У�
//
//��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����
//
//�ڶ��а���n���������ÿո�ָ���
//
//�����а���m���������ÿո�ָ���
//���������
//���Ϊһ�У��������Ϊn + m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���



//#include<stdio.h>
//                            //ð��
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

int cmp_int(int *a, int *b) {//qsort����
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