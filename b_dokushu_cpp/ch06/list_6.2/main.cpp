//***************************************************
/** 21/4/14
 * 「演算子オーバーロードを使った Calc クラス」
 */
//***************************************************

#include <iostream>
#include <string>

class Calc
{
private:
    int value;

public:
    Calc(int value) : value{value} {};

    //演算子オーバーロード
    Calc operator+(const Calc &rhs) const; //加算
    Calc operator-(const Calc &rhs) const; //減算
    Calc operator*(const Calc &rhs) const; //乗算
    Calc operator/(const Calc &rhs) const; //除算

    void show() const;
};

Calc Calc::operator+(const Calc &rhs) const
{
    return Calc{value + rhs.value};
};
Calc Calc::operator-(const Calc &rhs) const
{
    return Calc{value - rhs.value};
};
Calc Calc::operator*(const Calc &rhs) const
{
    return Calc{value * rhs.value};
};
Calc Calc::operator/(const Calc &rhs) const
{
    return Calc{value / rhs.value};
};

void Calc::show() const
{
    std::cout << "Calc.value = " << value << std::endl;
}

int main(void)
{
    Calc x = 10;
    Calc y = 3;
    Calc z = 7;

    auto v = x - (y / y) + (x * z); // 10 - 1 + 70 = 79
    v.show();

    return 0;
}