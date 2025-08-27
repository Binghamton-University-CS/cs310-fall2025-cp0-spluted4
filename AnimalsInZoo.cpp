#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"

using namespace std;

AnimalsInZoo::AnimalsInZoo (Animal& animal) {
	this->animal = animal;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo () {
	numAnimals = 0;
}

void AnimalsInZoo::display() {
	cout << "Number of animals: " << numAnimals << endl;
	animal.display();
}
