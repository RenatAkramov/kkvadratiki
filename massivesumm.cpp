#include <stdio.h>
#include <math.h>
#include <TXLib.h>

int main()
{
    int i = 0, j = 0;

    const int line = 3;
    const int element = 4;

    int data[line][element] = {{1, 2, 3, 4},
                               {3, 4, 5, 6},
                               {5, 6, 7, 8}};
    int summ = 0;

    for ( i = 0; i < line; i++)
    {
        for ( j = 0; j < element; j++)
        {
            summ = summ + data[i][j];
        }
    }

    printf("%d",summ);

}
