#define _CRT_SECURE_NO_WARNINGS 1

//P77

#include"Contact.h"
void menu() {
	printf("*******************************************\n");
	printf("**********1.add*************2.del**********\n");
	printf("**********3.search**********4.modify*******\n");
	printf("**********5.show************6.sort*********\n");
	printf("**********7.save************0.exit*********\n");
	printf("*******************************************\n");

}
int main() {
	
	int input = 0;
	struct Contact Con;//������ConͨѶ¼,������data�����size��volume
	Initcontact(&Con);//��ʼ��ͨѶ¼
	
	do {
		menu();
		printf("������:>");
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
		case SAVE:
			Savecontact(&Con);
			break;
		case EXIT:
			Savecontact(&Con);
			printf("�˳�");
			Destroycontact(&Con);
			//����ͨѶ¼-�ͷŶ�̬���ٵ��ڴ�
			break;
		default:
			printf("ѡ�����,������ѡ��:>\n");
		}
	} while (input);

	return 0;
}
