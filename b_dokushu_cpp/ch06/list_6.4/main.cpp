//***************************************************
/** 21/4/15
 * 「インクリメント・デクリメント演算子のオーバーロード」
*/
//***************************************************

#include <iostream>
#include <string>

class Integer
{
private:
    int value;

public:
    Integer(int v) : value{v} {}; //コンスト

    Integer &operator++();   //前置インクリメント
    Integer &operator--();   //前置デクリメント
    Integer operator++(int); //後置インクリメント
    Integer operator--(int); //後置デクリメント

    void showInfo() const;
};

Integer &Integer::operator++() //前置インクリ
{
    ++value;
    return *this;
};

Integer &Integer::operator--() //前置デクリ
{
    --value;
    return *this;
};

Integer Integer::operator++(int) //後置インクリ
{
    auto tmp = *this; //値の一時保存用
    ++(*this);        //動作に一貫性を持たせるために、インクリ

    return tmp;
};

Integer Integer::operator--(int) //後置インクリ
{
    auto tmp = *this;
    --(*this);

    return tmp;
};

void Integer::showInfo() const
{
    std::cout << this->value << std::endl;
}

int main(void)
{
    Integer integer(2);
    std::cout << "value = ";
    integer.showInfo(); //2

    std::cout << "++integer = ";
    ++integer;
    integer.showInfo(); //3

    std::cout << "--integer = ";
    --integer;
    integer.showInfo(); //2

    std::cout << "integer++ = ";
    integer++;
    integer.showInfo(); //3

    std::cout << "integer-- = ";
    integer--;
    integer.showInfo(); //2

    return 0;
}