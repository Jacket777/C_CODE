#include<stdio.h>
#include<string.h>

struct stu {
	char name[50];
	int age;
};

int main04() {
	struct stu s1;
	strcpy_s(s1.name,50, "abc");
	s1.age = 18;
	printf("s1.name = %s, s1.age = %d\n", s1.name, s1.age);

   //��ͬ���͵������ṹ������������໥��ֵ
   //��s1��Ա������ֵ������s2��Ա�������ڴ�
   //s1��s2ֻ�ǳ�Ա������ֵһ�����ѣ����ǻ���û�й�ϵ����������
	struct stu s2 = s1;
	//memcpy(&s2, &s1, sizeof(s1));
	printf("s2.name = %s, s2.age = %d\n", s2.name, s2.age);
	return 0;
}