#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//#include<stdio.h>
//#include<math.h>
////4 / 3××（465×100000000× 9460730472580000)3
//int main() {
//    int i = 0;
//    long long stone = 15000000;
//    long long universe = 4 / 3 * 3.14 * pow(0.465 * 946073.047258, 3);
//    while (stone < universe) {
//        universe = pow(universe, 2);
//        i++;
//    }
//    printf("%d", i);
//    return 0;
//}
// 

//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，
//KiKi喜欢喝酸奶，第一时间发现了酸奶。
//KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，
//那么经过m分钟后还有多少盒未打开的酸奶？
//#include <stdio.h>
//
//int main() {
//    int n, h, m = 0;
//    scanf("%d%d%d", &n, &h, &m);
//
//    int q = m / h;
//    int f = m % h;
//    if (f != 0) {
//        q++;
//    }
//    printf("%d",n-q);
//    return 0;
//}
////船新版本
//int main() {
//    int n, h, m = 0;
//    scanf("%d%d%d", &n, &h, &m);
//    printf("%d", n - (m / h) - (m % h ? 1 : 0));
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    float n, h, m, j, k;
//    scanf("%f%f%f%f%f", &n, &h, &m, &j, &k);
//    printf("%.1lf", (n + h + m + j + k) / 5);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b;
//    scanf("%x%o", &a, &b);
//    printf("%d", a+b);
//    return 0;
//}
// 

//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到
//如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，
//如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
//#include <stdio.h>
//
//int main() {
//    float price = 0;
//    int month, day, ticket = 0;
//    scanf("%f%d%d%d", &price, &month, &day, &ticket);
//    if (price * (month == 11 ? 0.7 : 0.8) - (ticket == 1 ? 50 : 0) < 0) {
//        printf("%.2lf", 0);
//    }
//    else {
//        printf("%.2lf", price * (month == 11 ? 0.7 : 0.8) - (ticket == 1 ? 50 : 0));
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int u = 0;
//    while ((u = getchar())!='0') {
//        if (u == 'A') {
//            a++;
//        }
//        else if (u == 'B') {
//            b++;
//        }
//    }
//    if (a > b) {
//        printf("A");
//    }
//    else if (a < b) {
//        printf("B");
//    }
//    else {
//        printf("E");
//
//    }
//    return 0;
//}