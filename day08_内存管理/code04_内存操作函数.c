#include<stdio.h>
#include<string.h>



/*
void *memset(void *s, int c, size_t n);
���ܣ���s���ڴ������ǰn���ֽ��Բ���c����
������
	s����Ҫ�����ڴ�s���׵�ַ
	c�������ַ���c��Ȼ����Ϊint����������unsigned char , ��ΧΪ0~255
	n��ָ����Ҫ���õĴ�С
����ֵ��s���׵�ַ

*/

fun01_memset() {
	int a[10];
	memset(a, 98, sizeof(a));
	//memset(a, 97, sizeof(a));
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%c\n", a[i]);
	}

}


/*
void *memcpy(void *dest, const void *src, size_t n);
���ܣ�����src��ָ���ڴ����ݵ�ǰn���ֽڵ�dest��ֵ���ڴ��ַ�ϡ�
������
	dest��Ŀ���ڴ��׵�ַ
	src��Դ�ڴ��׵�ַ��ע�⣺dest��src��ָ���ڴ�ռ䲻���ص������ܻᵼ�³��򱨴�
	n����Ҫ�������ֽ���
����ֵ��dest���׵�ַ
* 
*/


fun02_memcpy() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10];
	memcpy(b, a, sizeof(a));
	for (int i = 0; i < 10; i++) {
		printf("%d, ", b[i]);
	}
	printf("\n");
}



/*
int memcmp(const void *s1, const void *s2, size_t n);
���ܣ��Ƚ�s1��s2��ָ���ڴ������ǰn���ֽ�
������
	s1���ڴ��׵�ַ1
	s2���ڴ��׵�ַ2
	n����Ƚϵ�ǰn���ֽ�
����ֵ��
	��ȣ�=0
	���ڣ�>0
	С�ڣ�<0
*/


fun03_memcmp() {
	int a[10] = { 20,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 10,2,3,4,5,6,7,8,9,10 };
	int flag = memcmp(a, b, sizeof(a));
	printf("flag = %d\n", flag);
}



int main04() {
	//fun01_memset();
	//fun02_memcpy();
	fun03_memcmp();
	return 0;

}



