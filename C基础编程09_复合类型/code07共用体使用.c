#include<stdio.h>

union Test {
	unsigned char a;
	unsigned int b;
	unsigned short c;
};


int main07() {
	//定义共用体变量
	union Test temp;

	//1.测试所有成员的首地址----所有成员的首地址是一样的
	printf("所有成员的首地址\n");
	printf("%p, %p, %p\n", &(temp.a), &(temp.b), &(temp.c));

	//2.测试共用体大小---共用体大小为最大成员类型的大小
	printf("共用体大小为\n");
	printf("%lu\n", sizeof(union Test));

	//3.成员赋值---一个成员赋值，会影响另外的成员
	temp.b = 0x44332211;
	printf("char: %x\n", temp.a);
	printf("short: %x\n", temp.c);

	temp.a = 0x00;
	printf("short: %x\n", temp.c);
	printf("int: %x\n", temp.b);

	return 0;


}