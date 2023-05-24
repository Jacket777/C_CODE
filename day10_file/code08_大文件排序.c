#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int test0801() {
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/test.txt", "w");
	if (!fp)
		return -1;
	for (int i = 0; i < 1000; i++)
	{
		fprintf(fp, "%d\n", rand() % 256);
	}
	fclose(fp);
	return EXIT_SUCCESS;
}

int test0802() {

}