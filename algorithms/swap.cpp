#include "swap.h"

#ifndef SWAP_CPP
#define SWAP_CPP

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

#endif