#include <stdio.h>
#include <math.h>
#include <TXLib.h>

#include "obshi.h"

int sravneniedvuh(double a, double b)
{
    const double smal = 0.000000001;
    if (fabsl( a - b) < smal)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
