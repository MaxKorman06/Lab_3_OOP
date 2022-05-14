#include "Header.h"

MAMMALS::MAMMALS()
{
	wool = "NONE";
}

MAMMALS::MAMMALS(string value_name, double value_weight, string value_wool)
{
	Set(value_name, value_weight, value_wool);
}

MAMMALS::MAMMALS(const MAMMALS& other)
{
	this->wool = other.wool;
}

MAMMALS::~MAMMALS()
{
}

void MAMMALS::SetWool(string wool)
{
	this->wool = wool;
}

void MAMMALS::Set(string value_name, double value_weight, string value_wool)
{
	SetName(value_name);
	SetWeight(value_weight);
	SetWool(value_wool);
}

string MAMMALS::GetWool()
{
	return string(wool);
}
