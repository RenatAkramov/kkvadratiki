#include <stdio.h>
#include <math.h>
#include <TXLib.h>

#include "obshi.h"

int SolveSquare(struct uravnenie tom, double* x_1, double* x_2)
{
    double d = 0;
    if (sravneniedvuh(tom.a, 0) == 1)
    {
        if (sravneniedvuh(tom.b, 0) == 1)
        {
            return -1;
        }
        else
        {
            *x_1 = -tom.c / tom.b;
            return 1;
        }
    }
    else
    {
        if (sravneniedvuh(tom.b, 0) == 1)
        {
            if (sravneniedvuh(tom.c, 0) == 1)
            {
                *x_1 = 0;
                return 1;
            }
            else
            {
                if (-tom.c/tom.a > 0)
                {
                    *x_1 = -sqrt(-tom.c/tom.a);
                    *x_2 = sqrt(-tom.c/tom.a);
                    return 2;
                }
                else
                {
                return 0;
                }
            }
        }

        else
        {
            d = tom.b * tom.b - 4 * tom.a * tom.c;
                if (d < 0)
                {
                    return 0;
                }
                if (sravneniedvuh(d, 0) == 1)
                {
                    *x_1 = -tom.b / (2 * tom.a);
                    return 1;
                }
                if ( d > 0)
                {
                    *x_1 = (-tom.b - sqrt(d))/ (2 * tom.a);
                    *x_2 = (-tom.b + sqrt(d))/ (2 * tom.a);
                    return 2;
                }
        }

    }
    return 0;
}

