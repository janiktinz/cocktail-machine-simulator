#include "Cocktail.h"
#include "Dispenser.h"
#include "Ingredient.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#pragma once

class CocktailMachine
{
	public:	
		virtual void makeCocktail(Cocktail*)=0;   
		virtual void makeCocktail(int)=0;

		CocktailMachine();
		virtual ~CocktailMachine();
		vector<Cocktail*> getCocktails() const;
		vector<Ingredient*> getIngredients() const;
		vector<Dispenser*> getDispensers() const;
		bool check_ingredients(string);
		bool check_cocktail(unsigned int);
		void check_input(unsigned int &);
		void add_cocktail();
		void edit_cocktail(unsigned int);
		void delete_cocktail(unsigned int);
	protected:
		vector<Dispenser*> dispensers;
		vector<Cocktail*> cocktails;
		vector<Ingredient*> all_ingredients;
	private:
};

