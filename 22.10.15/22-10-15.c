#define _CRT_SECURE_NO_WARNINGS 1
//P43
#include<stdio.h>
#include<string.h>
//int main() {
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));//                      第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));       //*        第一行第二个元素地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//             第一行第二个元素
//	printf("%d\n", sizeof(a + 1));//                第二行地址
//	printf("%d\n", sizeof(*(a + 1)));//                第二行大小
//	printf("%d\n", sizeof(&a[0] + 1));//              第二行地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//             第二行大小
//	printf("%d\n", sizeof(*a));//                        第一行大小
//	printf("%d\n", sizeof(a[3])); //并没有真实运算    *        
//	return 0;
//}

//48 4 16 4 4 4 4 16 16 16

////笔试题1
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}


////笔试题2
////由于还没学习结构体，这里告知结构体的大小是20个字节

//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//    (struct Test*)p = 0x100000;
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long)p + 0x1);
//    printf("%p\n", (unsigned int*)p + 0x1);
//    return 0;
//}


//P44
////笔试题3
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}


////笔试题4
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}


////笔试题5
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //指针减指针为两个指针之间的元素的个数
//    return 0;
//}


////P45
////笔试题6
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));  //(*(aa + 1))相当于aa[1]
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

////笔试题7
//int main()
//{
//	
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//
////笔试题7解释:char* p = "qwer";p中存的就是q的地址
////此题中char* a[] = { "work","at","alibaba" }; a是一个数组，他存放char*类型的数据
////可以理解为a[0]存放w的地址，a[1]存放a的地址，a[2]存放a的地址
////pa存放了a的首元素地址，也就是a[0],pa++得到a[1]也就是a的地址
////以a的地址为开头打印一个字符串，也就是at了


////笔试题8
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


////P46
//int main() {
//	char arr[20] = {0};
//	//scanf("%s", &arr);
//	gets(arr);//读取一行
//	printf("%s\n", arr);
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", strlen(arr));
//
//	return 0;
//}

int main() {          //*+**+***+****.....
	int i = 0;
	int j = 0;
	int n = 0;
	int sum = 0;
	printf("请输入一个整数:>");
	scanf("%d", &i);
	int ii = i;
	printf("你想循环多少次:>");
	scanf("%d", &j);
	for (n = 0; n < j; n++) {
		sum = sum + i;
		i = i * 10 + ii;
	}
	printf("%d\n", sum);
	return 0;
}