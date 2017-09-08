#include "Ingredient.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#pragma once
class Cocktail
{
	public:
		Cocktail();
		~Cocktail();
		Cocktail(string name, vector<Ingredient> ingredients);

		void print(); 
		//void add_ingredients(Ingredient name);

		void setName(string name);
		string getName() const;
		void setIngredients(vector<Ingredient> ingredients);
		vector<Ingredient> getIngredients() const;

	private:
		string name;
		vector<Ingredient> ingredients;
	
};


