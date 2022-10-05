#define _CRT_SECURE_NO_WARNINGS 1
#include"declaration.h"
void maopao(int* parr, int sz) {          //冒泡排序
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++) {
		for (j = 0; j < sz - 1 - i; j++) {
			if (parr[j] > parr[j + 1]) {
				int tem = parr[j];
				parr[j] = parr[j + 1];
				parr[j + 1] = tem;
			}
		}
	}
}

void init(int* parr,int sz) {  //初始化整形数组为0
	int i = 0;
	for (i = 0; i < sz; i++) {
		parr[i] = 0;
	}

}

void print(int* parr,int sz) {      //打印整形数组
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", parr[i]);
	}
	printf("\n");
}

void reverse(int* parr, int sz) {   //翻转整形数组
	int i = 0;
	int head = 0;
	int end = sz - 1;
//	for (i = 0; i < sz / 2; i++) //这个是自己写的，不太好，但也可以完成任务

	while (head < end) {
		int tem = parr[head];
		parr[head] = parr[end];
		parr[end] = tem;
		head = head + 1;
		end = end - 1;
	}
}

void exchange(int* par, int* parr,int sz) { //交换两个大小相同的数组的内容
	int i = 0;
	for (i = 0; i < sz; i++) {
		int tem = par[i];
		par[i] = parr[i];
		parr[i] = tem;
	}
}

int erjinyi(int n) {           //计算二进制数列中有多少个1
	int count = 0;
	int i = 0;
	for (i = 0; i < sizeof(n) * 8; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}

int erjinyi2(int n) {       //计算二进制数列中有多少个1（高阶）
	int count = 0;
	while (n) {             //n=n&(n-1)就是把n最右边的1去除并把结果赋给n
		n = n & (n - 1);    //有几个1，这个代码就循环几次
		count++;            //所以直到n==0之前，这个代码会一直运行
	}
	return count;
}

int get_diff(int a, int b) {  //计算二进制中不同位的个数（计算整形m和n二进制位有多少不同）
	int c = a ^ b;            //通过异或运算得到c，c中1的数量就是二进制位不同的个数
	int count = erjinyi2(c);
	return count;
}

void ji_ou(int i) { //打印int类型的二进制和二进制的奇数位和偶数位
	int o = 0;
	int n = 0;
	int count = 0;
	for (o = 31; o >= 0; o--) {
		if (((i >> o) & 1) == 1) {
			printf("%d", 1);
		}
		else {
			printf("%d", 0);
		}
	}
	printf("\n");
	printf("打印奇数位:");
	for (n = 31; n >= 1; n -= 2) {
		printf("%d", (i >> (n - 1)) & 1);
	}
	printf("\n");
	printf("打印偶数位:");
	for (n = 32; n >= 2; n -= 2) {
		printf("%d", (i >> (n - 1)) & 1);
	}

}

double cifang(int i, int k) {     //计算i的k次方
	if (k > 0) {
		return i * cifang(i, k - 1);
	}
	else if (k < 0) {
		return (1.0 / (cifang(i, -k)));
	}
	else {
		return 1;
	}
}