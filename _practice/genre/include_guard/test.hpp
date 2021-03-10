//「ifndef」「define」 を利用したインクルードガード

#ifndef INC_CALC_HPP
#define INC_CALC_HPP

// template <typename... Args>
// void func(Args... args) {}

class Calc
{
    //クラス内メンバ関数
public:
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
};

#endif //INC_CALC_HPP