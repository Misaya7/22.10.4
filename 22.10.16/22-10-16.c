#define _CRT_SECURE_NO_WARNINGS 1
//P46
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <windows.h>
//int main() {                    //水仙花
//	int i = 0;
//	for (i = 0; i <= 100000; i++) {
//		int t = i;
//		int sum = 0;
//		int n = 1;//几位数
//		//1.计算位数
//		while  (t / 10) {
//			n++;
//			t /= 10;
//		}
//		//2.计算每一位的n的次方和
//		t = i;
//		while (t) {
//			sum +=(int) pow(t % 10, n);//pow函数，求次方
//			t /= 10;
//		}
//		//3.比较次方和与i的大小
//		if (sum == i) {
//			printf("%d\n", i);
//		}
//	}
//}

//int main() {         //打印菱形
//	//13行 1 3 5 7 9 11 13
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int o = 0;
//	for (i = 0; i < (line + 1) / 2; i++) {
//
//		int n = 0;
//		for (n = line - 1 - o; n > 0; n--) { //打印空格
//			printf(" ");
//		}
//		o += 2;
//		int j = 0;
//		for (j = 0; j < 2 * (i + 1) - 1; j++) {//打印星星
//			printf("* ");
//		}
//		printf("\n");
//		Sleep(1000);
//	}
//
//	int s = (line)-2;		
//	int b = 2;		
//	for (i = 0; i < (line - 1) / 2; i++) {
//		int z = 0;
//		for (z = 0 + b; z > 0; z--) {//打印空格
//			printf(" ");
//		}
//		b += 2;
//		int y = s;
//		for (y = s; y > 0; y--) {//打印星星
//			printf("* ");
//		}
//		s -= 2;
//		printf("\n");
//		Sleep(1000);
//	}
//	return 0;
//}			


//喝汽水问题。一块钱一瓶汽水，两个瓶子换一瓶，给20块钱，能喝几瓶？
int main() {
	int money = 0;
	int empty = 0;
	int drink = 0;
	scanf("%d", &money);

	drink = money;
	empty = money;
	while (empty >= 2) {
		drink = drink + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", drink);
	return 0;
}