#include<stdio.h>

fun01() {
	int i = 0;
	i++;
	printf("i = %d\n", i);
}

fun02() {
	static int a;
	a++;
	printf("a = %d\n", a);
}

int main02(void) {
	fun01();
	fun01();
	fun02();
	fun02();
	fun02();
	return 0;

}
