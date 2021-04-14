//***************************************************
/** 21/4/14
 * 「関係演算子の例」
 * 関係演算子6種をオーバーロード
 */
//***************************************************

#include <iostream>
#include <string>

class Integer
{
    int value;

public:
    Integer() : value{value} {};

    bool operator==(const Integer &rhs) const;
    bool operator!=(const Integer &rhs) const;

    bool operator<(const Integer &rhs) const;
    bool operator>(const Integer &rhs) const;
    bool operator<=(const Integer &rhs) const;
    bool operator>=(const Integer &rhs) const;
};

bool Integer::operator==(const Integer &rhs) const
{
    return value == rhs.value;
};

bool Integer::operator!=(const Integer &rhs) const
{
    // return value != rhs.value;
    return !(*this == rhs);
}

bool Integer::operator<(const Integer &rhs) const
{
    return value < rhs.value;
};

bool Integer::operator>(const Integer &rhs) const
{
    return rhs < *this;
};

bool Integer::operator<=(const Integer &rhs) const
{
    return;
};

bool Integer::operator>=(const Integer &rhs) const
{
    return;
};

int main(void)
{

    return 0;
}