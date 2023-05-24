#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	char a = 'Z';
	printf("%c\n", a);
	char b[3] = "HA";
	printf("%s\n", b);
	char d[12] = "hello world";
	//占位符 表示输出一个字符串  遇到\0停止  //??
	//字符数组的大小要大于实际一个
	printf("%s\n", d);
	return 0;
}