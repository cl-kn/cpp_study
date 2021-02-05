//***************************************************
/** 21/1/15
 * P128「引数を受け取らないメンバー関数のオーバーロード」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class product
{
    int id;

public:
    int get_id();
    int get_id() const;
};

int product::get_id()
{
    std::cout << "non-const func get_id()" << std::endl;
    return id;
}

int product::get_id() const
{
    std::cout << "const func get_id()" << std::endl;
    return id;
}

int main(void)
{
    product p;
    p.get_id(); //

    const product c_p{};
    c_p.get_id();

    return 0;
}