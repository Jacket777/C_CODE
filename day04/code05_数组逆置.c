#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main05() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) - 1;
	while (i < j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}

	return EXIT_SUCCESS;
}