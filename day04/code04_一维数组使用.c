#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define SIZE 10

int main04() {
	int arr[SIZE];
	printf("������10����: \n");
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("���ֵΪ: %d\n", max);
	return EXIT_SUCCESS;
}