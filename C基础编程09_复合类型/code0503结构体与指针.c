#include<stdio.h>

struct stu {
	char *name; //一级指针
	int age;
};

int main0503() {
	//3.结构体套一级指针
	struct stu* p1 = NULL;
	p1 = (struct stu*)malloc(sizeof(struct stu));
	p1->name = malloc(strlen("test") + 1);
	strcpy_s(p1->name, 50, "test");
	p1->age = 22;
	printf("p1->name = %s, p1->age = %d\n", p1->name, p1->age);
	printf("(*p1).name = %s, (*p1).age = %d\n", (*p1).name, (*p1).age);
	if (p1->name != NULL) {
		free(p1->name);
		p1->name = NULL;
	}
	if (p1 != NULL) {
		free(p1);
		p1 = NULL;
	}
	return 0;
}