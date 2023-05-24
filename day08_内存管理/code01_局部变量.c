#include<stdio.h>
//局部变量

void test() {
	//auto写不写是一样的
	//auto只能出现在{}内部

	auto int b = 10;
}

int main01(void) {
	//b = 100; //err， 在main作用域中没有b
	if (1) {
		//在复合语句中定义，只在复合语句中有效
		int a = 10;
		printf("a = %d\n ", a);
	}
	//a = 10; //err离开if()的复合语句，a已经不存在
	return 0;
}