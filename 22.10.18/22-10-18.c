#define _CRT_SECURE_NO_WARNINGS 1
//P49
#include<stdio.h>
#include<string.h>

//5位运动员参加了10米台跳水比赛，有人让他们预则比赛结果:
//A选手说:B第二，我第三;
//B选手说:我第二，E第四; 
//C选手说:我第一，D第二; 
//D选手说:C最后，我第三; 
//E选手说:我第四。A第一;
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main() {
//	int a, b, c, d, e = 0;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)) {
//							if((a*b*c*d*e)==120)
//							printf("a=%d b=%d c=%d d=%d e=%d ", a, b, c, d, e);
//						}
//
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//P50



//实现左旋
//如abcde左旋2个，成为cdeab
//比较好的思路:三步翻转法
//bacde
//baedc
//cdeab
void reverse(char* arr, char* arr1) {
	while (arr < arr1) {
		char tem = *arr;
		*arr = *arr1;
		*arr1 = tem;
		arr++;
		arr1--;
	}
}
void left_move(char* arr, int k) {
	int len = strlen(arr);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);

}

//int main() {
//	char arr[] = "abcde";//abcde\0
//	left_move(arr, 3);
//	printf("%s", arr);
//	return 0;
//}

////P51
////追加函数
//int main() {
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	//strcat(arr1, arr2);
//	//printf("%s", arr1);
//	strncat(arr1, arr1,2);
//	printf("%s", arr1);
//	return 0;
//}

//寻找子串函数
//int main() {
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL) {
//		printf("没有找到");
//	}
//	else {
//		printf("可以找到");
//	}
//}

//杨氏矩阵题目内容:
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找集个数字是否存在。
//要求 : 时间复杂度小于O(N);


//1 2 3
//4 5 6
//7 8 9

int findk(char arr[3][3], int* h, int* l, int k) {
	int x = 0;
	int y = *l - 1;

	while (x <= 3 && y >= 0) {
		if (arr[x][y] > k) {
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else {
			*h = x;
			*l = y;
			return 1;
		}
	}
	return 0;
}

int main() {
	int h = 3;
	int l = 3;
	char arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 9;
	int ret = findk(arr, &h, &l, k);
	if (ret == 1) {
		printf("找到了\n");
		printf("下标是%d %d\n", h, l);
	}
	else {
		printf("没有找到\n");
	}
	return 0;
}
 