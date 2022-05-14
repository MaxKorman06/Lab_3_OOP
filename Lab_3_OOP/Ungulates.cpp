#include "Header.h"

UNGULATES::UNGULATES()
{
	hooves = "NONE";
}

UNGULATES::UNGULATES(string value_name, double value_weight, string value_wool, string value_hooves)
{
	Set(value_name, value_weight, value_wool, value_hooves);
}

UNGULATES::~UNGULATES()
{
}

void UNGULATES::SetHooves(string hooves)
{
	this->hooves = hooves;
}

void UNGULATES::Set(string value_name, double value_weight, string value_wool, string value_hooves)
{
	SetName(value_name);
	SetWeight(value_weight);
	SetWool(value_wool);
	SetHooves(value_hooves);
}

string UNGULATES::GetHooves()
{
	return string(hooves);
}