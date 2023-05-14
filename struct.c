#define  _CRT_SECURE_NO_WARNINGS 1
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
#include <stdio.h>
//struct Peop
//{
//	char name[20];
//	int age[10];
//	char sex[5];  //男 女  保密
//}p1,p2;           //p1,p2是使用struct Peop结构体类型创建的两个变量（全局结构体变量，建议少用）
struct Peop
{
	char name[20];
	int age;
	char sex[5];  //男 女  保密
};             //没有占内存
struct St
{
	struct Peop p;
	int num;
	float f;
};
void print1(struct Peop* p1)
{
	printf(" %s %d %s\n", p1->name, p1->age, p1->sex);
}
int main()
{
	struct Peop p1 = { "张三", 12, "男"};  //结构体变量的创建
	struct St s = { { "张三", 12, "男"}, 100, 3.14 };
	printf("%s %d %s\n", p1.name, p1.age, p1.sex);
	printf("%s %d %s %d %lf\n", s.p.name, s.p.age, s.p.sex, s.num, s.f);

	print1(&p1);
	return 0;
}	







