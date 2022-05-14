#include "Header.h"	

int main()
{
	setlocale(LC_ALL, "ukr");

	BIRDS a("�������", 1, "����");
	BIRDS a1("������", 10, "����-����");
	BIRDS a2("������", 2, "��������");
	MAMMALS b("����", 30, "ѳ��");
	UNGULATES c("���", 500, "���������", "����");

	List list1("---�����---");
	list1.push_back(&a);
	list1.push_back(&a1);
	list1.push_back(&a2);

	List list2("---������---");
	list2.push_back(&b);

	List list3("---������---");
	list3.push_back(&c);

	cout << "------------------------------------------------------------------------------------\n";
	cout << "�������� ������ �� ��������� ��������� []: " << endl << endl;

	list1[0]->Show();

	list2[0]->Show();

	list3[0]->Show();

	cout << "------------------------------------------------------------------------------------\n";
	cout << "�������� ������ �� ��������� ������ �ᒺ������ ������: " << endl << endl;
	ListOfList list("--- �� ������---");
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
	cout << "����� ������ ������ =		" << list1.GetSize() << '\n';
	cout << "����� ������ ������� =		" << list2.GetSize() << '\n';
	cout << "����� ������ �������� =	" << list3.GetSize() << '\n';
	cout << "����� ��� ������ =		" << list.GetSizeList() << '\n';

	int number;
	cout << "������ �������� ������� ������:\n";
	cin >> number;

	list1.ForEach(number); //�������� 
	
	return 0;
}