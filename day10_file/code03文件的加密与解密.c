#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int encryptfile() {
	FILE* fp1 = fopen("F:\\Դ�ļ�.txt", "r");
	FILE* fp2 = fopen("F:\\���ܺ��ļ�.txt", "w");
	if (!fp1 || !fp2) {
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp1)) != EOF) {
		ch++;
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}


int deencryptfile() {
	FILE* fp1 = fopen("F:\\���ܺ��ļ�.txt", "r");
	FILE* fp2 = fopen("F:\\���ܺ��ļ�.txt", "w");
	if (!fp1 || !fp2) {
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp1) )!= EOF) {
		ch--;
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}



int main03() {
	//encryptfile();
	deencryptfile();
	return 0;
}