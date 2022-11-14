#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL
//BC121

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
//        node* head = (node*)malloc(sizeof(node));//第一行的头结点
//        head->next = NULL;
//        node* front = head;
//        node* rear = head;
//
//        int i = 0;
//        for (i; i < a; i++) {//输入第一行的数据
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
//        node* head2 = (node*)malloc(sizeof(node));//第二行的头结点
//        head2->next = NULL;
//        node* front2 = head2;
//        node* rear2 = head2;
//
//        int j = 0;
//        for (j; j < b; j++) {//输入第二行的数据
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
    scanf("%d %d\n", &n, &m); // 接收 n m
    for (i = 0; i < n + m; i++) {     // 总数就是n+m
        scanf("%d", &nx[i]);
    }
    for (i = 0; i < n + m - 1; i++) {         // 排序
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