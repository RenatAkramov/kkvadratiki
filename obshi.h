#ifndef __OBSHI_H__
#define __OBSHI_H__
enum Eroot
{
    INF_ROOTS  = -1,
    ONE_ROOTS  =  1,
    ZERO_ROOTS =  0,
    TWO_ROOTS  =  2,
    WRONG      =  1,
    OKEY       =  0
};


struct uravnenie
{
    double a;
    double b;
    double c;
};

struct testiki
{
    int nTest;
    double a;
    double b;
    double c;
    double x1Expected;
    double x2Expected;
    int nRootsExpected;
};


int RunTests(struct testiki test);

int SolveSquare(struct uravnenie ttt, double* x_1, double* x_2);

int sravneniedvuh(double a, double b);

/*!
*   @brief Функция старта, узнает хоет ли пользователь решить уравнение или запустить тесты
*/
int start();

/*!
* @brief Запускает тесты
*/
int startcheck();

/*!
* @brief Запускает решение уравнения
*/
int startsolve();



/*!
*    @brief Функция запускающая тесты
*    @param const testiki* tests Массив тестов

*/
int checktest( const testiki* tests);

#endif // __OBSHI_H__












