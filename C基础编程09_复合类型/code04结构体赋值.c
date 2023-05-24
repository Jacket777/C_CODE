#include<stdio.h>
#include<string.h>

struct stu {
	char name[50];
	int age;
};

int main04() {
	struct stu s1;
	strcpy_s(s1.name,50, "abc");
	s1.age = 18;
	printf("s1.name = %s, s1.age = %d\n", s1.name, s1.age);

   //相同类型的两个结构体变量，可以相互赋值
   //把s1成员变量的值拷贝给s2成员变量的内存
   //s1和s2只是成员变量的值一样而已，它们还是没有关系的两个变量
	struct stu s2 = s1;
	//memcpy(&s2, &s1, sizeof(s1));
	printf("s2.name = %s, s2.age = %d\n", s2.name, s2.age);
	return 0;
}