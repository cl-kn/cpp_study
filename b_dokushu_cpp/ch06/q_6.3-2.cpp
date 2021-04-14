//***************************************************
/** 21/4/14
 * 練習問題6.3
 * ②：前置と後置のインクリメント演算子をオーバーロードして、呼び分けられることを確認
 */
//***************************************************

#include <iostream>
#include <string>

class Integer
{
private:
    int value;

public:
    Integer(){};
    Integer(int i) : value{i} {};

    Integer &operator++();
    Integer operator++(int);

    void show() const;
};

Integer &Integer::operator++()
{
    ++value;
    return *this;
}

Integer Integer::operator++(int)
{
    auto tmp = *this;
    ++*this;
    return tmp;
}

void Integer::show() const
{
    std::cout << "Integer.value = " << this->value << std::endl;
};

int main(void)
{
    Integer x = 1;
    Integer y = 1;

    auto result_x = ++x; //前置インクリ
    auto result_y = y++; //後置インクリ

    result_x.show(); //2
    result_y.show(); //1

    return 0;
}