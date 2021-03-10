#include "pragma_once.hpp"

int addInt(int x, int y)
{
    return x + y;
}
int minusInt(int x, int y)
{
    return x - y;
}
int kakeInt(int x, int y)
{
    return x * y;
}
int waruInt(int x, int y)
{
    if (x == 0 || y == 0)
    {
        return 0;
    }

    return x / y;
}