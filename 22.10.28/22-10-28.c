#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL


//P82
#include<stdio.h>

//#define SQUARE(X) X*X    //ʹ��defineʱ��Ҫ��������
//#define SQUARE2(X) (X)*(X)
//int main() {
//    //int ret = SQUARE(10);
//    //           //10*10
//    //printf("%d", ret);
//    int ret = SQUARE(1 + 1);//define���滻��ȥ�ģ����Ǵ��δ���ȥ��
//                   //1+1*1+1
//    printf("%d\n", ret);
//    int q = SQUARE2(1 + 1);
//    printf("%d", q);
//    return 0;
//}


//#define PRINT1(X) printf("the value of X is %d\n",X)
//#define PRINT2(X) printf("the value of "#X" is %d\n",X)//�Ѳ������뵽�ַ����� 
//int main() {         //��ǰ���ֳ�����#�ͻ�����X��Ӧ�����ݲ��뵽�ַ�����
//    //printf("hello\n");
//    //printf("he""ll""o\n");//����ַ������Զ���ϵ��һ��
//    int a = 10;
//    int b = 20;
//    PRINT1(a);
//    PRINT1(b);
//    PRINT2(a);
//    PRINT2(b);
//    return 0;
//}


//#define QQ(X,Y) X##Y //##���԰�λ�������˵ķ��źϳ�һ������
//int main(){
//    int hello = 1000;
//    printf("%d\n", QQ(he, llo));
//    return 0;
//}
//########################################################################
//P83  �궨��ͺ��������� 
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main() {
//    int a = 10;
//    int b = 20;
//    //int ret = MAX(a, b);
//    //printf("%d\n", ret);
//    int ret = MAX(a++, b++);//�����Ǵ��и����õĺ����
//              //MAX((a++)>(b++)?(a++):(b++))  
//    printf("%d\n", ret);
//    printf("%d\n", a);
//    printf("%d\n", b);
//
//#undef MAX  //�������Ƴ���һ���궨��
//    return 0;
//}

//#########################################################################
//P84

////#define DEBUG
//int main() {//��������,�����ڵĴ���ɾ����ϧ����������,�������ǿ���ѡ���Եı���
//    int arr[3] = { 1,2,3 };
//    int i = 0;
//    for (i = 0; i < 3; i++) {
//        arr[i] = 0;
//#ifdef DEBUG  
//        printf("%d ", arr[i]);
//#endif // DEBUG
//    }
//
//    return 0;
//}

//int main() {
//    int arr[3] = { 1,2,3 };
//    int i = 0;
//    for (i = 0; i < 3; i++) {
//        arr[i] = 0;
//#if 1//0
//        printf("%d ", arr[i]);
//#endif 
//    }
//    return 0;
//}

//int main() {   //���֧����������ָ��
//#if 1==1
//    printf("hehe\n");
//#else 2=1
//    printf("haha\n");
//#endif
//    return 0;
//}

int main() {
    int x = 1, y = 0;
    y = sizeof(x++);//sizeof�е���ʽ����������������
    printf("x=%d y=%d", x, y);
    return 0;
}