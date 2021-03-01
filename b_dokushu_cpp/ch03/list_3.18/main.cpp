//***************************************************
/** 21/2/11
 * P170 list3.18 「クラスと構造体」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class Base
{
private:
    int value = 0;

public:
    void set_value(int value);
    int get_value() const;
};

void Base::set_value(int value)
{
    this->value = value;
}

int Base::get_value() const
{
    return value;
}

//Baseクラスを継承した構造体
struct DERIVED : public Base
{
    //コンスト、デスト共に持てる
    DERIVED();
    ~DERIVED();
};

DERIVED::DERIVED()
{
    std::cout << "DERIVED::DERIVED()" << std::endl;
}

DERIVED::~DERIVED()
{
    std::cout << "DERIVED::~DERIVED()" << std::endl;
}

int main(void)
{
    DERIVED d;

    std::cout << d.get_value() << std::endl;

    d.set_value(101);

    std::cout << d.get_value() << std::endl;

    return 0;
}

/**
 * 「クラスと構造体」 
 * クラス・・・データと処理を持つ（メンバの初期アクセス指定子：private）
 * 
 * 構造体・・・データの集まり（メンバの初期アクセス指定子：public）
 * 
 * 
 * 
*/