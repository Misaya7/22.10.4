#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main() {               //X的阶乘
//	int in = 0;
//	double ch = 1;
//	printf("请输入整数: ");
//	scanf("%d", &in);
//		for (int i = 1; i <= in; i++) {
//			ch = ch * i;
//		}
//		printf("%lf ", ch);
//	return 0;
//}

//int main() {                 //从1到X（输入）的阶乘之和
//	int in = 0;
//	int ji = 1;
//	int sum = 0;
//	printf("请输入整数 ");
//	scanf("%d", &in);
//	for (int i = 1; i <= in; i++) {
//		ji = ji * i ;
//		sum = sum + ji;
//	}
//	printf("从1到%d的阶乘之和为 %d",in, sum);
//	return 0;
//}

//int main() {                //从1到10的阶乘之和
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

//int main() {                            //二分查找
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int find = 0;
//	printf("请输入你想寻找的值:> ");
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
//			printf("找到了，下标是 %d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("没有找到\n");
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
		printf("请输入密码:>");
		scanf("%s", &password);
		if (strcmp(password,"123456")==0) {
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误\n");
			printf("剩余%d次机会\n", 2 - i);
		}
	}
	if (i == 3) {
		printf("三次机会耗尽，程序自动退出\n");
	}
	return 0;
}