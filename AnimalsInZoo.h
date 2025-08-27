#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo();
		AnimalsInZoo(Animal& animals);

		void display();
	
	private: 
		int numAnimals;
		Animal animal;
};
