#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main01() {
	//1.�ļ���
	FILE* fp = fopen("F:\\test.txt", "r");  //�ڲ���ʱ��Ҫ�ı�ָ��
	//1. �Ҳ����ļ�
	//2. �ļ�Ȩ�޲���
	//3. ������ļ��������� 65535
	if (fp == NULL) {
		printf("���ļ�ʧ��\n");
		return -1;
	}else {
		printf("���ļ��ɹ��� %p\n", fp);
	}
	
	//2.�ļ��ر�
	int result = fclose(fp);
	if (result == 0) {
		printf("�ر��ļ��ɹ�\n");
	}
	return 0;

}