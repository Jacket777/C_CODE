#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//定义四则运算枚举
enum opt
{
	add, sub, mlt, dive
};


int main05()
{
	srand((size_t)time(NULL)); //产生随机种子 

	FILE* fp = fopen("D:/四则运算.txt", "w");
	if (!fp) {
		return -1;
	}
		

	int a, b;
	char c;//+ - * /
	char* p = (char*)malloc(sizeof(char) * 20);// 分配内存
	for (int i = 0; i < 100; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;

		switch (rand() % 4)
		{
		case add: c = '+'; break;
		case sub: c = '-'; break;
		case mlt: c = '*'; break;
		case dive: c = '/'; break;
		}
		memset(p, 0, 20);
		sprintf(p, "%d%c%d=\n", a, c, b);
		fputs(p, fp);
	}
	free(p);
	fclose(fp);
	//p = NULL;
	//fp = NULL;

	return EXIT_SUCCESS;
}