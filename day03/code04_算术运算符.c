#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main04() {
	int a = 10;
	int b = 3;
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	int c = 10;
	int d = c * 10;
	printf("%d\n", c);
	printf("%d\n", d);

	int f = ++a + --a + a++;
	printf("%d\n", f);
	printf("%d\n", a);

	return EXIT_SUCCESS;
}