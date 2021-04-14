//***************************************************
/** 21/4/14
 * 練習問題6.2
 * １：浮動小数点を扱うFloatクラスを定義し、Float同士で加減算できるように演算子オーバーロード
 * ２：１．で作成したFloatクラスに乗算と除算の演算子オーバーロードを追加
 */
//***************************************************

#include <iostream>
#include <string>

class Float
{
private:
    // float value;
    float value = 0.0f;

public:
    // Float(float value) : value{value} {};

    Float(){};
    Float(float f) : value{f} {};

    //演算子オーバーロード
    Float operator+(const Float &rhs) const;
    Float operator-(const Float &rhs) const;
    Float operator*(const Float &rhs) const;
    Float operator/(const Float &rhs) const;

    void show() const;
};

Float Float::operator+(const Float &rhs) const
{
    return Float{this->value + rhs.value};
};

Float Float::operator-(const Float &rhs) const
{
    return Float{this->value - rhs.value};
};

Float Float::operator*(const Float &rhs) const
{
    return Float{this->value * rhs.value};
};

Float Float::operator/(const Float &rhs) const
{
    return Float{this->value / rhs.value};
};

void Float::show() const
{
    std::cout << "Float.value = " << this->value << std::endl;
};

int main(void)
{
    Float x = 2.2;
    Float y = 4.4;
    Float z = 6.6;

    auto result = x + (y * z) - (z / x);
    result.show();

    return 0;
}