#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main() {
	float p = 3.567;
	int w = 2;
	//��ʽת��
	double sum = p * w;
	//(��������) ǿ������ת������� ������������
	int sum2 = (int)(p * w);
	printf("%f\n", sum);
	printf("%d\n", sum2);
	return EXIT_SUCCESS;
}