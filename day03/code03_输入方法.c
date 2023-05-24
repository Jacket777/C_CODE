#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main03() {
	char ch;
	int a, b;
	scanf("%c", &ch);
	scanf("%3d%d", &a, &b);
	putchar(ch);
	printf("%d\t%d", a, b);
	char ch2;
	//接收键盘获取字符
	ch2 = getchar();
	putchar(ch2);
	//暂时停留界面
	getchar();
	int f;
	scanf("%d\n", &f);
	printf("%d\n", f);

	return EXIT_SUCCESS;
}