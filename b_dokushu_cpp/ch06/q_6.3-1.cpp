//***************************************************
/** 21/4/14
 * 練習問題6.3
 * ①：練習問題6.2で作成した Float クラスに、正負を扱う + - 演算子のオーバーロードを追加
 */
//***************************************************

#include <iostream>
#include <string>

class Float
{
private:
    float value = 0.0f;

public:
    Float(){};
    Float(float f) : value{f} {};

    Float operator+() const;
    Float operator-() const;

    void show() const;
};

Float Float::operator+() const
{
    // [+] は符号反転を行わないので、自分自身への参照を返せばよい
    return *this;
}

Float Float::operator-() const
{
    // [-] は符号反転させる
    return Float{-value};
}

void Float::show() const
{
    std::cout << "Float.value = " << this->value << std::endl;
};

int main(void)
{
    Float plus_x = 10;
    Float minus_y = 10;

    auto result1 = +plus_x;
    auto result2 = -minus_y;

    result1.show();
    result2.show();

    return 0;
}