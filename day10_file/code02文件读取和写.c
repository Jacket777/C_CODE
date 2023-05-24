#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//1. 文件读取，按字符读取
int  getFileByChar() {
	FILE* fp = fopen("F:\\test.txt", "r");  //在操作时不要改变指针
	if (!fp) {
		printf("文件打开失败\n");
		return -1;
	}

	char ch;
	//文件的字符读取  文件默认结尾为-1 
	ch = fgetc(fp);
	printf("%c\n", ch);
	//不能修改文件指针  文件在读取时光标流会自动向下移动
	//fp++;//err
	ch = fgetc(fp);
	printf("%c\n", ch);
	fclose(fp);
	return 0;
}


//2. 文件读取，逐个全部读取
int getFileContent() {
	FILE* fp = fopen("F:\\test.txt", "r");//在操作时不要改变指针
	if (!fp) {
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	fclose(fp);
}


//3.文件的写入
int writeToFile() {
	//以写的方式打开文件 如果文件不存会创建一个新文件  如果文件存在 会清空内容
	FILE* fp = fopen("F:\\test02.txt", "w");
	if (!fp) {
		return -1;
	}

	char ch = 'a';
	fputc(ch, fp);
	return 0;
}


//4.模拟记事本写入
int notepade() {
	FILE* fp = fopen("F:\\a.c", "w");
	if (!fp) {
		return -1;
	}

	char ch;
	while (1) {
		scanf("%c", &ch);
		if (ch == '@') {
			break;
		}
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}




int main02() {
	//getFileByChar();
	getFileContent();
	//writeToFile();
	//notepade();
	return 0;
}