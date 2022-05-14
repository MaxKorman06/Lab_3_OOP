#pragma once
#pragma once

#include <iostream>
#include <string>

using namespace std;

const int L_name = 30;

class TObject
{
protected:
	double weight;
public:
	virtual void Show() = 0;
	virtual double GetWeight() = 0;
};

class ANIMAL : public TObject
{
public:
	ANIMAL();

	// Присвоїти назву, вагу
	ANIMAL(string, double);

	ANIMAL(const ANIMAL&);

	~ANIMAL();

	// Отримати назву
	virtual string GetName();

	// Отримати вагу
	virtual double GetWeight();

	// Отримати крила
	virtual string GetWings();

	// Отримати копита
	virtual string GetHooves();

	// Отримати шерсть
	virtual string GetWool();

	// Присвоїти назву
	void SetName(string);

	// Присвіхти вагу
	void SetWeight(double);

	// Присвоїти назву, вагу
	void Set(string, double);

	//вивід інформації
	virtual void Show();

protected:
	string name;
};


class MAMMALS : public ANIMAL
{
protected:
	string wool;

public:
	MAMMALS();

	// Присвoїти імя вагу шерсть
	MAMMALS(string, double, string);

	MAMMALS(const MAMMALS&);

	~MAMMALS();

	// Присвоїти шерсть
	void SetWool(string);

	// Присвoїти імя вагу шерсть
	void Set(string, double, string);

	// Отримати шерсть
	string GetWool();
};

class UNGULATES : public MAMMALS
{
protected:
	string hooves;

public:
	UNGULATES();

	// Присвoїти імя вагу шерсть копита
	UNGULATES(string, double, string, string);

	~UNGULATES();

	// Присвоїти копита 
	void SetHooves(string);

	// Присвoїти імя вагу шерсть копита
	void Set(string, double, string, string);

	// Отримати копита
	string GetHooves();
};

class BIRDS : public ANIMAL
{
protected:
	string winds;

public:
	BIRDS();

	// Присвoїти імя вагу крила
	BIRDS(string, double, string);

	~BIRDS();

	// Присвоїти крила
	void SetWinds(string);

	// Присвoїти імя вагу крила
	void Set(string, double, string);

	// Отримати крила
	string GetWings();
};

class List
{
protected:
	string name;
public:
	List();

	List(string name) : name(name) 
	{ 
		head = nullptr; 
	};

	~List();
	
	//очищення спочатку
	void pop_front();

	void clear();

	//додавання елементу в кінець списку
	void push_back(TObject* data); 

	//оператор [] для доступу по індексу
	TObject* operator[](const int index); 

	//визначимо тип вказівника на метод
	typedef void (*PF)(TObject*);

	//ітератор
	void ForEach(int volume); 

	//знаходження кількості елементів в списку
	int GetSize()
	{ 
		return size; 
	};

	int GetSizeList() 
	{ 
		return sizelist; 
	}

	//додавання списків в список
	void AddList(List* engines);

	// створюємо вузол
	class Node
	{
	public:
		Node* pNext;
		TObject* data;

		TObject* operator[](const int index);

		Node(TObject* data = nullptr, Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}

		Node* lNext;
		List* engines;
		Node(List* engines, Node* lNext = nullptr)
		{
			this->engines = engines;
			this->lNext = lNext;
		}

	};
	int size;
	int sizelist;
	Node* head;
};

//список списків
class ListOfList : public List
{
public:
	ListOfList() : List() { };
	ListOfList(string name) : List(name) { };
	virtual ~ListOfList() { };
};