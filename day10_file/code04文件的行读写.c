#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//1. ��ȡһ��
int readFile() {
	FILE *fp = fopen("F:/Դ�ļ�.txt", "r");
	if (!fp) {
		return -1;}

	char* p = (char*)malloc(sizeof(char) * 100);//����
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


//2. ��ȡ������
int readAllFile() {
	FILE* fp = fopen("F:/Դ�ļ�.txt", "r");
	if (!fp) {
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);//����

	//�ж��ļ��Ƿ񵽽�β
	while (!feof(fp)){
		memset(p, 0, 100);
		fgets(p, 100, fp);
		printf("%s", p);
	}
	free(p);
	fclose(fp);
	return 0;

}



//3.д�ļ�
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


//4.ͨ�����������ļ�
int writeToFileByKey() {
	FILE* fp = fopen("F:/test02.txt", "w");
	if (!fp) {
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 1024); //���ٿռ�
	while (1) {
		memset(p, 0, 1024);//���������ռ�
		//scanf("%s", p);
		scanf("%[^\n]", p);
		//���ɻس�\n
		getchar();
		//ֹͣ��������
		if (!strncmp(p, "comm=exit",9) ){
			break;
		}
		//׷��\n
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