#include "Dispenser.h"
using namespace std;

void Dispenser::setNumber(unsigned int number) 
{
	this->number = number;
}

unsigned int Dispenser::getNumber() const 
{
	return this->number;
}

void Dispenser::setIngredient(Ingredient *ingredient)
{
	this->ingredient = ingredient;
}

Ingredient* Dispenser::getIngredient() const
{
	return this->ingredient;
}

Dispenser::Dispenser()
{
}

Dispenser::Dispenser(unsigned int number, Ingredient *ingredient)
{
	this->number = number;
	this->ingredient = ingredient;
}

Dispenser::~Dispenser()
{
}
