//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//
//void test01();
//
//int main() {
//	int a = 10;
//	short b = 20;
//	long c = 301;
//	long long d = 3011;
//	//short<=int<=long< longlong
//
//	printf("%d\n",   a);
//	//ռλ�� ��ʾ���һ������������
//	printf("%hd\n",  b);
//	//ռλ�� ��ʾ���һ������������
//	printf("%ld\n",  c);
//	//ռλ�� ��ʾ���һ��������������
//	printf("%lld\n", d);
//
//
//	//sizeof ���������������ڴ���ռ���ֽڣ�BYTE����С
//    //1B=8bit
//    //sizeof(��������) sizeof(������) sizeof ������
//	unsigned int len = sizeof(short);
//
//	printf("%d\n", len);
//	printf("����: %d\n",     sizeof(a));
//	printf("������: %d\n",   sizeof(b));
//	printf("������: %d\n",   sizeof(c));
//	printf("��������: %d\n", sizeof(d));
//
//	printf("------------------------------\n");
//	test01();
//	return 0;
//
//}
//
//void test01() {
//	short a = 10;
//	int b = 10;
//	long c = 10l; //����10L
//	long long d = 10ll; //����10LL
//
//	printf("sizeof(a) = %u\n", sizeof(a));
//	printf("sizeof(b) = %u\n", sizeof(b));
//	printf("sizeof(c) = %u\n", sizeof(c));
//	printf("sizeof(d) = %u\n", sizeof(d));
//
//	printf("short a = %hd\n", a);
//	printf("int b = %d\n", b);
//	printf("long c = %ld\n", c);
//	printf("long long d = %lld\n", d);
//
//	unsigned short a2 = 20u;
//	unsigned int b2 = 20u;
//	unsigned long c2 = 20ul;
//	unsigned long long d2 = 20ull;
//
//	printf("unsigned short a = %hu\n", a2);
//	printf("unsigned int b = %u\n", b2);
//	printf("unsigned long c = %lu\n", c2);
//	printf("unsigned long long d = %llu\n", d2);
//}