#include<stdio.h>
#include<string.h>

//结构体类型的定义
struct stu
{
	char name[50];
	int age;
};

int main01() {
	struct stu s1;

	//如果是普通变量，通过点运算符操作结构体成员, s1为普通变量
	strcpy_s(s1.name, 50,"abc");
	//char stuName[] = { 'a','b','c' };
	//s1.name = stuName;
	s1.age = 18;
	printf("s1.name = %s, s1.age = %d\n", s1.name, s1.age);

	printf("------------------------------------\n");

	//如果是指针变量，通过->操作结构体成员, &s1 为普通变量

	strcpy_s((&s1)->name, 50, "test");
	(&s1)->age = 22;
	printf("(&s1)->name = %s, (&s1)->age = %d\n", (&s1)->name, (&s1)->age);
	return 0;


}