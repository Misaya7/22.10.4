#define _CRT_SECURE_NO_WARNINGS 1
#define DATE	FILE* P = fopen("log.txt", "w"); \
                fprintf(P, "最后一次修改于:\ndate:%s\ntime:%s\n",\
					__DATE__, __TIME__); \
                fclose(P); P=NULL
#include<stdio.h>
int main() {          //杨辉三角
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };


	for (i = 0; i < 10; i++) { 
		arr[i][0] = 1;
		arr[i][i] = 1;
	}


	for (j = 2; j < 10; j++) {
		arr[j][1] = arr[j - 1][0] + arr[j - 1][1];
		
	}


	for (j = 3; j < 10; j++) {
		for (i = 2; i < j; i++) {
			arr[j][i] = arr[j - 1][i - 1] + arr[j-1][i];
		}
	}



	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
