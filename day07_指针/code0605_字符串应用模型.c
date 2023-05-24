//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
////strstr中的while和do-while模型
////利用strstr标准库函数找出一个字符串中substr出现的个数
///*
//strstr(p, "abcd"))查找字符串，返回第一次出现的地址
//*/
////int fun01() {
////	char* p = "1234abcd4567abcdefgabcdqqabcd";
////	int n = 0;//记录出现次数
////	while ((p = strstr(p, "abcd")) != NULL) {
////		//能进来，肯定有匹配的子串
////		//重新设置起点位置
////		p = p + strlen("abcd"); //地址往下走
////		n++;
////
////		//如果到结束符
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
////求非空字符串元素的个数------有问题
////void fun03(char* p, int* n) {
////	if (p == NULL || n == NULL) {
////		return -1;
////	}
////
////	int begin = 0;
////	int end = strlen(p) - 1;
////
////	//从左边开始，
////	//如果当前字符为空，而且没有结束
////	while (p[begin] == ' ' && p[begin] != 0) {
////		begin++;//位置从右移动
////	}
////	//从右边开始往左移动
////	while (p[end] == ' ' && end > 0) {
////		end--;
////	}
////	printf("end = %d", end);
////	if (end == 0) {
////		return -2;
////	}
////
////	//非空元素个数
////	*n = end - begin + 1;
////	printf("非空字符串个数: %d", *n);
////}
//
//
////字符串反转---数组
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
////字符串反转---指针
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
////回文字符串abcba  abccba
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