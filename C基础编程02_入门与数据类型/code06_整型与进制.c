//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void test01();
//
//int main() {
//		//�������� ��ʶ�� = ֵ
//		//�޷���  unsigned �з��� signed(����ʡ��)
//		signed int a = -10;
//		unsigned int b = 20;
//		printf("�޷������� b = %u\n", b);
//		printf("a = %d\n", a);
//		printf("========������=================\n");
//		//����
//		//������0-1 �˽���0-7 ʮ������0-9 10-15��a-f A-F��
//		int c = 10;
//		printf("16���ƣ�c = %x\n", c);
//		printf(" 8���ƣ�c = %o\n", c);
//	
//		printf("========�˽���ת��������=================\n");
//		//����˽������� ��0��ͷ
//		int d = 0123;
//		int e = 0x123;
//		
//		printf("10���ƣ�d = %d\n", d);
//		printf(" 8���ƣ�d = %o\n", d);
//		printf("16���ƣ�d = %x\n", d);
//	
//		printf("e = %d\n", e);
//		printf("e = %o\n", e);
//		printf("e = %x\n", e);
//		printf("------------>>>>>>>>-------------------\n");
//		test01();
//
//		return 0;
//	}
//
//void test01() {
//	int a = 123;	//�������a����10���Ʒ�ʽ��ֵΪ123
//	int b = 0567;	//�������b����8���Ʒ�ʽ��ֵΪ0567
//	int c = 0xabc;	//�������c����16���Ʒ�ʽ��ֵΪ0xabc
//	printf("a = %d\n", a);
//	printf("8���ƣ�b = %o\n", b);
//	printf("10���ƣ�b = %d\n", b);
//	printf("16���ƣ�c = %x\n", c);
//	printf("16���ƣ�c = %X\n", c);
//	printf("10���ƣ�c = %d\n", c);
//	unsigned int d = 0xffffffff; //�����޷���int����d����16���Ʒ�ʽ��ֵ
//	printf("�з��ŷ�ʽ��ӡ��d = %d\n", d);
//	printf("�޷��ŷ�ʽ��ӡ��d = %u\n", d);
//   }