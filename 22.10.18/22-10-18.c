#define _CRT_SECURE_NO_WARNINGS 1
//P49
#include<stdio.h>
#include<string.h>

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������:
//Aѡ��˵:B�ڶ����ҵ���;
//Bѡ��˵:�ҵڶ���E����; 
//Cѡ��˵:�ҵ�һ��D�ڶ�; 
//Dѡ��˵:C����ҵ���; 
//Eѡ��˵:�ҵ��ġ�A��һ;
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

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



//ʵ������
//��abcde����2������Ϊcdeab
//�ȽϺõ�˼·:������ת��
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
////׷�Ӻ���
//int main() {
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	//strcat(arr1, arr2);
//	//printf("%s", arr1);
//	strncat(arr1, arr1,2);
//	printf("%s", arr1);
//	return 0;
//}

//Ѱ���Ӵ�����
//int main() {
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL) {
//		printf("û���ҵ�");
//	}
//	else {
//		printf("�����ҵ�");
//	}
//}

//���Ͼ�����Ŀ����:
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в��Ҽ��������Ƿ���ڡ�
//Ҫ�� : ʱ�临�Ӷ�С��O(N);


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
		printf("�ҵ���\n");
		printf("�±���%d %d\n", h, l);
	}
	else {
		printf("û���ҵ�\n");
	}
	return 0;
}
 