#ifndef PLAKAT_H
#define PLAKAT_H
#include "building.hpp"

unsigned plakatowanie(unsigned);
void setArray(unsigned, Building[]);
unsigned findMin(unsigned, Building[]);
//maximum buildings having naigbours on the same level
unsigned maxInRow(unsigned, Building[]);

#endif
