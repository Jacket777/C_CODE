#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int add(int a, int b) {
	return a + b;
}

void print() {
	printf("hello world\n");
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main02() {
	int a = 10;
	int b = 20;
	int c = add(a, b);
	printf("%d\n", c);
	print();
	swap(a, b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return EXIT_SUCCESS;
}

