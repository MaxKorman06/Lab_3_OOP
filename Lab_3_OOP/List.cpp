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

//реалізація методу додавання елементів в список
void List::push_back(TObject* data)
{
	if (head == nullptr)
	{
		//якщо список пустий, додаємо новий елемент
		head = new Node(data);
	}
	else
	{
		Node* current = this->head; //тимчасовій змінній присвоюємо значення заголовку
		//створюємо цикл, у якому будемо шукати той елемент, в якому вказівник pNext вказує на кінець списку (nullptr)
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

//реалізація оператору [] для доступу по індексу
TObject* List::operator[](const int index)
{
	int counter = 0; //лічильник елементів
	Node* current = this->head;
	cout << name << endl;
	//створюємо цикл, у якому будемо повертати дані того елементу, до якого звернемось через його індекс
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

//реалізація ітератора для кожного елементу в списку
void List::ForEach(int volume)
{
	cout << "\t\tІтератор \n" << endl;

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

	cout << "Сyмарна вага тварин: " << weight << '\n';

	if (!bool(volume))
	{
		cout << "Немає значкння ваги\n" << endl;
	}
}