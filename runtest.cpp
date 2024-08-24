#include <stdio.h>
#include <math.h>
#include <TXLib.h>


#include "obshi.h"

int RunTests(struct testiki test)
{
    struct uravnenie tomt = {};
    tomt.a = test.a;
    tomt.b = test.b;
    tomt.c = test.c;

    double x1t = 0, x2t = 0;

    int nRootsT = SolveSquare(tomt, &x1t, &x2t);

    if (sravneniedvuh(nRootsT, test.nRootsExpected) == 0 || sravneniedvuh(x1t, test.x1Expected) == 0 || sravneniedvuh(x2t, test.x2Expected) == 0)
    {
        printf("ERROR TEST %d, a = %lg, b = %lg, c = %lg, x1= %lg, x2 =%lg\n"
               "Expected x1 = %lg, x2 = %lg\n",
                test.nTest, test.a, test.b, test.c, x1t, x2t, test.x1Expected, test.x2Expected);
        return WRONG;
    }
    else
    {
        return OKEY;
    }
}
