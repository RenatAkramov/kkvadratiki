#include <stdio.h>
#include <math.h>
#include <TXLib.h>

//#define ytytyty valye
//#ifndef ytytyty

//int main()
//{
//    int data[3][2] =
//    {{1,2},
//     {3,4},
//     {5,6}};
//
//    int number_line = sizeof(data) / sizeof(data[0]);
//    int number_of_elements = sizeof(data[0]) / sizeof(data[0][0]);
//
//    for (int i = 0; i < number_line; i++)
//    {
//       for (int j = 0; j < number_of_elements; j++)
//        {
//            printf("%d",data[i][j]);
//        }
//        printf("\n");
//    }
//}
//#else
int main()
{
    const int size = 6;
    int i = 0, a_progres = 0, controler = 0;
    int data[size] ={0,0,0,0,0,0};
    for (i = 0; i < size; i++)
    {
        data[i] = i + 1;
        //printf("%d\n",data[i]);
    }
    while (controler + a_progres < size)
    {
        for (i = controler; i < controler + a_progres;i++)
        {
            printf("%d",data[i]);
        }
        printf("\n");
        controler = a_progres;
        //printf("%d, %d\n",controler, a_progres);
        i = i - 1;
        a_progres = a_progres + 1;
    }

}
//#ending
