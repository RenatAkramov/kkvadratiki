#include <stdio.h>
#include <math.h>
#include <TXLib.h>

int main()
{
    const int line = 3;
    const int element = 4;

    int data_1[line][element] = {{1, 2, 3, 4},
                                 {3, 4, 5, 6},
                                 {5, 6, 7, 8}};

    int data_2[line][element] = {{168, 283, 368, 874},
                                 {321, 454, 556, 236},
                                 {591, 662, 717, 854}};

    int data_end[line][element] = {{0, 0, 0, 0},
                                   {0, 0, 0, 0},
                                   {0, 0, 0, 0}};

    for (int i = 0; i < line; i++)
    {
       for (int j = 0; j < element; j++)
       {
           data_end[i][j] = data_1[i][j] + data_2[i][j];
       }
    }

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < element; j++)
        {
            printf("%d ",data_end[i][j]);
        }
        printf("\n");
        }

}
