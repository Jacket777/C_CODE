#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main02() {
	int   a = 12;
	float b = 3.14;
	printf("====%5d=======\n", a);  //���ռ��5��λ��
	printf("----%-7.2f----\n", b);  //���ռ��7��λ�ã�2��λ�ø�С��λ

	char ch = 'c';
	printf("%c\n", ch);
	putchar(ch);
	putchar('B');
	putchar(97);
	putchar('\n');
	//return EXIT_SUCCESS;
	return 0;
}