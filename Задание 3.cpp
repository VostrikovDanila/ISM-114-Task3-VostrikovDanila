#include <iostream>
#include <stdexcept>

class Pair
{
protected:
    int x, y;
public:
    Pair(int x = 0, int y = 0) : x(x), y(y) {}
    void Set(int x, int y)
    {
        x = x;
        y = y;
        return;
    }
    int Prod()
    {
        return x * y;
    }
};

class Rectangle : protected Pair
{
public:
    Rectangle(int x = 1, int y = 1) : Pair(x, y)
    {
        if (x <= 0 || y <= 0) throw std::invalid_argument("arguments must be greater zero\n");
    }
    int Perimeter()
    {
        return 2 * (x + y);
    }
    int Area()
    {
        return Prod();
    }
};

int main()
{
    Rectangle r(1, 3);
    std::cout << r.Perimeter();
    return 0;
}