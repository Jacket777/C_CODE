#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main02() {
	int   a = 12;
	float b = 3.14;
	printf("====%5d=======\n", a);  //输出占据5个位置
	printf("----%-7.2f----\n", b);  //输出占据7个位置，2个位置给小数位

	char ch = 'c';
	printf("%c\n", ch);
	putchar(ch);
	putchar('B');
	putchar(97);
	putchar('\n');
	//return EXIT_SUCCESS;
	return 0;
}