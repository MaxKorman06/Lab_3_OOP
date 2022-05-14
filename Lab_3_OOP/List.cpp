#include "Header.h"

List::List()
{
	name = "";
	size = 0;
	head = nullptr;
}

List::~List() 
{ 
	clear(); 
}

void List::clear()
{
	while (size)
	{
		pop_front();
	}
}

void List::pop_front()
{
	Node* tmp = head;

	head = head->pNext;
	delete tmp;
	size--;
}

//��������� ������ ��������� �������� � ������
void List::push_back(TObject* data)
{
	if (head == nullptr)
	{
		//���� ������ ������, ������ ����� �������
		head = new Node(data);
	}
	else
	{
		Node* current = this->head; //��������� ����� ���������� �������� ���������
		//��������� ����, � ����� ������ ������ ��� �������, � ����� �������� pNext ����� �� ����� ������ (nullptr)
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data);
	}

	size++;
}

void List::AddList(List* engines)
{
	if (head == nullptr)
	{
		head = new Node(engines);
	}
	else
	{
		Node* current = this->head;
		while (current->lNext != nullptr)
		{
			current = current->lNext;
		}
		current->lNext = new Node(engines);
	}
	sizelist++;
}

//��������� ��������� [] ��� ������� �� �������
TObject* List::operator[](const int index)
{
	int counter = 0; //�������� ��������
	Node* current = this->head;
	cout << name << endl;
	//��������� ����, � ����� ������ ��������� ��� ���� ��������, �� ����� ���������� ����� ���� ������
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

//��������� ��������� ��� ������� �������� � ������
void List::ForEach(int volume)
{
	cout << "\t\t�������� \n" << endl;

	Node* p = head;

	double weight = 0;

	for (size_t i = 0; i < volume; i++)
	{
		if (i == 0)weight += p->data->GetWeight();
		if (i == 1)weight += p->pNext->data->GetWeight();
		if (i == 2)weight += p->pNext->pNext->data->GetWeight();
		if (i == 3)weight += p->pNext->pNext->pNext->data->GetWeight();
		if (i == 4)weight += p->pNext->pNext->pNext->pNext->data->GetWeight();
		if (i == 5)weight += p->pNext->pNext->pNext->pNext->pNext->data->GetWeight();
		if (i == 5)weight += p->pNext->pNext->pNext->pNext->pNext->pNext->data->GetWeight();
		if (i == 6)weight += p->pNext->pNext->pNext->pNext->pNext->pNext->pNext->data->GetWeight();
		if (i == 7)weight += p->pNext->pNext->pNext->pNext->pNext->pNext->pNext->pNext->data->GetWeight();
	}

	cout << "�y����� ���� ������: " << weight << '\n';

	if (!bool(volume))
	{
		cout << "���� �������� ����\n" << endl;
	}
}