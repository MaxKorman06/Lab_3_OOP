#include "Header.h"	

int main()
{
	setlocale(LC_ALL, "ukr");

	BIRDS a("Соловей", 1, "Чорні");
	MAMMALS b("Вовк", 50, "Сіра");
	UNGULATES c("Бик", 500, "Коричнева", "Парні");

	a.add(&a);
	b.add(&b);
	c.add(&c);

	//ANIMAL::Clear();
	ANIMAL::Show();
	ANIMAL::Clear();

	return 0;
}