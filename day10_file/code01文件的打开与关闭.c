#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main01() {
	//1.文件打开
	FILE* fp = fopen("F:\\test.txt", "r");  //在操作时不要改变指针
	//1. 找不到文件
	//2. 文件权限不足
	//3. 程序打开文件超出上限 65535
	if (fp == NULL) {
		printf("打开文件失败\n");
		return -1;
	}else {
		printf("打开文件成功： %p\n", fp);
	}
	
	//2.文件关闭
	int result = fclose(fp);
	if (result == 0) {
		printf("关闭文件成功\n");
	}
	return 0;

}