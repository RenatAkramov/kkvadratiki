#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <TXLib.h>

int start(int* rows);

int main()
{
    int rows = 0;
    start(&rows);
}

int start(int* rows)
{
    printf("¬ведите количество р€дов\n");
    scanf("%d", rows);

    int* addr = (int*) calloc((size_t)rows, sizeof(int));
    addr[0] = 0;

    int* data = (int*) calloc(1, sizeof(int));

    for (int i = 0; i < *rows; i++)
    {
        int size_line = 0;

        printf("—колько чисел в р€ду\n");
        scanf("%d", &size_line);

        addr[i + 1] = size_line + addr[i];
        assert( data != NULL);

        for (int j = 0; j < size_line; j ++)
        {
            printf("¬ведите числа\n");

            int input_number = 0;

            scanf("%d", &input_number);

            data[j + addr[i]] = input_number;
        }

    }

    for (int k = 1; k < *rows + 1; k++)
    {
        for (int l = 0; l < addr[k] - addr[k - 1]; l++)
        {
            printf("%d ",data[addr[k - 1] + l]);
        }
        printf("\n");
    }
}
