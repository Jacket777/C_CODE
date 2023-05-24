#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main03() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr01[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int arr02[10] = { 1,2,3,4,5 };
	int arr03[10] = { 0 };
	int arr04[10] = { 1 };
	int arr05[10];
	arr05[0] = 1;
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d\n", arr[i]);
	}



}