#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//1. �ļ���ȡ�����ַ���ȡ
int  getFileByChar() {
	FILE* fp = fopen("F:\\test.txt", "r");  //�ڲ���ʱ��Ҫ�ı�ָ��
	if (!fp) {
		printf("�ļ���ʧ��\n");
		return -1;
	}

	char ch;
	//�ļ����ַ���ȡ  �ļ�Ĭ�Ͻ�βΪ-1 
	ch = fgetc(fp);
	printf("%c\n", ch);
	//�����޸��ļ�ָ��  �ļ��ڶ�ȡʱ��������Զ������ƶ�
	//fp++;//err
	ch = fgetc(fp);
	printf("%c\n", ch);
	fclose(fp);
	return 0;
}


//2. �ļ���ȡ�����ȫ����ȡ
int getFileContent() {
	FILE* fp = fopen("F:\\test.txt", "r");//�ڲ���ʱ��Ҫ�ı�ָ��
	if (!fp) {
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	fclose(fp);
}


//3.�ļ���д��
int writeToFile() {
	//��д�ķ�ʽ���ļ� ����ļ�����ᴴ��һ�����ļ�  ����ļ����� ���������
	FILE* fp = fopen("F:\\test02.txt", "w");
	if (!fp) {
		return -1;
	}

	char ch = 'a';
	fputc(ch, fp);
	return 0;
}


//4.ģ����±�д��
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