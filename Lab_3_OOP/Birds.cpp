#include "Header.h"

BIRDS::BIRDS()
{
	winds = "NONE";
}

BIRDS::BIRDS(string value_name, double value_weight, string value_winds)
{
	Set(value_name, value_weight, value_winds);
}

BIRDS::~BIRDS()
{
}

void BIRDS::SetWinds(string winds)
{
	this->winds = winds;
}

void BIRDS::Set(string value_name, double value_weight, string value_winds)
{
	SetName(value_name);
	SetWeight(value_weight);
	SetWinds(value_winds);
}

string BIRDS::GetWings()
{
	return string(winds);
}