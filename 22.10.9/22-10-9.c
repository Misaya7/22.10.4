#define _CRT_SECURE_NO_WARNINGS 1
//unsigned char 取值范围是0--255
//char取值范围是-127--128

#include<stdio.h>
#include<string.h>
#include<limits.h> //查看整形的取值范围
#include<float.h> //查看浮点型的取值范围
//void my_strcpy(char* arr1, char* arr2) {//使用函数实现strcpy
//	while (*arr2 != '\0') {
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//int main() {
//	char arr1[] = "########";
//	char arr2[] = "hello";
////	strcpy(arr1, arr2);//系统的字符串复制
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//int main()               //从2的7次方加到2的31次方 
//{                        //11111111111111111111111110000000的结果
//    double sum = 0.0;
//    double ji = 1.0;
//    int i = 0;
//    for (i = 7; i <= 31; i++) {
//        int n = i;
//        while (n > 0) {
//            ji = ji * 2;
//            n--;
//        }
//        sum = sum + ji;
//        ji = 1;
//    }
//    printf("%lf", sum);
//    return 0;
//}


//int main() {              //整形提升的例子
//     char a = -128;
////10000000000000000000000010000000
////11111111111111111111111101111111
////11111111111111111111111110000000
//     //因为a只有一个字节，
//     //所以char a要截断 截断后为 10000000
//     //要以unsigned int打印出来，需要进行整形提升
////11111111111111111111111110000000--提升后 因为无符号 所以原反补码都一样 打印出来
//     printf("%u\n", a);// %u代表unsigned int 也就是无符号数
//     return 0;
//}

//int main()    //整形提升的例子
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    //原码:10000001  反码:11111110 补码:11111111
//    //因为c是无符号数字 她在整形提升的时候前面补的是0 所以c输出的是255
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}

//int main() {
//	//char arr[] = "1230464";
//	char arr[] = {1,2,0,3,4,5,7};
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//int main()        //一道坑题（可以联想char类型的圆形数字坐标系）
//{                                             //  0
//    char a[1000];
//    int i;             
//    for (i = 0; i < 1000; i++){            // -128 127
//        a[i] = -1 - i;
//    }
//    printf("%d\n", strlen(a));
//    return 0;
//}

//unsigned char i = 0;  //unsigned char的取值范围就是0-255 for循环中的条件恒成立
//int main()
//{
//    for (i = 0; i <= 255; i++){
//        printf("hello world\n");
//    }
//    return 0;
//}

//int main(){            //unsigned int 取值范围就是0-255，for中条件恒成立
//unsigned int i;
//for (i = 9; i >= 0; i--)
//  {
//    printf("%u\n", i);
//  }
//}

//int main() {
//	double b = 1E10;   //1.0的十次方
//	printf("%lf\n", b);
//	return 0;
//}

int main()         //浮点数存储
{ 
//9.0
//1001.0
//-1^0 * 1.001 * 2^3
//(-1)^S * M   * 2^E
//S - 0               M - 1.001              E - 3 
//  1                    23                    8           //32位
//  1                    52                    11          //64位 

	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}