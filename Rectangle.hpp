/**
 * класс описывает прямугольник с двумя сторонами
 * Класс позволяет вычислять его площадь и периметр
 */
#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "Pair.hpp"
#include <stdexcept>
#include <stdio.h>
class Rectangle : protected Pair
{
public:
    Rectangle(int x = 1, int y = 1);
    int Perimeter();
    int Area();
};

#endif 
