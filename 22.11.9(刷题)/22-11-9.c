#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL


#include <stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node* ps;
}Node;

int main() {
    int a = 0;
    scanf("%d", &a);

    int i = 0;
    
//    Node* arr = (Node*)malloc(50 * sizeof(Node));
    Node* head = (Node*)malloc(sizeof(Node));
    Node* front = head; 
    Node* rear = head;
    Node* c = head;
    Node* y = head;

    head->data = 0;
    head->ps = NULL;
    while (i < a) {
        int b = 0;
        scanf("%d", &b);
        Node* a = (Node*)malloc(sizeof(Node));
        a->data = b;
        a->ps = NULL;
        rear->ps = a;
        rear = a;
        i++;
        
    }
    
    i = a;
    Node* b = (Node*)malloc(sizeof(Node));
    scanf("%d", &b->data);
    while (i >= 0) {
        if (i == 0) {
           
            front->ps = b;
            rear = b;
            break;
        }
        if (b->data > front->ps->data) {
            front = front->ps;
            i--;
        }
        else if(b->data <= front->ps->data) {
            b->ps = front->ps;
            front->ps = b;
            rear = b;
            break;
        }

    }

    c = c->ps;
    while (a>=0) {
        printf("%d ", c->data);
        c = c->ps;
        a--;
    }
    //没有free
    return 0;
}