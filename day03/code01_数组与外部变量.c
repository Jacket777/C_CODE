#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main01() {
	extern int a;
	int b = 10;
	char c = 'c';
	char d[11] = "hello world";
	//占位符 表示输出一个字符串  遇到\0停止
	printf("%s\n", d);
	return EXIT_SUCCESS;
}