//***************************************************
/** 21/4/16
 * 「関係演算子のオーバーロード」復習
 */
//***************************************************

#include <iostream>
#include <string>

class Integer
{
private:
    int value;

public:
    Integer(int x) : value{x} {};

    bool operator==(const Integer &ins) const;
    bool operator!=(const Integer &ins) const;

    bool operator<(const Integer &ins) const;
    bool operator>(const Integer &ins) const;
    bool operator<=(const Integer &ins) const;
    bool operator>=(const Integer &ins) const;
};

bool Integer::operator==(const Integer &ins) const
{
    return this->value == ins.value;
};

bool Integer::operator!=(const Integer &ins) const
{
    return !(value == ins.value);
};

bool Integer::operator<(const Integer &ins) const
{
    return this->value < ins.value;
};

bool Integer::operator>(const Integer &ins) const {
    return
};

bool Integer::operator<=(const Integer &ins) const {

};

bool Integer::operator>=(const Integer &ins) const {

};

int main(void)
{
    Integer i1(2), i2(1);

    (i1 == i2) ? std::cout << "(i1 == i2)true" : std::cout << "(i1 == i2)false" << std::endl;
    (i1 != i2) ? std::cout << "(i1 != i2)true" : std::cout << "(i1 != i2)false" << std::endl;
    return 0;
}