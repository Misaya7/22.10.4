#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "���һ���޸���:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL
#include<stdio.h>
#include<math.h>
//��дһ��C����, ����ʱ�������ͼ��:
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

//��дһ��C����,����ʱ����a,b,c����ֵ,�������ֵ�����

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

//ð��
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

//1�������ҹ�����������ֵ����������Ϊ7%�� ����10����ҹ�����
//������ֵ����������������ٰٷֱȡ����㹫ʽΪp = (1+r)^n ,��
//��rΪ�������ʣ�nΪ������pΪ��������ȵı�����
//#include<math.h>
//int main() {
//    float r = 0.07;
//    float n = 10;
//    float p = pow(1 + r, n);
//    printf("%lf", p);
//    return 0;
//}

//��һ��������5λ��������, Ҫ��:��������Ǽ�λ��; �ڷֱ����ÿһλ����; �۰�
//���������λ���֣�����ԭ��Ϊ321, Ӧ���123��

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
//    printf("%dλ��\n", i);
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

//n�Ľ׳�

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

 

//ˮ�ɻ�
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

////11.һ�����100m�߶��������£�ÿ����غ󷴵���ԭ�߶ȵ�һ�룬
////�����£��ٷ����������ڵ�10�����ʱ������������, ��10�η�����
////�ߡ�
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


////���ӳ������⡣���ӵ�1��ժ�����ɸ����ӣ���������һ�룬����
////��񫣬�ֶ����һ������2�������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��
////��һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��������10����
////�����ٳ�ʱ����ֻʣһ�������ˡ����1�칲ժ���ٸ����ӡ�
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
////����ƹ����ӽ��б���������3�ˡ��׶�ΪA��B��C 3�ˣ��Ҷ�Ϊ
////X��Y��Z 3�ˡ��ѳ�ǩ���������������������Ա����������������
////A˵������X�ȣ�C˵������X��Z�ȣ��������ҳ�3�����ֵ�������
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
//                printf("A��%c��B��%c��C��%c", A_da, B_da, C_da);
//            }
//        }
//    }
//    return 0;
//}


//�������
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