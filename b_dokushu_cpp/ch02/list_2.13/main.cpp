//***************************************************
/** 1/11
 * P99「ネストした型名」・・・using
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class data
{
public:
    using integer = int; //クラス内で使う型名に、using で別名を与える

    integer get_value();
    void set_value(integer new_value);

private:
    integer value;
};

data::integer data::get_value()
{
    return this->value;
}

void data::set_value(integer new_value)
{
    this->value = new_value;
}

int main(void)
{
    data d;

    using integer = data::integer; //?
    integer value = 42;

    d.set_value(value);

    std::cout << d.get_value() << std::endl;

    return 0;
}