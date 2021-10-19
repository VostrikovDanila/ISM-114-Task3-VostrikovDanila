/**
 * класс описывает прямугольник с двумя сторонами
 * Класс позволяет вычислять его площадь и периметр
 * Perimetr- периметр прямоугольника - 2*x+2*y
 * Area-площадь, x*y
 */
#pragma once
#include "Pair.hpp"
class Rectangle : protected Pair
{
public:
    Rectangle(float x = 1.0, float y = 1.0);
    float Perimeter();
    float Area();
};
