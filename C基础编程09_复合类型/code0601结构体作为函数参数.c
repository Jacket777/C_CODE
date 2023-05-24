#include<stdio.h>
#include<string.h>

struct stu{
	char name[50];
   int age;
};

//1.函数参数为结构体普通变量， 值传递
void set_stu(struct stu temp) {
	strcpy_s(temp.name, 50, "mike");
	temp.age = 18;
	printf("temp.name = %s, temp.age = %d\n", temp.name, temp.age);
}


//2.函数参数为结构体指针变量, 地址传递
void set_stu_pro(struct stu* temp) {
	strcpy_s(temp->name, 50, "mike");
	temp->age = 18;
}

//3.结构体数组名做函数参数
void set_stu_pro_arr(struct stu* temp, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		sprintf_s(temp->name, 10,"name%d%d%d", i, i, i);
		temp->age = 20 + i;
		temp++;
	}

}


//4.const修饰结构体指针形参变量
void fun1(struct stu* const p) {
	//p = NULL; //ERR
	p->age = 10; //ok
}

void fun2(const struct stu* p) {
	p = NULL; //OK
	//p->age = 10; //err
}


void fun3(const struct stu* const p) {
	//p = NULL; //er
	//p->age = 10; //err
}



int main06() {
	struct stu s = { "jack",20};  
	set_stu(s); //值传递
	printf("s.name = %s, s.age = %d \n", s.name, s.age);

	printf("2.函数参数为结构体指针变量\n");
	struct stu s1 = { "jack",26 };
	set_stu_pro(&s1); //地址传递
	printf("s1.name = %s, s1.age = %d \n", s1.name, s1.age);

	printf("3.结构体数组名做函数参数\n");
	struct stu s2[3] = { 0 };
	int i = 0;
	int n = sizeof(s2) / sizeof(s2[0]);
	set_stu_pro_arr(s2, n);
	for (i = 0; i < n; i++) {
		printf("%s, %d\n", s2[i].name, s2[i].age);
	}
}