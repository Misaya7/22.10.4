#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//#include<stdio.h>
//#include<math.h>
////4 / 3������465��100000000�� 9460730472580000)3
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

//BoBo����һ�����̣�������n��δ�򿪵����̣�
//KiKiϲ�������̣���һʱ�䷢�������̡�
//KiKiÿh�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������֮ǰ�������һ����
//��ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
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
////���°汾
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

//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽
//��������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12�� ��12��12�գ�������·���8�ۣ�
//������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����
//С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��
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