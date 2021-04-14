//***************************************************
/** 21/4/14
 * 「演算子オーバーロードを使わない整数(Calc)クラス」
*/
//***************************************************

#include <iostream>
#include <string>

class Calc
{
private:
    int value;

public:
    Calc(int value) : value(value){};

    Calc add(const Calc &other) const; //加算
    Calc sub(const Calc &other) const; //減算
    Calc mul(const Calc &other) const; //乗算
    Calc div(const Calc &other) const; //除算

    void show() const;
};

Calc Calc::add(const Calc &other) const
{
    return Calc{value + other.value};
}

Calc Calc::sub(const Calc &other) const
{
    return Calc{value - other.value};
}

Calc Calc::mul(const Calc &other) const
{
    return Calc{value * other.value};
}

Calc Calc::div(const Calc &other) const
{
    if (value == 0)
    {
        return false;
    }

    return Calc{value / other.value};
}

void Calc::show() const
{
    std::cout << "Calc.value = " << value << std::endl;
}

int main(void)
{
    Calc x = 1;
    Calc y = 2;
    Calc z = 3;

    auto calk1 = x.add(2);
    calk1.show(); //3

    auto calk2 = x.sub(y.mul(z));
    calk2.show(); //-5

    auto calk3 = y.mul(z);
    calk3.show(); //6

    auto v = x.sub(y.div(y)).add(z.mul(x)); //0 + 3 = 4
    v.show();

    return 0;
}