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

	// ������ � ������ (�������� ���)
	static void add_h(ANIMAL* data);

	// ������ � ������
	virtual void add(ANIMAL* data) = 0;

	// �������� ������
	static void Show();

	// ������� ������
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

	void add(ANIMAL* data) override;
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

	void add(ANIMAL* data) override;
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

	void add(ANIMAL* data) override;
};