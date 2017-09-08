#include <string>
using namespace std;

#pragma once
class Ingredient
{
	public:
		Ingredient(string);
		Ingredient(string, unsigned int);
		Ingredient();
		~Ingredient();

		void setName(string);
		string getName() const;

		void setAmount(unsigned int);
		unsigned int getAmount() const;
	private:
		string name;
		unsigned int amount;   
};


