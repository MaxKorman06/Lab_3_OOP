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

	// �������� �����, ����
	ANIMAL(string, double);

	ANIMAL(const ANIMAL&);

	~ANIMAL();

	// �������� �����
	virtual string GetName();

	// �������� ����
	virtual double GetWeight();

	// �������� �����
	virtual string GetWings();

	// �������� ������
	virtual string GetHooves();

	// �������� ������
	virtual string GetWool();

	// �������� �����
	void SetName(string);

	// �������� ����
	void SetWeight(double);

	// �������� �����, ����
	void Set(string, double);

	//���� ����������
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

	// �����o��� ��� ���� ������
	MAMMALS(string, double, string);

	MAMMALS(const MAMMALS&);

	~MAMMALS();

	// �������� ������
	void SetWool(string);

	// �����o��� ��� ���� ������
	void Set(string, double, string);

	// �������� ������
	string GetWool();
};

class UNGULATES : public MAMMALS
{
protected:
	string hooves;

public:
	UNGULATES();

	// �����o��� ��� ���� ������ ������
	UNGULATES(string, double, string, string);

	~UNGULATES();

	// �������� ������ 
	void SetHooves(string);

	// �����o��� ��� ���� ������ ������
	void Set(string, double, string, string);

	// �������� ������
	string GetHooves();
};

class BIRDS : public ANIMAL
{
protected:
	string winds;

public:
	BIRDS();

	// �����o��� ��� ���� �����
	BIRDS(string, double, string);

	~BIRDS();

	// �������� �����
	void SetWinds(string);

	// �����o��� ��� ���� �����
	void Set(string, double, string);

	// �������� �����
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
	
	//�������� ��������
	void pop_front();

	void clear();

	//��������� �������� � ����� ������
	void push_back(TObject* data); 

	//�������� [] ��� ������� �� �������
	TObject* operator[](const int index); 

	//��������� ��� ��������� �� �����
	typedef void (*PF)(TObject*);

	//��������
	void ForEach(int volume); 

	//����������� ������� �������� � ������
	int GetSize()
	{ 
		return size; 
	};

	int GetSizeList() 
	{ 
		return sizelist; 
	}

	//��������� ������ � ������
	void AddList(List* engines);

	// ��������� �����
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

//������ ������
class ListOfList : public List
{
public:
	ListOfList() : List() { };
	ListOfList(string name) : List(name) { };
	virtual ~ListOfList() { };
};