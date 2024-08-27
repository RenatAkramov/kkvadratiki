#include <stdio.h>
#include <math.h>
#include <TXLib.h>

int main()
{
    int data[3][2] =
    {{1,2},
     {3,4},
     {5,6}};

    int number_line = sizeof(data) / sizeof(data[0]);
    int number_of_elements = sizeof(data[0]) / sizeof(data[0][0]);

    for (int i = 0; i < number_line; i++)
    {
       for (int j = 0; j < number_of_elements; j++)
        {
            printf("%d",data[i][j]);
        }
        printf("\n");
    }
}
