#include "Header.h"	

int main()
{
	setlocale(LC_ALL, "ukr");

	BIRDS a("�������", 1, "����");
	MAMMALS b("����", 50, "ѳ��");
	UNGULATES c("���", 500, "���������", "����");

	a.add(&a);
	b.add(&b);
	c.add(&c);

	//ANIMAL::Clear();
	ANIMAL::Show();
	ANIMAL::Clear();

	return 0;
}