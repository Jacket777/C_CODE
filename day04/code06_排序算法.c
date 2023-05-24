#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main06() {
	int arr[] = { 9,1,5,7,2,10,8,4,6,3 };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10 - 1 - i; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}

	return EXIT_SUCCESS;
}