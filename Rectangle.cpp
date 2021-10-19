#include "Rectangle.hpp"
#include <stdexcept>
using namespace std;
Rectangle::Rectangle(float x, float y) : Pair((int)(x), (int)(y))//по заданию Rectangle-наследник Pair, а Pair-пара ЦЕЛЫХ ЧИСЕЛ
{
    if (x <= 0 || y <= 0) throw std::invalid_argument("arguments must be greater zero\n");
}
float Rectangle::Perimeter()
{
    return 2 * (x + y);
}
float Rectangle::Area()
{
    return Prod();
}
