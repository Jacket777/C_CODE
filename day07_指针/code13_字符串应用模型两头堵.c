#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//
//
//
//
////�ַ�����ת
//int inverse1301(char* p) {
//	if (p == NULL) {
//		return -1;
//	}
//	char* str = p;
//	int begin = 0;
//	int end = strlen(str) - 1;
//	char temp;
//
//	while (begin < end) {
//		temp = str[begin];
//		str[begin] = str[end];
//		str[end] = temp;
//		begin++;
//		end--;
//	}
//	return 0;
//}
//
//
//
//int main13(void) {
//	char* p = "  abcdedfg   ";
//	int ret = 0;
//	int n = 0;
//	ret = fun(p, &n);
//	if (ret != 0) {
//		return ret;
//	}
//	printf("�ǿ��ַ�������: %d\n", n);
//	printf("========================\n");
//	//char *str = "abcdefg"; //�ļ������������ݲ������޸�
//	char str01[] = "abcdefg";
//	int ret01 = inverse(str01);
//	if (ret01 != 0) {
//		return ret01;
//	}
//	printf("str======%s\n", str01);
//	return 0;
//}
//
//
