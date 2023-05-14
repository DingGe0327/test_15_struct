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
	int age[10];
	char sex[5];  //男 女  保密
};
int main()
{
	struct Peop p1 = { 0 };
	return 0;
}







