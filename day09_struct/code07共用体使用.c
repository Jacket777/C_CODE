#include<stdio.h>

union Test {
	unsigned char a;
	unsigned int b;
	unsigned short c;
};


int main07() {
	//���干�������
	union Test temp;

	//1.�������г�Ա���׵�ַ----���г�Ա���׵�ַ��һ����
	printf("���г�Ա���׵�ַ\n");
	printf("%p, %p, %p\n", &(temp.a), &(temp.b), &(temp.c));

	//2.���Թ������С---�������СΪ����Ա���͵Ĵ�С
	printf("�������СΪ\n");
	printf("%lu\n", sizeof(union Test));

	//3.��Ա��ֵ---һ����Ա��ֵ����Ӱ������ĳ�Ա
	temp.b = 0x44332211;
	printf("char: %x\n", temp.a);
	printf("short: %x\n", temp.c);

	temp.a = 0x00;
	printf("short: %x\n", temp.c);
	printf("int: %x\n", temp.b);

	return 0;


}