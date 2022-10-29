#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL


//P82
#include<stdio.h>

//#define SQUARE(X) X*X    //使用define时候不要吝啬括号
//#define SQUARE2(X) (X)*(X)
//int main() {
//    //int ret = SQUARE(10);
//    //           //10*10
//    //printf("%d", ret);
//    int ret = SQUARE(1 + 1);//define是替换过去的，不是传参传过去的
//                   //1+1*1+1
//    printf("%d\n", ret);
//    int q = SQUARE2(1 + 1);
//    printf("%d", q);
//    return 0;
//}


//#define PRINT1(X) printf("the value of X is %d\n",X)
//#define PRINT2(X) printf("the value of "#X" is %d\n",X)//把参数插入到字符串中 
//int main() {         //宏前出现出现了#就会把这个X对应的内容插入到字符串中
//    //printf("hello\n");
//    //printf("he""ll""o\n");//多个字符串会自动联系到一起
//    int a = 10;
//    int b = 20;
//    PRINT1(a);
//    PRINT1(b);
//    PRINT2(a);
//    PRINT2(b);
//    return 0;
//}


//#define QQ(X,Y) X##Y //##可以把位于他两端的符号合成一个符号
//int main(){
//    int hello = 1000;
//    printf("%d\n", QQ(he, llo));
//    return 0;
//}
//########################################################################
//P83  宏定义和函数的区别 
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main() {
//    int a = 10;
//    int b = 20;
//    //int ret = MAX(a, b);
//    //printf("%d\n", ret);
//    int ret = MAX(a++, b++);//这样是带有副作用的宏参数
//              //MAX((a++)>(b++)?(a++):(b++))  
//    printf("%d\n", ret);
//    printf("%d\n", a);
//    printf("%d\n", b);
//
//#undef MAX  //这样就移除了一个宏定义
//    return 0;
//}

//#########################################################################
//P84

////#define DEBUG
//int main() {//条件编译,调试期的代码删除可惜，保留碍事,所以我们可以选择性的编译
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

//int main() {   //多分支的条件编译指令
//#if 1==1
//    printf("hehe\n");
//#else 2=1
//    printf("haha\n");
//#endif
//    return 0;
//}

int main() {
    int x = 1, y = 0;
    y = sizeof(x++);//sizeof中的算式并不会真正的运算
    printf("x=%d y=%d", x, y);
    return 0;
}