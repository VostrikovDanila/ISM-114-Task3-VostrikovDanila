#include "Rectangle.hpp"
using namespace std;
Rectangle::Rectangle(int x, int y) : Pair(x, y)
{
    if (x <= 0 || y <= 0) throw std::invalid_argument("arguments must be greater zero\n");
}
int Rectangle::Perimeter()
{
    return 2 * (x + y);
}
int Rectangle::Area()
{
    return Prod();
}
