//#include<stdio.h>
//#include<string.h>
//extern void arrName();
//extern void pointerArr();
//extern void pointerAdd();
//extern void pointerAdd01();
//extern void pointerSub01();
//extern void pointerSub02();
//extern void pointerArray();
//
////�������---����ͨ��
//
//int main() {
//	//arrName();
//	//pointerArr();
//	/*pointerAdd01();*/
//	//pointerSub02();
//	pointerArray();
//}
//
////7.3.1
////�����������������Ԫ�ص�ַ��������һ��������
//void arrName() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("a = %p\n", a);
//	printf("&a[0] = %p\n", &a[0]);
//	//a = 10 ������ֻ�ǳ����������޸�
//}
//
////7.3.2
////ָ���������
//void pointerArr() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int n = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < n; i++) {
//		//printf("%d, ", a[i]);
//		printf("%d\t", *(a + i));
//	}
//	printf("\n");
//	int* p = a; //����һ��ָ�뱣��a�ĵ�ַ
//	for (i = 0; i < n; i++) {
//		p[i] = 2 * i;
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%d\t", *(p + i));
//	}
//	printf("\n");
//}
//
////7.3.3.1
////ָ�����--1
//void pointerAdd01() {
//	int a=2;
//	int* p = &a;
//	printf("p��ֵ: %d\t p�ĵ�ַ: %p\n", *p, p);
//	p += 2; //��ַ�����ƶ���λ  �ƶ���2��int ֵ�������
//	printf("p��ֵ: %d\t p�ĵ�ַ: %p\n", *p, p);
//
//	printf("=======================================\n");
//	char b = 'a';
//	char* p1 = &b;
//	printf("p1��ֵ�� %c\t p1�ĵ�ַ�� %p\n", *p1, p1);
//	p1 += 2;//�ƶ���2��char
//	printf("p1��ֵ�� %c\t p1�ĵ�ַ�� %p\n", *p1, p1);
//	/*printf("%d\n", *p1);*/
//	return 0;
//}
//
//
////7.3.3.2
////ָ�����--2
//void pointerAdd() {
//	//ͨ���ı�ָ��ָ���������Ԫ��
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = sizeof(a) / sizeof(a[0]);
//	int* p = a;
//	for (int i = 0; i < n; i++) {
//		printf("%d, ", *p);
//		p++;//ָ��++�൱��ָ����ƶ�һ����ַ
//	}
//	printf("\n");
//}
//
//
//
//
//
//
////7.3.3.3
////ָ�����
//void pointerSub01() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int n = sizeof(a) / sizeof(a[0]);
//	int* p = a + n -1;
//	for (i = 0; i < n; i++) {
//		printf("ֵ��%d\t,��ַ��%p\n", *p, p);
//		p--;
//	}
//}
//
//
//
////7.3.3.4
////ָ�����������
//void pointerSub02() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = sizeof(a) / sizeof(a[0]);
//	printf("==========�ص�=================\n");
//	int* p1 = &a[1];//��1��Ԫ�ص�ַ
//	int* p2 = &a[2];//��2��Ԫ�ص�ַ
//	printf("p1 = %p, p2 = %p\n", p1, p2);
//	int n1 = p2 - p1; //���1����ַ  n1 = 1
//	int n2 = (int)p2 - (int)p1;//���1��4  intΪ4���ֽ�  n2 = 4
//	printf("n1 = %d, n2 = %d\n", n1, n2);
//
//}
//
////7.3.4 ָ������
////ָ�����飬�������飬�����ÿ��Ԫ�ض���ָ�����͡�
//void pointerArray() {
//	int* p[3];
//	int a = 1, b = 2, c = 3, i = 0;
//	p[0] = &a, p[1] = &b, p[2] = &c;
//	for (i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
//		printf("%d. ", *(p[i]));
//	}
//	printf("\n");
//}