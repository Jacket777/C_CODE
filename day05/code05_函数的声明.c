#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//函数声明
//extern int add01(int a, int b);

//函数声明
int add01(int a, int b);

int main05() {
	int result = add01(20, 43);
	printf("%d\n", result);
	return EXIT_SUCCESS;
}


//函数定义  只能定义一次
int add01(int a, int b) {
	return a + b;
}