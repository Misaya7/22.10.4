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

//int main() {          //�������
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//
//
//	for (i = 0; i < 10; i++) { //��ʼ����ά����
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//
//
//	for (j = 2; j < 10; j++) {//��ʼ���ڶ���
//		arr[j][1] = arr[j - 1][0] + arr[j - 1][1];
//		
//	}
//
//
//	for (j = 3; j < 10; j++) {//�õ�������
//		for (i = 2; i < j; i++) {
//			arr[j][i] = arr[j - 1][i - 1] + arr[j-1][i];
//		}
//	}
//
//
//
//	for (i = 0; i < 10; i++) {//��ӡ
//		for (j = 0; j <= i; j++) {
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main() {
//��Ŀ����:��������Ŀ����:
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵:������   B˵:��C   C˵:��D     D˵:c�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������
	//˼·:�滰Ϊ1���ٻ�Ϊ0��������������ӵ���3�������ֳ���
	char killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++) {
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
			printf("%c\n", killer);
		} 
	}
	return 0;
}