#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 11
#define MAX_ADDR 50

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//����������
void Initcontact(struct Contact*);
void Addcontact(struct Contact*);
void Showcontact(const struct Contact*);//ֻ��Ϊ����ʾ������Ҫ�ı䣬�ɼ�const
void Searchcontact(const struct Contact*);
void Modifycontact(struct Contact*);
void Delcontact(struct Contact*);
void Sortcontact(struct Contact*);


enum Option{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};


//�˵ľ�������
struct People {
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
	int age;
};
//ͨѶ¼����
struct Contact
{
	struct People data[MAX];//���Դ��1000���˵���Ϣ
	int size;//��¼��ǰͨѶ¼�ж��
};

//