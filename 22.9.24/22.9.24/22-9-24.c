#define _CRT_SECURE_NO_WARNINGS 1


//else跟最近的未匹配的if匹配
//switch（整形表达式） 
//case 整形常量表达式
  
#include<stdio.h>
#include<string.h>
//int main() {
//	//;//是一条语句，一条空语句
//	//int age = 10;
//	//if (age = 5)//这里一个等号是赋值，不是相等
//	//	printf("呵呵");
//	int n = 0;
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 != 0) {
//			printf("%d ", i);
//			i++;
//			n++;
//		}
//		else {
//			i++;
//		}
//	}
//	printf("\n%d", n);
//	}

//int main() {
//	int in = 3;
//	scanf("%d", &in);
//	switch (in) {//switch也可嵌套if，但不可出现continue
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main() {
//	int imp = getchar();
//	putchar(imp);
//	return 0;
//}


//int main() {
//	int in = 0;
//	while ((in = getchar()) != EOF) {   //ctrl + c
//		//EOF -> end of file-> -1
//		putchar(in);
//	}
//	return 0;
//}

//int main() {                       //从此开始三个代码连着看
//	char ret = 0;
//	char passpord[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", &passpord);
//	//scanf把输入的密码读走之后，输入缓冲区还剩一个\n(也就是回车键)
//	printf("请确认(Y/N)");
//	ret = getchar();
//	//ret把\n读走了，\n进入了if语句，所以我们还没有输入Y/N，程序就已经到了"取消确认"
//	if (ret == 'Y') {
//		printf("确认成功");
//	}
//	else {
//		printf("取消确认");
//	}
//	return 0;
//}

// int main() {
//	char ret = 0;
//	char passpord[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", &passpord);
//	//scanf把输入的密码读走之后，输入缓冲区还剩一个\n(也就是回车键)
//	getchar();
//	//把输入缓冲区的\n读走了，接下来我们就可以输入Y/N来确认了
//	//但是当我们把密码输入为1234 abcd（当中间有一个空格时），程序仍然有问题
//	//密码被scanf读走后，空格被第一个getchar读走了，剩下的abcd被第二个getchar读走了
//	//所以我们再次遇到了和上一个代码一样的问题，还没有输入Y/N，程序就跑完了
//	printf("请确认(Y/N)");
//	ret = getchar();
//	if (ret == 'Y') {
//		printf("确认成功");
//	}else  {
//		printf("取消确认");
//	}
//	return 0;
//}
// 
// 
//int main() {          //这个代码解决了上面两个代码的问题，但是密码中如果包含空格	                  //
//	char re = 0;     //它也只能读取到第一个空格前面输入的字符
//	char ret = 0;   //如输入的为 1231 564 6545  密码就只能读取1231
//	char passpord[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", &passpord);
//	while ((re = getchar()) != '\n') {
//		;
//	}
//	printf("请确认(Y/N)");
//	ret = getchar();
//	if (ret == 'Y') {
//		printf("确认成功");
//	}
//	else {
//		printf("取消确认");
//	}
//	return 0;
//}

//int main() {                //只打印数字序列
//	char ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


int main() {
	for (int i = 0; i < 10; i++)//10次循环 10次打印 10个元素
		//for (int i = 0; i <=9; i++) 这种方法也可以，但是不如上一行的写法
	{
		printf("%d ", i);
	}
	return 0;
}