#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

//void Initcontact(struct Contact* ps) {
//	//����Ҫ��Contact�е�dataȫ������Ϊ0������ʹ���ڴ����ú���memset
//	memset(ps->data, 0, sizeof(ps->data));//��λ���ֽ�
//	ps->size = 0;//���ͨѶ¼��0����  
//}
void Checkvolume(struct Contact* ps) {
	if (ps->size == ps->volume) {
		//����
		struct People* pss = (struct People*)realloc(ps->data, (ps->volume + 2) * sizeof(struct People));
		assert(pss != NULL);
		ps->data = pss;
		ps->volume += 2;
		printf("���ݳɹ�\n");
		pss = NULL;
	}

}
void Initcontact(struct Contact* ps) {
	ps->data = (struct People*)calloc(VOLUME, 3 * sizeof(struct People));
	//��ʼ��ͨѶ¼ ʹ���ȿ��Դ�������˵�����
	assert(ps->data != NULL);
	ps->size = 0;//���ͨѶ¼��0����
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
	printf("����ɹ�\n");
	fclose(p);
	p = NULL;
}
//void Addcontact(struct Contact* ps) {
//	if (ps->size == MAX) {
//		printf("ͨѶ¼����,�޷������!\n");
//	}
//	else {
//		printf("����������:>");
//		scanf("%s", ps->data[ps->size].name);//�����name��һ��������
//		printf("����������:>");          //������scanf�ڲ�����Ҫȡ��ַ
//		scanf("%d", &(ps->data[ps->size].age));//��Ҫȡ��ַ
//		printf("�������Ա�:>");
//		scanf("%s", ps->data[ps->size].sex);
//		printf("������绰:>");
//		scanf("%s", ps->data[ps->size].tel);
//		printf("�������ַ:>");
//		scanf("%s", ps->data[ps->size].addr);
//
//		ps->size++;
//		printf("��ӳɹ�\n");
//	}
//}


void Addcontact(struct Contact* ps) {
	//�������
	//������ˣ����ӿռ�
	//���������ʲôҲ����
	Checkvolume(ps);
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);//�����name��һ��������
		printf("����������:>");          //������scanf�ڲ�����Ҫȡ��ַ
		scanf("%d", &(ps->data[ps->size].age));//��Ҫȡ��ַ
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tel);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
}
void Destroycontact(struct Contact* ps) {
	free(ps->data);
	ps->data = NULL;
}
void Searchcontact(const struct Contact* ps) {
	int find = 1;
	char search[20] = { 0 };
	printf("��������Ҫ��ѯ����:>");
	scanf("%s", search);
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (strcmp(search ,ps->data[i].name)==0) {
			printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n", 
				"����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("û���ҵ�\n");
}

void Showcontact(const struct Contact* ps) {
	if (ps->size == 0) {
		printf("ͨѶ¼Ϊ��\n");
	}
	else {
		printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ��,�޷��޸�\n");
	}
	else {
		printf("��������Ҫ�޸ĵ�ͨѶ¼��Ϣ������:>");
		scanf("%s", mo);
		int i = 0;
		for (i = 0; i < ps->size; i++) {
			if (strcmp(mo, ps->data[i].name) == 0) {
				printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n",
					"����", "����", "�Ա�", "�绰", "��ַ");
				printf("%-20s%-4d\t%-5s\t%-12s\t%-20s\n",
					ps->data[i].name,
					ps->data[i].age,
					ps->data[i].sex,
					ps->data[i].tel,
					ps->data[i].addr);

				printf("��������Ҫ�޸ĵ���:>");
				scanf("%s%d%s%s%s",
					ps->data[i].name,
					&ps->data[i].age,
					ps->data[i].sex,
					ps->data[i].tel,
					ps->data[i].addr);
				printf("�޸ĳɹ�\n");
				break;
			}
		}
		if (i==ps->size)
			printf("û���ҵ�Ҫ�޸ĵ���Ŀ\n");
	}
}

void Delcontact(struct Contact* ps) {
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (strcmp(name, ps->data[i].name) == 0) {
			break;
		}
	}
	if (i == ps->size) {
		printf("�Ҳ���Ҫɾ������\n");
	}
	else {
		int j = 0;
		for (j = i; j < ps->size; j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
int cmp_int(const void* p, const void* pp) {//���Բο�22-10-14
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
	printf("�������С����ɹ�\n");
}
