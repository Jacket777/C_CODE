#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//1. 读取一行
int readFile() {
	FILE *fp = fopen("F:/源文件.txt", "r");
	if (!fp) {
		return -1;}

	char* p = (char*)malloc(sizeof(char) * 100);//分配
	memset(p, 0, 100);
	fgets(p, 100, fp);
	printf("%s\n", p);

	memset(p, 0, 100);
	fgets(p, 100, fp);
	printf("%s\n", p);
	free(p);
	fclose(fp);
	return 0;
}


//2. 读取所有行
int readAllFile() {
	FILE* fp = fopen("F:/源文件.txt", "r");
	if (!fp) {
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);//分配

	//判断文件是否到结尾
	while (!feof(fp)){
		memset(p, 0, 100);
		fgets(p, 100, fp);
		printf("%s", p);
	}
	free(p);
	fclose(fp);
	return 0;

}



//3.写文件
int writeToFileByLine() {
	FILE* fp = fopen("F:/test.txt", "w");
	if (!fp) {
		return -1;
	}
	char ch[] = "hello\n test";
	fputs(ch, fp);
	fclose(fp);
	return 0;
}


//4.通过键盘输入文件
int writeToFileByKey() {
	FILE* fp = fopen("F:/test02.txt", "w");
	if (!fp) {
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 1024); //开辟空间
	while (1) {
		memset(p, 0, 1024);//重置命名空间
		//scanf("%s", p);
		scanf("%[^\n]", p);
		//吞噬回车\n
		getchar();
		//停止输入命令
		if (!strncmp(p, "comm=exit",9) ){
			break;
		}
		//追加\n
		strcat(p, "\n");
		fputs(p, fp);
	}
	free(p);
	fclose(fp); 
	return 0;
}


int main04() {
	//readFile();
	//readAllFile();
	//writeToFileByLine();
	writeToFileByKey();
	return 0;
}