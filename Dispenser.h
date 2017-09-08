#include "Ingredient.h"
using namespace std;

#pragma once
class Dispenser
{
	public:
		Dispenser();
		Dispenser(unsigned int, Ingredient*);
		~Dispenser();

		void setNumber(unsigned int number);
		unsigned int getNumber() const;
		void setIngredient(Ingredient *ingredient);
		Ingredient* getIngredient() const;

	private:
		unsigned int number;
		Ingredient *ingredient = NULL;
};

