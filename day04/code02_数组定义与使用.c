#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main02() {
	//1.����Ķ���
	//��������
	//�������� ����  = ֵ
	//���鶨��
	//�������� ������[Ԫ�ظ���]={ֵ1��ֵ2��ֵ3}
	int arr[10] = { 9,4,2,1,8,5,3,6,10,7 };
	//�����±�  ������[�±�]
    //�����±��Ǵ�0��ʼ�ĵ�����Ԫ�ظ���-1
    //printf("%d\n", arr[0]);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	printf("==============================\n");
	arr[3] = arr[5];
	arr[2] = arr[3] * 2;

	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	printf("==============================\n");
	printf("==========��ַ====================\n");
	printf("arr[0]��ַ�� %p\n", &arr[0]);
	printf("arr[2]��ַ�� %p\n", &arr[1]);
	printf("arr[2]��ַ�� %p\n", &arr[2]);
	printf("arr[3]��ַ�� %p\n", &arr[3]);
	printf("arr[4]��ַ�� %p\n", &arr[4]);

	printf("�������ڴ���ռ�Ĵ�С��%d\n", sizeof(arr));
	printf("����Ԫ�ش�С��       %d\n", sizeof(arr[0]));
	printf("����Ԫ�ظ�����       %d\n", sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\t", arr[i]);
	}





}