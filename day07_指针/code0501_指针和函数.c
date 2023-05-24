//#include<stdio.h>
////7.5.1.函数形参改变实参的值
//void swap(int x, int y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("x = %d, y = %d\n", x, y);
//}
//
//void swap2(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main() {
//	int a = 3;
//	int b = 5;
//	swap(a, b);//值传递
//	printf("a = %d, b = %d\n", a, b);
//
//	int a2 = 3;
//	int b2 = 5;
//	swap2(&a2, &b2);//地址传递
//	printf("a2 = %d, b2 = %d\n", a2, b2);
//	return 0;
//}