#include <stdio.h>
#include <math.h>
#include <TXLib.h>

#include "obshi.h"

int start()
{
    int nachalo = 0, ending = 0;

    printf("Для решения уравнения нажмите 1 \nДля проведения тестов нажмите 2\n");

    scanf("%d", &nachalo);
    if (nachalo == 1)
    {
        ending  = startsolve();
        return ending;
    }
    if (nachalo == 2)
    {
        ending = startcheck();
        return ending;
    }
}

int startcheck()
{
    struct testiki Tests1 = {1, 1,4,-5,-5,1,2};
    struct testiki Tests2 = {2, 2,0,0,0,0,1};
    struct testiki Tests3 = {3, 0,0,0,0,0,-1};
    struct testiki Tests4 = {4,0,2,0,0,0,1};
    struct testiki Tests5 = {5,1,-5,6,2,3,2};
    struct testiki Tests6 = {6,3,1,2,0,0,0};
    struct testiki Tests7 = {7,-1,1,0,1,0,2};
    struct testiki Tests8 = {8,0,0,1,0,0,-1};
    struct testiki tests[8] = {Tests1, Tests2, Tests3, Tests4, Tests5, Tests6, Tests7, Tests8};

    int pravilnost = 0;

    pravilnost = checktest(tests);

    if (pravilnost == OKEY)
    {
        printf("Все тесты пройдены верно");
    }
    return 1;
}
/*!
* @brief Запускает решение уравнения
*/
int startsolve()
{
    printf("Введите коэфициенты\n");

    struct uravnenie tom = {0};

    double x_1 = 0, x_2 = 0;

    int proverka = 0;

    proverka = scanf("%lg %lg %lg", &tom.a, &tom.b, &tom.c);

    if (proverka != 3)
    {
        printf("ERROR");
        return 1;
    }

    int nRoots = SolveSquare (tom, &x_1, &x_2);

    switch (nRoots)
    {
        case ZERO_ROOTS:
            printf("No roots\n");
            break;

        case ONE_ROOTS:
            printf("x_1 = %lg\n", x_1);
            break;

        case TWO_ROOTS:
            printf("x_1 = %lg , x_2 = %lg", x_1, x_2);
            break;

        case INF_ROOTS:
            printf(" Any number");
            break;

        default:
            printf("main(): ERROR:nRoots = %d\n", nRoots);
            break;
            return 1;

    }
}

int checktest( const testiki* tests)
{
    int n = 0;

    for(int i = 0; i < 8; i++)
    {
        n = RunTests(tests[i]);
    }
    return n;
}

