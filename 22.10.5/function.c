#define _CRT_SECURE_NO_WARNINGS 1
#include"declaration.h"
void maopao(int* parr, int sz) {          //ð������
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

void init(int* parr,int sz) {  //��ʼ����������Ϊ0
	int i = 0;
	for (i = 0; i < sz; i++) {
		parr[i] = 0;
	}

}

void print(int* parr,int sz) {      //��ӡ��������
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", parr[i]);
	}
	printf("\n");
}

void reverse(int* parr, int sz) {   //��ת��������
	int i = 0;
	int head = 0;
	int end = sz - 1;
//	for (i = 0; i < sz / 2; i++) //������Լ�д�ģ���̫�ã���Ҳ�����������

	while (head < end) {
		int tem = parr[head];
		parr[head] = parr[end];
		parr[end] = tem;
		head = head + 1;
		end = end - 1;
	}
}

void exchange(int* par, int* parr,int sz) { //����������С��ͬ�����������
	int i = 0;
	for (i = 0; i < sz; i++) {
		int tem = par[i];
		par[i] = parr[i];
		parr[i] = tem;
	}
}

int erjinyi(int n) {           //����������������ж��ٸ�1
	int count = 0;
	int i = 0;
	for (i = 0; i < sizeof(n) * 8; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}

int erjinyi2(int n) {       //����������������ж��ٸ�1���߽ף�
	int count = 0;
	while (n) {             //n=n&(n-1)���ǰ�n���ұߵ�1ȥ�����ѽ������n
		n = n & (n - 1);    //�м���1����������ѭ������
		count++;            //����ֱ��n==0֮ǰ����������һֱ����
	}
	return count;
}

int get_diff(int a, int b) {  //����������в�ͬλ�ĸ�������������m��n������λ�ж��ٲ�ͬ��
	int c = a ^ b;            //ͨ���������õ�c��c��1���������Ƕ�����λ��ͬ�ĸ���
	int count = erjinyi2(c);
	return count;
}

void ji_ou(int i) { //��ӡint���͵Ķ����ƺͶ����Ƶ�����λ��ż��λ
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
	printf("��ӡ����λ:");
	for (n = 31; n >= 1; n -= 2) {
		printf("%d", (i >> (n - 1)) & 1);
	}
	printf("\n");
	printf("��ӡż��λ:");
	for (n = 32; n >= 2; n -= 2) {
		printf("%d", (i >> (n - 1)) & 1);
	}

}

double cifang(int i, int k) {     //����i��k�η�
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