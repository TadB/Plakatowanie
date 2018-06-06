#include "plakat.hpp"
#include "building.hpp"
#include <iostream>

using namespace std;

unsigned plakatowanie(unsigned n){
	Building *street = new Building[n];
	setArray(n, street);
	unsigned sum=0;

	unsigned inRow=0;
	Building *neighboring = new Building[inRow];


	return sum;
}
void setArray(unsigned n, Building array[]){
	for(unsigned i = 0; i < n; ++i){
		unsigned w, h;
		cin>>w;
		cin>>h;
		array[i].setWidth(w);
		array[i].setHeight(h);
	}
}

unsigned maxInRow(unsigned n, Building array[]){
	unsigned i = 0;
	//set to first unposter building
	while(array[i].getDestroyed() == true) ++i;
	unsigned inRow = 1;
	//check next cell - look for destroyed buildings
	++i;
	while(array[i].getDestroyed() == false){
		++i;
		++inRow;
	}
	return inRow;
}
unsigned findMin(unsigned n, Building array[]){
	unsigned minimum = array[0].getLevel();
	for(unsigned i = 1; i < n; ++i){
		if (array[i].getLevel() < minimum){
			minimum = array[i].getLevel();
		}
	}
	return minimum;
}
