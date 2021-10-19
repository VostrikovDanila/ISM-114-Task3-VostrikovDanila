
#include "Pair.hpp"
Pair::Pair(int x, int y) : x(x), y(y) {}
void Pair::SetX(int x){this->x=x;}
void Pair::SetY(int y){this->y=y;}
int Pair::GetX(){return x;}
int Pair::GetY(){return y;}
int Pair::Prod()
{
    return x * y;
}
