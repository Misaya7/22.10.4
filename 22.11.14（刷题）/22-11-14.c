#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL
//BC121

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


//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//typedef struct NODE {
//    int data;
//    struct NODE* next;
//}node;
//
//int main() {
//    int a, b = 0;
//    int length = 0;
//    int length2 = 0;
//    scanf("%d %d", &a, &b);
//        node* head = (node*)malloc(sizeof(node));//��һ�е�ͷ���
//        head->next = NULL;
//        node* front = head;
//        node* rear = head;
//
//        int i = 0;
//        for (i; i < a; i++) {//�����һ�е�����
//            node* new = (node*)malloc(sizeof(node));
//            int put = 0;
//            scanf("%d", &put);
//            new->data = put;
//            new->next = NULL;
//            rear->next = new;
//            rear = new;
//            length++;
//        }
//        
//
//
//        node* head2 = (node*)malloc(sizeof(node));//�ڶ��е�ͷ���
//        head2->next = NULL;
//        node* front2 = head2;
//        node* rear2 = head2;
//
//        int j = 0;
//        for (j; j < b; j++) {//����ڶ��е�����
//            node* new2 = (node*)malloc(sizeof(node));
//            int put2 = 0;
//            scanf("%d", &put2);
//            new2->data = put2;
//            new2->next = NULL;
//            rear2->next = new2;
//            rear2 = new2;
//            length2++;
//        }
//        printf("\n");
//
//
//
//        i = 0;
//        j = 0;
//        //front = head->next;
//        //front2 = head2->next;
//        int m = 0;
//        for (i; i < length2 + m; i++) {
//           
//            j = 0;
//            for (j; j <= length; j++) {
//                if (front2==NULL||front2->next == NULL) {
//                    break;
//                }
//                if (front2->next->data > front->next->data) {
//                    front = front->next;
//                }
//                else if (front2->next->data < front->next->data) {
//                    node* new3 = (node*)malloc(sizeof(node));
//                    new3->data = front2->next->data;
//                    new3->next = front->next;
//                    front->next = new3;
//                    m++;
//                    length2++;
//                    break;
//                }
//                if (j == length - 1 + m) {
//                    node* new3 = (node*)malloc(sizeof(node));
//                    new3->data = front2->next->data;
//                    new3->next = NULL;
//                    front->next = new3;
//                    m++;
//                    length2++;
//                    break;
//                }
//                
//            }
//            if (front2 != NULL) {
//                front2 = front2->next;
//                front = head;
//               
//            }
//
//        }
//
//
//    return 0;
//}

#include <stdio.h>
int main() {
    int n, m, nx[2000] = { 0 };
    int i, j, tmp;
    scanf("%d %d\n", &n, &m); // ���� n m
    for (i = 0; i < n + m; i++) {     // ��������n+m
        scanf("%d", &nx[i]);
    }
    for (i = 0; i < n + m - 1; i++) {         // ����
        for (j = 0; j < n + m - 1 - i; j++) {
            if (nx[j] > nx[j+1]) {
                tmp = nx[j];
                nx[j] = nx[j+1];
                nx[j+1] = tmp;
            }
        }
       
    }
    for (i = 0; i < n + m; i++) {
        printf("%d ", nx[i]);
    }
    return 0;
}


//#include<stdio.h>
//int cmp_small(int* a, int* b)
//{
//    return *a - *b;
//}
//int main()
//{
//    int arr[2000] = { 0 };
//    int n, m;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n + m; i++)
//        scanf("%d", &arr[i]);
//    qsort(arr, n + m, sizeof(arr[0]), cmp_small);
//    for (int i = 0; i < n + m; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}