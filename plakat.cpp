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
	unsigned firstAvailable = 0;
	// bool unfinished = false;
	while(1){ //TODO: dopisz lepszy warunek petli
		//znajdz pierwszy 'od lewej' budynek nie pokryty plakatami
		while(street[firstAvailable].getDestroyed() == true){
			++firstAvailable;
			if (firstAvailable > n)
				return sum;
		}
		inRow = maxInRow(n, firstAvailable, neighboring); //ile budynkow ze soba sasiaduje
		unsigned minimum = findMin(inRow, neighboring);
		sum += stickPoster(inRow, minimum, neighboring);
	}
}
int stickPoster(unsigned n, unsigned minimum, Building array[]){
	//TODO: Co jesli do tej funkcji trafi tablica w ktorej nie ma wolnych budynkow?
	for(unsigned i; i < n; ++i){
		array[i].decrLevel(minimum);
		if (array[i].getLevel() == 0)
			array[i].setDestroyed(true);
	}
	return 1;
}
void setArray(unsigned n, Building array[]){
	for(unsigned i = 0; i < n; ++i){
		unsigned w, h;
		cin>>w>>h;
		cin>>h;
		array[i].setWidth(w);
		array[i].setHeight(h);
		array[i].setLevel(h);
	}
}

unsigned maxInRow(unsigned n, unsigned firstAvailable, Building array[]){
	unsigned inRow = 1;
	while(array[firstAvailable].getDestroyed() == false){
		++firstAvailable;
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
