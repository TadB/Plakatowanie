#ifndef PLAKAT_H
#define PLAKAT_H
#include "building.hpp"

unsigned plakatowanie(unsigned);
void setArray(unsigned, Building[]);
//funkcja znajdujaca minimalna wysokosc
unsigned findMin(unsigned, Building[]);
// funkcja szukajaca sasiadujacych budynkow
unsigned maxInRow(unsigned, unsigned, Building[]);
//funkcja nakleja plakat, zwaraca 1 jesli sie udalo
int stickPoster(unsigned, unsigned, Building[]);

#endif
