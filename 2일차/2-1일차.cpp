#if 0
#include <stdio.h> // include <- import
#include <stdlib.h>

int main(void) { // 
	printf("Be happy %d!", 2023); // %
	system("pause");

	return 0;
}
#endif
#if 0
#include <stdio.h>
//c�� ��������
int main(void) {
	printf("%d\n", 3);//������ int <= intteger
	printf("%lf\n", 3.14);//�Ǽ��� float double<=double print
	printf("%s\n", "3.14");//���ڿ��� const char*<=constant character pointer
	printf("%c\n", '3');//���ڰ� const char<= constant character(�������)
	printf("%c\n", 'a');//
}
#endif
#if 0
#include <stdio.h>
//������ �ϴ��� : ��Ģ����,module(%)
int main(void) {
	printf("%d\n", 3 + 4);
	printf("%d\n", 3 - 4);
	printf("%d\n", 3 * 4);
	printf("%d\n", 3 / 4); //��
	printf("%lf\n", 3.0/ 4); //������������
	printf("%d\n", 3 % 4); //������
	printf("%lf\n", pow(3, 4)); //�ŵ�����
}
#endif
#if 0
#include <stdio.h>
//������ �ϴ��� : �񱳿���
int main(void) {
	printf("%d\n", 3 > 4); // 0
	printf("%d\n", 3 >= 4); // 0
	printf("%d\n", 3 < 4); // 1
	printf("%d\n", 3 <= 4); //1
	printf("%d\n", 3 == 4); //0
	printf("%d\n", 3 != 4); //1
}
#endif
#if 0
#include <stdio.h>
//������ �ϴ��� : ������
int main(void) {
	printf("%d\n", 3 > 4 && 5 > 6); // and
	printf("%d\n", 3 < 4 && 5 < 6);
	printf("%d\n", 3 > 4 | l 5 > 6); // or
	printf("%d\n", 3 < 4 ll 5 > 6);
	printf("%d\n", !(3 < 4)); // not
	printf("%d\n", !(3 > 4));
}
#endif
#if 0
#include <stdio.h>
//���� �׸�: ���� ,�������:�Ҵ�
int main(void) {
	int a = 3;
	int b = 4;
	printf("%d\n", a + b);
	int c = a + b;
	printf("%d\n", c);
}
#endif
#if 0
//�Ǵ��ϱ� 1:if
#include <stdio.h>
int main <void>{
	int age = 23; // int ��������
	if (age >= 19) {
		printf("adult\n");
	}
}
#endif
#if 0
//�Ǵ��ϱ� 2:if-else
#include <stdio.h>
int main <void>{
	int age = 18; // int ��������
	if (age >= 19) {
		printf("adult\n");
	}
	else {
		printf("minor\n")
	}
}
#endif
#if 0
//�Ǵ��ϱ� 3:if-else if-else
#include <stdio.h>
int main <void>{
	int birth_year = 2004;
	//if (1981 <= birth_year && birth_year <= 1996){
	if ((birth_year >= 1981)) && (birth_year <= 1996)) {
		printf("M genration\n");
	}
	else if (1997 <= birth_year && birth_year <= 2012) {
		printf("Z generation\n");
	}
	else {
		pruntf("???\n");
	}
}
#endif
#if 0
//���� �ݺ��ϱ� : while
#include <stdio.h>
int main <void>{
	int c_level + 0;
	while (c_level < 1000000) {
		printf("study c");
		//c_level += 1;
		c_level++;//C++=>C++++=>C#
		//c_level = c_level + 1
		printf("% d\n", c_level);
	}
}
#endif
#if 0
//while-if-break
#include <stdio.h>
int main <void>{
	int c_level = 0;
	while (1) {
		printf("study c");
		c_level++;
		if (c_level >= 10) {
			break;
		}
	}
}
#endif
#if 0
//���� ��� ���� ��� �ָӴ�:�迭
#include <stdio.h>
int main(void) {
	for (int i = 0, i < 100; i++) {
		int cnt = 0;
		int a = 0, b = 0, c = 0;
		while (cnt < 100000000) {
			cnt++;
			a = b = cnt;
			c = a + b;
		}
		printf("%d\n", c);
	}
}
#endif
#if 0
//���� ��� ���� ��� �ָӴ�:�迭
#include <stdio.h>
int main(void) {
	//eggs[]={"egg0","egg1","egg2","egg3"};
	int cnt = 0;
	int eggs[4] = { 0, 1, 2, 3, };
	printf("%d\n", eggs[0]);
	printf("%d\n", eggs[1]);
	printf("%d\n", eggs[2]);
	printf("%d\n", eggs[3]);
	eggs[2] = 7;
	printf("%d\n", eggs[2]);
}
#endif
#if 0
//�迭 ó���ϱ� : for
#include <stdio.h>
int main(void)[
	int eggs[4] = { 0,1,2,3 };
	/*for (int i = 0; i <4; i+=1){
	 printf("%d\n",eggs[i]);
	}*/
	int i = 0;
	for (; i < 4; i +=1){
		printf("%d\n",eggs[i])
	}
]
#endif
#if 0
//�迭 ó���ϱ� : for
#include <stdio.h>
int main(void)[
	const char* eggs[4] = { "egg0","egg1","egg2","egg3" };
	for (int i = 0; i < 4; i++){
		printf("%s\n", eggs[i]);
	}
}
#endif
#if 0
//���� ���� : �Լ�
#include <stdio.h>
int add(int a, int b){
	return a + b;
}
int main(void) {
	int a = 1, b = 2;
	int c = add(a, b);
	printf("%d\n", c);
}
#endif
#if 0
//���� ���� : �Լ�
#include <stdio.h>
int is_adult(int age) {
	return age >= 19;//True=>1,False=>0
}
int main(void) {
	int my_age = 17;
	printf("%d\n", is_adult(my_age));
}
//int,double,char
#endif
#if 0
//�������� : strut(����ü)
#include(stdio.h)
struct Student {
	char name[20];
	int age;
};
int main(void) {
	struct Student s2 = { "Brad",21 };
	struct Student s3 = { "Brad",24 };
	printf("%s\n", s2.name);
	printf("%d\n", s2.age);
	printf("%s\n", s3.name);
	printf("%d\n", s3.age);
}
#endif
#if 0
//�������� : strut(����ü)
#include(stdio.h)
struct Student {
	char name[20];
	int age;
};
char* getName(struct Student intst) {
	return inst.name;
}
int getAge(struct Student inst) {
	return inst.age;
}
int main(void) {
	struct Student s2 = { "Brad",21 };
	struct Student s2 = { "Jane",24 };
	printf("%s\n", s2.name);
	printf("%d\n", s2.age);
	printf("%s\n", s3.name);
	printf("%d\n", s2.age);


	printf("%s\n", getName(s3));
	printf("%d\n", getAge(s3));
	setAge(&s3, getAge(s3) + 1);
	pruntf("%d\n", getAge(s3));
}
#endif


