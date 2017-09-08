#include "CocktailMachine.h"
#include "Cocktail.h"
#include <vector>
#include <string>
#include <unistd.h>
using namespace std;

#pragma once
class CocktailSimulator : public CocktailMachine
{
	public:
		void makeCocktail(Cocktail*);   
		void makeCocktail(int);

	private:
};

