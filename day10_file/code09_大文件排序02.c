#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define SIZE 10000


void BubbleSort(int* src, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (src[j] > src[j + 1])
			{
				int temp = src[j];
				src[j] = src[j + 1];
				src[j + 1] = temp;
			}
		}
	}
}

int main0901()
{
	FILE* fp1 = fopen("D:/����.txt", "r");
	FILE* fp2 = fopen("D:/����ð�ݰ�����.txt", "w");
	if (!fp1 || !fp2)
		return -1;

	//ð�ݰ�
	int* arr = (int*)malloc(sizeof(int) * SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		fscanf(fp1, "%d\n", &arr[i]);
	}

	BubbleSort(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		fprintf(fp2, "%d\n", arr[i]);
	}


	free(arr);
	fclose(fp1);
	fclose(fp2);
	return EXIT_SUCCESS;
}

int main09(void)
{
	FILE* fp1 = fopen("D:/����.txt", "r");
	FILE* fp2 = fopen("D:/���ݲ��������.txt", "w");
	if (!fp1 || !fp2)
		return -1;

	int* arr = (int*)malloc(sizeof(int) * 256);

	memset(arr, 0, sizeof(int) * 256);

	for (int i = 0; i < 1000; i++)
	{
		int value;
		fscanf(fp1, "%d\n", &value);
		arr[value]++;//�����ݵĸ������ڶ�Ӧ���±�����
	}

	for (int i = 0; i < 256; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			fprintf(fp2, "%d\n", i);
		}
	}

	free(arr);
	fclose(fp1);
	fclose(fp2);

	return 0;
}