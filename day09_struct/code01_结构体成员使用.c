#include<stdio.h>
#include<string.h>

//�ṹ�����͵Ķ���
struct stu
{
	char name[50];
	int age;
};

int main01() {
	struct stu s1;

	//�������ͨ������ͨ��������������ṹ���Ա, s1Ϊ��ͨ����
	strcpy_s(s1.name, 50,"abc");
	//char stuName[] = { 'a','b','c' };
	//s1.name = stuName;
	s1.age = 18;
	printf("s1.name = %s, s1.age = %d\n", s1.name, s1.age);

	printf("------------------------------------\n");

	//�����ָ�������ͨ��->�����ṹ���Ա, &s1 Ϊ��ͨ����

	strcpy_s((&s1)->name, 50, "test");
	(&s1)->age = 22;
	printf("(&s1)->name = %s, (&s1)->age = %d\n", (&s1)->name, (&s1)->age);
	return 0;


}