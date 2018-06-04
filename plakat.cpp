#include "plakat.hpp"
#include "building.hpp"
#include<iostream>

using namespace std;

unsigned plakatowanie(unsigned n){
    Building *street = new Building[n];
    setArray(n, street);
    int sum=0;

    
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
