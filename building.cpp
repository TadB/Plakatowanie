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
void Building::setLevel(unsigned level){
    this -> level = level;
}
void Building::decrLevel(unsigned level){
	this -> level -= level;
}
unsigned Building::getLevel(void){
    return this -> level;
}
void Building::setDestroyed(bool destroyed){
    this -> destroyed = destroyed;
}
unsigned Building::getDestroyed(void){
    return this -> destroyed;
}
