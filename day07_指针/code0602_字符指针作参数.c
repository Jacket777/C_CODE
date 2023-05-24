//#include<stdio.h>
////7.6.2.字符指针做函数参数
///*
//将src指向的字符串拼接到dest后面
//*/
//void mystrcat(char* dest, const char* src) {
//	int len01 = 0;
//	int len02 = 0;
//	while (dest[len01]) {
//		len01++;
//	}
//
//	printf("len01 = %d\n", len01);
//	while (src[len02]) {
//		len02++;
//	}
//
//	/*printf("len02 = %d\n", len02);*/
//	int i;
//	for (i = 0; i < len02; i++) {
//		dest[len01 + i] = src[i];
//		//printf("%c", dest[len01 + i]);
//	}
//}
//
//
//
////int my_strlen(char* ch) {
////	char* temp = ch;
////}
//
//
//
//int main() {
//	char dest[100] = "hello mike";
//	char src[] = "123456";
//	mystrcat(dest, src);
//	printf("dest = %s\n", dest);
//	return 0;
//}
//
//
