//#include<stdio.h>
//
//extern void pointerSize();
//extern void nullPointer();
//extern void voidPointer();
//extern void constPointer();
//extern void changeValue();
//
//int main() {
//
//	//printf("ָ��Ĵ�С\n");
//	//pointerSize();
//	//nullPointer();
//	//voidPointer();
//
//	constPointer();
//}
//
//
////ͨ��ָ������ı���ֵ
//void changeValue() {
//	int a = 3;
//	int b = 11;
//	int* p = &a;
//	*p = 100;
//	printf(" a = %d, *p = %d\n", a, *p);
//
//	p = &b;
//	*p = 22;
//	printf(" b = %d, *p = %d\n", b, *p);
//
//}
//
//
//
//
////ָ���С
//void pointerSize() {
//	int* p1;
//	int** p2;
//	char* p3;
//	char** p4;
//	printf("(sizeof(p1) = %d\n", sizeof(p1));
//	printf("(sizeof(p2) = %d\n", sizeof(p2));
//	printf("(sizeof(p3) = %d\n", sizeof(p3));
//	printf("(sizeof(p4) = %d\n", sizeof(p4));
//	printf("(sizeof(double *) = %d\n", sizeof(double *));
//}
//
//
////��ָ����Ұָ��
//void nullPointer() {
//	int a = 100;
//	int* p;
//	//p = a; //��a��ֵ��ֵ��ָ�����p��pΪҰָ�룬 ok�����������⣬��û������,�ᱨ��
//	//p = 0x12345678; //��ָ�����p��ֵ��pΪҰָ�룬 ok�����������⣬��û������,�ᱨ��
//	//*p = 100; ����δ��ʼ��
//	int* p1 = NULL;
//}
//
//
////����ָ��void *  
//void voidPointer() {
//	//void* ָ�����ָ������������ڴ�ռ�
//	void* p = NULL; 
//	int a = 10;
//	p = (void*)&a; //ָ�����ʱ�����ת��Ϊvoid *
//	*((int*)p) = 11;  //ʹ��ָ�����ָ����ڴ�ʱ��ת��Ϊint *
//	printf("a = %d\n", a);
//}
//
//
////const���ε�ָ�����
//void constPointer() {
//	int a = 100;
//	int b = 200;
//
//	printf(" a = %d, b = %d\n", a, b);
//	printf(" a address = %p, b address = %p\n", &a, &b);
//
//	//ָ������ָ��
//	//����*��ָ��ָ���ڴ��������޸ģ�ָ��ָ����Ա�   ???
//	const int* p1 = &a;
//	a = 200;
//	//*p = 111; ����//����ͨ������ʽ�޸�
//	p1 = &b;
//
//
//	//ָ�볣��
//	//����p2��ָ��ָ���ܱ䣬ָ��ָ����ڴ�����޸�
//	int* const p2 = &a;
//	//p2 = &b; ����
//	*p2 = 222;
//
//	printf(" a = %d, b = %d\n", a, b);
//	printf(" *p1 = %d, *p2 = %d\n", *p1, *p2);
//	printf(" *p1 = %p, *p2 = %p\n", p1, p2);
//
//
//}
//
