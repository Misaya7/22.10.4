#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL

//#include <stdio.h>
//
//int main() {
//    float a = 0;
//    int i = 0;
//
//    while (scanf("%d", &a)!=EOF) {
//        getchar();
//        
//            if (a > 0) {
//                printf("%d\n", 1);
//            }
//            else if (a == 0) {
//                printf("%.1f\n", 0.5);
//            }
//            else {
//                printf("%d\n", 0);
//            }   
//    }
//    return 0;
//}

//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!��
//�����������������Isosceles triangle!����������������������Ordinary triangle!��
//��֮�����Not a triangle!��

//#include <stdio.h>
//
//int main() {
//    int a, b, c = 0;
//    while (scanf("%d%d%d", &a, &b, &c)!=EOF) {
//        if (a + b > c && a + c > b && b + c > a) {
//            if (a == b && b== c) {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || a == c) {
//                printf("Isosceles triangle!\n");
//            }
//            else {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}

//BMI
//#include<stdio.h>
//#include<math.h>
//int main() {
//    float weight, height = 0.0;
//    float BMI = 0.0;
//    while (scanf("%f%f", &weight, &height)!=EOF) {
//        BMI = weight / pow(height / 100.0, 2);
//        if (BMI < 18.5)
//            printf("Underweight\n");
//        else if (BMI >= 18.5 && BMI <= 23.9)
//            printf("Normal\n");
//        else if (BMI >= 23.9 && BMI <= 27.9)
//            printf("Overweight\n");
//        else if (BMI > 27.9)
//            printf("Obese\n");
//    }
//    return 0;
//}

#include <stdio.h>
//#include<math.h>
//int main() {
//    float a, b, c = 0;
//    scanf("%f%f%f", &a, &b, &c);
//    double q = pow(b, 2) - (4 * a * c);
//    if (a == 0) {
//        printf("Not quadratic equation");
//    }
//    else {
//        if (q == 0) {
//            printf("x1=x2=%.2f", (sqrt(q) -b) / (2 * a));
//        }
//        else if (q > 0) {
//            printf("x1=%.2f;x2=%.2f", (-b - sqrt(q)) / (2 * a), (-b + sqrt(q)) / (2 * a));
//        }
//        else {
//            printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi", -b / (2 * a),sqrt(-q)/(2*a), -b / (2 * a), sqrt(-q) / (2 * a));
//        }
//    }
//    return 0;
//}
int mian() {

    DATE;
    return 0;
}