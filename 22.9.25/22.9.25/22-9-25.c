#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main() {               //X�Ľ׳�
//	int in = 0;
//	double ch = 1;
//	printf("����������: ");
//	scanf("%d", &in);
//		for (int i = 1; i <= in; i++) {
//			ch = ch * i;
//		}
//		printf("%lf ", ch);
//	return 0;
//}

//int main() {                 //��1��X�����룩�Ľ׳�֮��
//	int in = 0;
//	int ji = 1;
//	int sum = 0;
//	printf("���������� ");
//	scanf("%d", &in);
//	for (int i = 1; i <= in; i++) {
//		ji = ji * i ;
//		sum = sum + ji;
//	}
//	printf("��1��%d�Ľ׳�֮��Ϊ %d",in, sum);
//	return 0;
//}

//int main() {                //��1��10�Ľ׳�֮��
//	int ret = 1;
//	int sum = 0;
//	for (int n = 1; n <= 10; n++) {
//		ret = 1;
//		for (int i = 1; i <= n; i++) {
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main() {                            //���ֲ���
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int find = 0;
//	printf("����������Ѱ�ҵ�ֵ:> ");
//	scanf("%d", &find);
//
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (find > arr1[mid]) {
//
//			left = mid + 1;
//		}
//		else if (find < arr1[mid]) {
//
//			right = mid - 1;
//		}
//		else {
//			printf("�ҵ��ˣ��±��� %d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("û���ҵ�\n");
//	}
//	return 0;
//}

//int main() {
//	char arr1[20]= "qwertyuiopasdfg";
//	char arr2[] = "###############";
//	//printf("%s", arr1);
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right) {
//		printf("\t\t\t\t\t\t");
//		printf("%s\n", arr2);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);
//		//system("cls");
//		left++;
//		right--;
//	}
//	printf("\t\t\t\t\t\t");
//	printf("%s\n", arr2);
//}


int main() {
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++) {
		printf("����������:>");
		scanf("%s", &password);
		if (strcmp(password,"123456")==0) {
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�������\n");
			printf("ʣ��%d�λ���\n", 2 - i);
		}
	}
	if (i == 3) {
		printf("���λ���ľ��������Զ��˳�\n");
	}
	return 0;
}