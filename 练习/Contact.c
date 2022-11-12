#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

//void Initcontact(struct Contact* ps) {
//	//这里要把Contact中的data全部设置为0，可以使用内存设置函数memset
//	memset(ps->data, 0, sizeof(ps->data));//单位是字节
//	ps->size = 0;//最初通讯录有0个人  
//}
void Checkvolume(struct Contact* ps) {
	if (ps->size == ps->volume) {
		//增容
		struct People* pss = (struct People*)realloc(ps->data, (ps->volume + 2) * sizeof(struct People));
		assert(pss != NULL);
		ps->data = pss;
		ps->volume += 2;
		printf("增容成功\n");
		pss = NULL;
	}

}
void Initcontact(struct Contact* ps) {
	ps->data = (struct People*)calloc(VOLUME, 3 * sizeof(struct People));
	//初始化通讯录 使其先可以存放三个人的数据
	assert(ps->data != NULL);
	ps->size = 0;//最初通讯录有0个人
	ps->volume = VOLUME;

	Loadcontact(ps);
}
void Loadcontact(struct Contact* ps) {
	struct People p = { 0 };
	FILE* read = fopen("test.txt", "rb");
	if (read == NULL) {
		printf("%s\n", strerror(errno));
		return;
	}

	while (fread(&p, sizeof(struct People), 1, read)) {
		Checkvolume(ps);
		ps->data[ps->size] = p;
		ps->size++;
	}
	fclose(read);
	read = NULL;
}


void Savecontact(struct Contact* ps) {
	FILE* p = fopen("test.txt", "wb");
	if (p == NULL) {
		printf("%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		fwrite(&(ps->data[i]), sizeof(struct People), 1, p);
	}
	printf("保存成功\n");
	fclose(p);
	p = NULL;
}
//void Addcontact(struct Contact* ps) {
//	if (ps->size == MAX) {
//		printf("通讯录已满,无法再添加!\n");
//	}
//	else {
//		printf("请输入名字:>");
//		scanf("%s", ps->data[ps->size].name);//这里的name是一个数组名
//		printf("请输入年龄:>");          //所以在scanf内部不需要取地址
//		scanf("%d", &(ps->data[ps->size].age));//需要取地址
//		printf("请输入性别:>");
//		scanf("%s", ps->data[ps->size].sex);
//		printf("请输入电话:>");
//		scanf("%s", ps->data[ps->size].tel);
//		printf("请输入地址:>");
//		scanf("%s", ps->data[ps->size].addr);
//
//		ps->size++;
//		printf("添加成功\n");
//	}
//}


void Addcontact(struct Contact* ps) {
	//检测容量
	//如果满了，增加空间
	//如果不满，什么也不做
	Checkvolume(ps);
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);//这里的name是一个数组名
		printf("请输入年龄:>");          //所以在scanf内部不需要取地址
		scanf("%d", &(ps->data[ps->size].age));//需要取地址
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tel);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
}
void Destroycontact(struct Contact* ps) {
	free(ps->data);
	ps->data = NULL;
}
void Searchcontact(const struct Contact* ps) {
	int find = 1;
	char search[20] = { 0 };
	printf("请输入你要查询的人:>");
	scanf("%s", search);
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (strcmp(search ,ps->data[i].name)==0) {
			printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n", 
				"名字", "年龄", "性别", "电话", "地址");
			printf("%-20s%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tel,
				ps->data[i].addr);
			find = 0;
		}
	}
	if (find)
	printf("没有找到\n");
}

void Showcontact(const struct Contact* ps) {
	if (ps->size == 0) {
		printf("通讯录为空\n");
	}
	else {
		printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		int i = 0;
		for (i = 0; i < ps->size; i++) {
			printf("%-20s%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tel,
				ps->data[i].addr);
		}
	}
}

void Modifycontact(struct Contact* ps) {
	
	char mo[MAX_NAME] = { 0 };
	if (ps->size == 0) {
		printf("通讯录为空,无法修改\n");
	}
	else {
		printf("请输入你要修改的通讯录信息的人名:>");
		scanf("%s", mo);
		int i = 0;
		for (i = 0; i < ps->size; i++) {
			if (strcmp(mo, ps->data[i].name) == 0) {
				printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n",
					"名字", "年龄", "性别", "电话", "地址");
				printf("%-20s%-4d\t%-5s\t%-12s\t%-20s\n",
					ps->data[i].name,
					ps->data[i].age,
					ps->data[i].sex,
					ps->data[i].tel,
					ps->data[i].addr);

				printf("请输入你要修改的项:>");
				scanf("%s%d%s%s%s",
					ps->data[i].name,
					&ps->data[i].age,
					ps->data[i].sex,
					ps->data[i].tel,
					ps->data[i].addr);
				printf("修改成功\n");
				break;
			}
		}
		if (i==ps->size)
			printf("没有找到要修改的项目\n");
	}
}

void Delcontact(struct Contact* ps) {
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (strcmp(name, ps->data[i].name) == 0) {
			break;
		}
	}
	if (i == ps->size) {
		printf("找不到要删除的人\n");
	}
	else {
		int j = 0;
		for (j = i; j < ps->size; j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
int cmp_int(const void* p, const void* pp) {//可以参考22-10-14
	//struct People* q = (struct People*)p;
	//struct People* qq = (struct People*)pp;
	//return (q->age) - (qq->age);
	return (((struct People*)p)->age - ((struct People*)pp)->age);
}
//int cmp_name(const void* p, const void* pp) {
//	return strcmp(((struct People*)p)->name, ((struct People*)pp)->name);
//}
void Sortcontact(struct Contact* ps) {  
	qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_int);
	printf("按年龄大小排序成功\n");
}
