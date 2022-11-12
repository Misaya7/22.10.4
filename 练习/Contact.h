//#define MAX 1000
#define VOLUME 3


#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 11
#define MAX_ADDR 50

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<assert.h>

//函数的声明
void Initcontact(struct Contact*);
void Addcontact(struct Contact*);
void Showcontact(const struct Contact*);//只是为了显示，不需要改变，可加const
void Searchcontact(const struct Contact*);
void Modifycontact(struct Contact*);
void Delcontact(struct Contact*);
void Sortcontact(struct Contact*);
void Destroycontact(struct Contact*);
void Savecontact(struct Contact*); 
void Loadcontact(struct Contact*);

enum Option{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE,
};


//人的具体属性
struct People {
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
	int age;
};
//通讯录类型
//struct Contact
//{
//	struct People data[MAX];//可以存放1000个人的信息
//	int size;//记录当前通讯录有多大
//};

struct Contact
{
	struct People* data;//可以存放1000个人的信息
	int size;//记录当前通讯录有多大
	int volume;
};
