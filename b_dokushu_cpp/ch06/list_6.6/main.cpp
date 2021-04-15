//***************************************************
/** 21/4/14
 * 「関係(比較)演算子の例」
 * 関係演算子6種をオーバーロード
 */
//***************************************************

#include <iostream>
#include <string>

class Integer
{
    int value;

public:
    Integer(int value) : value{value} {};

    //関係演算子オーバーロードの宣言
    bool operator==(const Integer &rhs) const;
    bool operator!=(const Integer &rhs) const;

    bool operator<(const Integer &rhs) const;
    bool operator>(const Integer &rhs) const;
    bool operator<=(const Integer &rhs) const;
    bool operator>=(const Integer &rhs) const;
};

//定義部分

bool Integer::operator==(const Integer &rhs) const
{
    return value == rhs.value;
};

bool Integer::operator!=(const Integer &rhs) const
{
    // return value != rhs.value;
    //==を呼び出し、その否定を返す
    return !(*this == rhs);
}

// < 小なり
bool Integer::operator<(const Integer &rhs) const
{
    return value < rhs.value;
};

// > 大なり
bool Integer::operator>(const Integer &rhs) const
{
    //左右を入れ替えて < を呼ぶと、 大なり > の結果
    return rhs < *this;
};

bool Integer::operator<=(const Integer &rhs) const
{
    // を否定した結果が <= と等しい
    return !(rhs < *this);
};

bool Integer::operator>=(const Integer &rhs) const
{
    // 左右を入れ替えて小なりイコール <= を呼ぶと
    // 大なりイコール >= の結果になる
    return rhs <= *this;
};

int main(void)
{
    Integer x = 10;
    Integer y = 3;

    //true
    if (x != y)
    {
        std::cout << "x != y  ... true" << std::endl;
    }
    else
    {
        std::cout << "x != y ... true" << std::endl;
    }

    //false
    if (y >= x)
    {
        std::cout << "y >= x ... true" << std::endl;
    }
    else
    {
        std::cout << "y >= x ... false" << std::endl;
    }

    return 0;
}