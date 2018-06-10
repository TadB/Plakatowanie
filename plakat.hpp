#ifndef PLAKAT_HPP
#define PLAKAT_HPP
#include "building.hpp"

unsigned startPoster(unsigned);
void setArray(unsigned, Building[]);
//funkcja znajdujaca minimalna wysokosc
unsigned findMin(unsigned, Building[]);
// funkcja szukajaca sasiadujacych budynkow
unsigned maxInRow(unsigned, unsigned, Building[]);
//funkcja nakleja plakat, zwaraca 1 jesli sie udalo
int stickPoster(unsigned, unsigned, Building[]);

#endif
