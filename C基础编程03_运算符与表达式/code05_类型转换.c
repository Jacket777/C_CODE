#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main() {
	float p = 3.567;
	int w = 2;
	//隐式转换
	double sum = p * w;
	//(数据类型) 强制类型转换运算符 不会四舍五入
	int sum2 = (int)(p * w);
	printf("%f\n", sum);
	printf("%d\n", sum2);
	return EXIT_SUCCESS;
}