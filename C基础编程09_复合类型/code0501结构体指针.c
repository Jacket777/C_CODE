#include<stdio.h>

struct stu {
	char name[50];
	int age;
};

int main0501() {
	printf("1.ָ����ͨ�ṹ�������ָ��\n");
	struct stu s1 = { "lily", 18 };
	//�����ָ�������ͨ��->�����ṹ���Ա
	struct stu* p = &s1;
	printf("p->name = %s, p->age = %d\n", p->name, p->age);
	printf("(*p).name = %s, (*p).age = %d\n", (*p).name, (*p).age);
	return 0;
}