
#include "Pair.hpp"
Pair::Pair(int x, int y) : x(x), y(y) {}
void Pair::Set(int x, int y)
{
    x = x;
    y = y;
    return;
}
int Pair::Prod()
{
    return x * y;
}
