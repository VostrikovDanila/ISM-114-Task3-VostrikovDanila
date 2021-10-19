/**
 * класс описывает пару целых чисел
 * Класс позволяет настраивать значения чисел и получать их произведение
 * Set-меняет x,y
 * get-возвращает значения x,y
 */
#pragma  once

#include <stdio.h>
class Pair
{
protected:
    int x, y;
public:
    Pair(int x=0, int y=0);
    void SetX(int x);
    void SetY(int y);
    int GetX();
    int GetY();
    int Prod();
};
