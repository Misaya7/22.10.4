#define _CRT_SECURE_NO_WARNINGS 1

//P64 65

#include"Contact.h"
void menu() {
	printf("*******************************************\n");
	printf("**********1.add*************2.del**********\n");
	printf("**********3.search**********4.modify*******\n");
	printf("**********5.show************6.sort*********\n");
	printf("******************0.exit*******************\n");
	printf("*******************************************\n");

}
int main() {
	
	int input = 0;
	struct Contact Con;//创建了Con通讯录,包含了1000个数组和size
	Initcontact(&Con);//初始化通讯录
	
	do {
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			Addcontact(&Con);
			break;
		case DEL:
			Delcontact(&Con);
			break;
		case SEARCH:
			Searchcontact(&Con);
			break;
		case MODIFY:
			Modifycontact(&Con);
			break;
		case SHOW:
			Showcontact(&Con);
			break;
		case SORT:		
			Sortcontact(&Con);
			break;
		case EXIT:
			printf("退出");
			break;
		default:
			printf("选择错误,请重新选择:>\n");
		}
	} while (input);

	return 0;
}
