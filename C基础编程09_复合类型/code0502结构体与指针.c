#include<stdio.h>

struct stu {
	char name[50];
	int age;
};

int main0502() {
	//2.堆区结构体变量
	struct stu* p1 = NULL;
	p1 = (struct stu*)malloc(sizeof(struct stu));
	strcpy_s(p1->name, 50, "test");
	p1->age = 22;
	printf("p1->name = %s, p1->age = %d\n", p1->name, p1->age);
	printf("(*p1).name = %s, (*p1).age = %d\n", (*p1).name, (*p1).age);
	free(p1);
	p1 = NULL;
	return 0;
}