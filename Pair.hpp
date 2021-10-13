/**
 * класс описывает пару целых чисел
 * Класс позволяет настраивать значения чисел и получать их произведение 
 */
#ifndef Pair_hpp
#define Pair_hpp

#include <stdio.h>
class Pair
{
protected:
    int x, y;
public:
    Pair(int x = 0, int y = 0);
    void Set(int x, int y);
    int Prod();
};

#endif
