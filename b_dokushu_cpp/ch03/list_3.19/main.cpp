//***************************************************
/** 21/2/11
 * P172 list3.19 「共用体と構造体の違い」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

union U
{
public: //デフォルトは public
    float f;

private:
    int i;

public:
    U(); //コンスト定義可能
    int get_i() const;
};

//コンストラクタでは、戦闘以外のメンバ変数"で"初期化できる？？
U::U() : i(0xdeadbeef)
{
    std::cout << "&f: " << &f << std::endl
              << "&i:" << &i << std::endl;
}

int U::get_i() const
{
    return this->i; //共用体のメンバもthisが使える
}

int main(void)
{
    U u; //デフォコンストがint型で初期化する
    std::cout << std::hex << u.get_i() << std::endl;

    u.f = 2.71828F; //float値を代入

    std::cout << std::hex << u.get_i() << std::endl;

    return 0;
}