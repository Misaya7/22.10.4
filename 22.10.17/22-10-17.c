#define _CRT_SECURE_NO_WARNINGS 1
//P48
#include<stdio.h>

//int main(){
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main() {          //杨辉三角
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//
//
//	for (i = 0; i < 10; i++) { //初始化二维数组
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//
//
//	for (j = 2; j < 10; j++) {//初始化第二列
//		arr[j][1] = arr[j - 1][0] + arr[j - 1][1];
//		
//	}
//
//
//	for (j = 3; j < 10; j++) {//得到其他列
//		for (i = 2; i < j; i++) {
//			arr[j][i] = arr[j - 1][i - 1] + arr[j-1][i];
//		}
//	}
//
//
//
//	for (i = 0; i < 10; i++) {//打印
//		for (j = 0; j <= i; j++) {
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main() {
//题目名称:猜凶手题目内容:
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说:不是我   B说:是C   C说:是D     D说:c在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
	//思路:真话为1，假话为0。如果条件语句相加等于3，则凶手出现
	char killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++) {
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
			printf("%c\n", killer);
		} 
	}
	return 0;
}