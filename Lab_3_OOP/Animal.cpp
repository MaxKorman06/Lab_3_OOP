#include "Header.h"

ANIMAL::ANIMAL()
{
	name = "NONE";
	weight = 000;
}

ANIMAL::ANIMAL(string value_name, double value_weight)
{
	Set(value_name, value_weight);
}

ANIMAL::ANIMAL(const ANIMAL& other)
{
	this->name = other.name;

	this->weight = other.weight;
}

ANIMAL::~ANIMAL()
{
}

void ANIMAL::SetName(string name)
{
	this->name = name;
}

void ANIMAL::SetWeight(double weight)
{
	this->weight = weight;
}

void ANIMAL::Set(string value_name, double value_weight)
{
	SetName(value_name);
	SetWeight(value_weight);
}

string ANIMAL::GetName()
{
	return string(name);
}

double ANIMAL::GetWeight()
{
	return weight;
}

string ANIMAL::GetWings()
{
	return string("NONE");
}

string ANIMAL::GetHooves()
{
	return string("NONE");
}

string ANIMAL::GetWool()
{
	return string("NONE");
}

void ANIMAL::Show()
{
	cout << "Імя: " << this->GetName() << '\n';
	cout << "Вага: " << this->GetWeight() << '\n';
	cout << "Шерсть: " << this->GetWool() << '\n';
	cout << "Копта: " << this->GetHooves() << '\n';
	cout << "Крила: " << this->GetWings() << '\n' << '\n';
}
