#include "Header.h"	

int main()
{
	setlocale(LC_ALL, "ukr");

	BIRDS a("Соловей", 1, "Чорні");
	BIRDS a1("Лелека", 10, "Біло-чорні");
	BIRDS a2("Яструб", 2, "Коричневі");
	MAMMALS b("Вовк", 30, "Сіра");
	UNGULATES c("Бик", 500, "Коричнева", "Парні");

	List list1("---Птахи---");
	list1.push_back(&a);
	list1.push_back(&a1);
	list1.push_back(&a2);

	List list2("---Ссавці---");
	list2.push_back(&b);

	List list3("---Копитні---");
	list3.push_back(&c);

	cout << "------------------------------------------------------------------------------------\n";
	cout << "Перегляд списку за допомогою оператора []: " << endl << endl;

	list1[0]->Show();

	list2[0]->Show();

	list3[0]->Show();

	cout << "------------------------------------------------------------------------------------\n";
	cout << "Перегляд списку за допомогою методу об’єднання списків: " << endl << endl;
	ListOfList list("--- Всі списки---");
	list.AddList(&list1);
	list.AddList(&list2);
	list.AddList(&list3);

	for (int i = 0; i < list1.GetSize(); i++)
	{
		list1[i]->Show();
	}
	for (int i = 0; i < list2.GetSize(); i++)
	{
		list2[i]->Show();
	}
	for (int i = 0; i < list3.GetSize(); i++)
	{
		list3[i]->Show();
	}
	cout << "------------------------------------------------------------------------------------\n";
	cout << "Розмір списку Птахів =		" << list1.GetSize() << '\n';
	cout << "Розмір списку Ссавців =		" << list2.GetSize() << '\n';
	cout << "Розмір списку Копитних =	" << list3.GetSize() << '\n';
	cout << "Розмір усіх списків =		" << list.GetSizeList() << '\n';

	int number;
	cout << "Введіть значення кількості тварин:\n";
	cin >> number;

	list1.ForEach(number); //ітератор 
	
	return 0;
}