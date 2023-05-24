#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main0101() {
	for (int i = 0; i < 10; i++) {
	if (i == 5) {
			break;
		}
		for (int j = 0; j < 10; j++) {
			printf("%d %d\n", i, j);
		}
	}
	return 0;
}

int main0102() {
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 1) {
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}











