//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
////strstr�е�while��do-whileģ��
////����strstr��׼�⺯���ҳ�һ���ַ�����substr���ֵĸ���
///*
//strstr(p, "abcd"))�����ַ��������ص�һ�γ��ֵĵ�ַ
//*/
////int fun01() {
////	char* p = "1234abcd4567abcdefgabcdqqabcd";
////	int n = 0;//��¼���ִ���
////	while ((p = strstr(p, "abcd")) != NULL) {
////		//�ܽ������϶���ƥ����Ӵ�
////		//�����������λ��
////		p = p + strlen("abcd"); //��ַ������
////		n++;
////
////		//�����������
////		if (*p == 0) {
////			break;
////		}
////	}
////	return n;
////}
//
//
////
////int fun02() {
////	char* p = "1234abcd4567abcdefgabcdqqabcd";
////	int n = 0;
////	do {
////		p = strstr(p, "abcd");
////		if (p != NULL) {
////			n++;
////			p = p + strlen("abcd");
////		}
////		else {
////			break;
////		}
////
////	} while (*p != 0);
////	return n;
////}
//
////��ǿ��ַ���Ԫ�صĸ���------������
////void fun03(char* p, int* n) {
////	if (p == NULL || n == NULL) {
////		return -1;
////	}
////
////	int begin = 0;
////	int end = strlen(p) - 1;
////
////	//����߿�ʼ��
////	//�����ǰ�ַ�Ϊ�գ�����û�н���
////	while (p[begin] == ' ' && p[begin] != 0) {
////		begin++;//λ�ô����ƶ�
////	}
////	//���ұ߿�ʼ�����ƶ�
////	while (p[end] == ' ' && end > 0) {
////		end--;
////	}
////	printf("end = %d", end);
////	if (end == 0) {
////		return -2;
////	}
////
////	//�ǿ�Ԫ�ظ���
////	*n = end - begin + 1;
////	printf("�ǿ��ַ�������: %d", *n);
////}
//
//
////�ַ�����ת---����
//void fun04(char *ch) {
//	int i = 0;
//	int j = strlen(ch) - 1;
//	while (i < j) {
//		char temp = ch[i];
//		ch[i] = ch[j];
//		ch[j] = temp;
//		i++;
//		j--;
//	}
//}
//
////�ַ�����ת---ָ��
//void fun05(char* ch) {
//	char* ftemp = ch;
//	char* btemp = ch + strlen(ch) - 1;
//	/*printf("%c\n", *btemp);*/
//	while (ftemp < btemp) {
//		char temp = *ftemp;
//		*ftemp = *btemp;
//		*btemp = temp;
//		ftemp++;
//		btemp--;
//	}
//
//	return;
//
//}
//
////�����ַ���abcba  abccba
//int sym(char* ch) {
//	char* ftemp = ch;
//	char* btemp = ch + strlen(ch) - 1;
//	/*printf("%c\n", *btemp);*/
//	while (ftemp < btemp) {
//		if (*ftemp != *btemp) {
//			return 1;
//		}
//		printf("--------------\n");
//		ftemp++;
//		btemp--;
//	}
//	return 0;
//}
//
//
//
//
//int main(void) {
//	/*int n = fun01();
//	printf("n = %d\n", n);*/
//	//int n2 = fun02();
//	//printf("n2 = %d\n", n2);
//
//	//char* p = "  abcdedfg   ";
//	//int* n = 10;
//	//fun03(p, n);
//
//	//char ch[] = "hello word";
//	//fun05(ch);
//	//printf("%s\n", ch);
//
//	char ch[] = "abccba";
//	int value = sym(ch);
//	if (!value) {
//		printf("same \n");
//	}else {
//		printf("different \n");
//	}
//
//	return 0;  
//}