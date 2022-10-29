#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL
#include<stdio.h>
#include<math.h>
//编写一个C程序, 运行时输出以下图形:
//****
// ****
//  ****
//   ****

//int main() {
//    int i = 0;
//    int j = 0;
//    for (j = 0; j < 4; j++) {
//
//        for (i = 0; i < j; i++) {
//            printf(" ");
//        }
//        printf("****");
//        printf("\n");
//    }
//    return 0;
//}

//编写一个C程序,运行时输人a,b,c三个值,输出其中值最大者

//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    int max = a;
//    if (b > max) {
//        max = b;
//    }
//    if (c > max) {
//        max = c;
//    }
//    printf("%d", max);
//    return 0;
//}

//冒泡
//int main() {
//    int arr[9] = { 7,8,5,6,4,9,1,2,3 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz - 1; i++) {
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//1、假如我国国民生产总值的年增长率为7%， 计算10年后我国国民
//生产总值与现在相比增长多少百分比。计算公式为p = (1+r)^n ,其
//中r为年增长率，n为年数，p为与现在相比的倍数。
//#include<math.h>
//int main() {
//    float r = 0.07;
//    float n = 10;
//    float p = pow(1 + r, n);
//    printf("%lf", p);
//    return 0;
//}

//给一个不多于5位的正整数, 要求:①求出它是几位数; ②分别输出每一位数字; ③按
//逆序输出各位数字，例如原数为321, 应输出123。

//int main() {
//    int n = 0;               
//    scanf("%d", &n);
//    if (n > 99999 || n < 0) {
//        return -1;
//
//    }
//
//    int a = n;               //1
//    int i = 1;
//    while (a = a / 10) {
//        i++;
//    }
//    printf("%d位数\n", i);
//
//
//    int arr[5] = { 0 };  //2
//    a = n;
//    i = 0;
//    do {
//        int n = a % 10;
//        arr[i] = n;
//        i++;
//    } while (a = a / 10);
//    for (i = 4; i >= 0; i--) {
//        if (arr[i] != 0) {
//            printf("%d ", arr[i]);
//        }
//    }
//    printf("\n");
//
//    a = n;                //3
//    do {
//        int n = a % 10;
//        printf("%d ", n);
//    } while (a = a / 10);
//
//    return 0;
//}

//n的阶乘

//int main() {
//    int i = 0;
//    scanf("%d", &i);
//    double ret = 1.0;
//    int he = 0;
//    while (i > 1) {
//        ret = ret * i * (i - 1);
//        i = i - 2;
//    }
//    printf("%lf\n", ret);
//    return 0;
//}

////1!+....+20!
//int main() {
//    double i = 0;
//    double he = 0.0;
//   
//    for (i = 20; i > 0; i--) {
//       double n = i; 
//       double ret = 1.0;
//        while (n > 1) {
//            ret = ret * n * (n - 1);
//            n = n - 2; 
//            
//        }
//           he = he + ret;
//    }
//        printf("%f\n", he);
//    return 0;
//}

 

//水仙花
//int main() {
//    int i = 0; 
//
//    for (i = 0; i < 10000; i++) { 
//        int sum = 0;
//        int wei = 1;
//        int tem = i;
//        while (tem / 10) {
//            wei++;
//            tem /= 10;
//        }
//
//        tem = i;
//        while (tem) {
//            sum += pow(tem % 10, wei);
//            tem = tem / 10;
//        }
//        if (sum == i) {
//            printf("%d\n", i);
//        }
//    }
//
//    return 0;
//}
// 

////11.一个球从100m高度自由落下，每次落地后反弹回原高度的一半，
////再落下，再反弹。求它在第10次落地时共经过多少米, 第10次反弹多
////高。
//int main() {
//    double high = 100;
//    double sum = 0;
//    double huitan = 0;
//
//    int i = 0;
//    for (i = 1; i <= 10; i++) {
//        sum = sum + high + huitan;
//        huitan = high / 2;
//        high = high / 2;
//       
//    }
//    
//    printf("%f\n", sum);
//    printf("%f\n", huitan);
//    return 0;
//}


////猴子吃桃问题。猴子第1天摘下若干个桃子，当即吃了一半，还不
////过瘾，又多吃了一个。第2天早上又将剩下的桃子吃掉一半，又多吃
////了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早
////上想再吃时，就只剩一个桃子了。求第1天共摘多少个桃子。
//int main() {
//    int day10 = 1;
//    int i = 0;
//    for (i = 0; i < 9; i++) {
//        day10 = 2 * (day10 + 1);
//    }
//    printf("%d", day10);
//    return 0;
//}
// 
//
////两个乒乓球队进行比赛，各出3人。甲队为A，B，C 3人，乙队为
////X，Y，Z 3人。已抽签决定比赛名单。有人向队员打听比赛的名单，
////A说他不和X比，C说他不和X，Z比，请编程序找出3对赛手的名单。
//int main() {
//    char arr1[3] = { 'A','B','C' };
//    char arr2[3] = { 'X','Y','Z' };
//    int A_da, B_da, C_da;
//    for (A_da = 'X'; A_da <= 'Z'; A_da++) {
//        for (B_da = 'X'; B_da <= 'Z'; B_da++) {
//            for (C_da = 'X'; C_da <= 'Z'; C_da++) {
//                if (A_da == 'X' || C_da == 'X' || C_da == 'Z'||A_da==B_da||A_da==C_da||B_da==C_da) {
//                    continue;
//                }
//                printf("A对%c，B对%c，C对%c", A_da, B_da, C_da);
//            }
//        }
//    }
//    return 0;
//}


//杨辉三角
int main() {
    int arr[10][10] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < 10; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
        
    }

    for (i = 2; i < 10; i++) {
        int n = 1;
        while (i >n - 1) {
            arr[i][n] = arr[i - 1][n] + arr[i - 1][n - 1];
            n++;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < i+1; j++) {
            printf("%-5d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}