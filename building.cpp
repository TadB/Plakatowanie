#include "building.hpp"

Building::Building(void):destroyed(false){
    }

void Building::setWidth(unsigned width){
    this -> width = width;
}
unsigned Building::getWidth(void){
    return this -> width;
}
void Building::setHeight(unsigned height){
    this -> height = height;
}
unsigned Building::getHeight(void){
    return this -> height;
}
void Building::setBLevel(unsigned bLevel){
    this -> bLevel = bLevel;
}
unsigned Building::getBLevel(void){
    return this -> bLevel;
}
void Building::setDestroyed(unsigned destroyed){
    this -> destroyed = destroyed;
}
unsigned Building::getDestroyed(void){
    return this -> destroyed;
}
