#pragma once
#pragma once

#include <iostream>
#include <string>

using namespace std;

const int L_name = 30;

class ANIMAL
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

	// Додати в список (головний код)
	static void add_h(ANIMAL* data);

	// Додати в список
	virtual void add(ANIMAL* data) = 0;

	// Показати список
	static void Show();

	// Очстити список
	static void Clear();

	class Node
	{
	public:
		ANIMAL* data;
		Node* pNext;

		Node(ANIMAL* data, Node* pNext);
	};

protected:
	string name;
	double weight;
	static Node* head;
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

	void add(ANIMAL* data) override;
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

	void add(ANIMAL* data) override;
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

	void add(ANIMAL* data) override;
};