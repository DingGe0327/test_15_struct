#define  _CRT_SECURE_NO_WARNINGS 1
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
#include <stdio.h>
//struct Peop
//{
//	char name[20];
//	int age[10];
//	char sex[5];  //�� Ů  ����
//}p1,p2;           //p1,p2��ʹ��struct Peop�ṹ�����ʹ���������������ȫ�ֽṹ��������������ã�
struct Peop
{
	char name[20];
	int age;
	char sex[5];  //�� Ů  ����
};             //û��ռ�ڴ�
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
	struct Peop p1 = { "����", 12, "��"};  //�ṹ������Ĵ���
	struct St s = { { "����", 12, "��"}, 100, 3.14 };
	printf("%s %d %s\n", p1.name, p1.age, p1.sex);
	printf("%s %d %s %d %lf\n", s.p.name, s.p.age, s.p.sex, s.num, s.f);

	print1(&p1);
	return 0;
}	







