//***************************************************
/** 21/2/9
 * P166 list3.16 「オブジェクトポインター：アロー演算子」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
public:
    void foo();
};

void A::foo()
{
    std::cout << "A::foo()" << std::endl;
}

//クラス A のインスタンスを引数で受け取る
void call_foo(A *p_a)
{
    p_a->foo(); //ポインターでメンバにアクセス
    //(*p_a).foo() と同意
}

int main(void)
{
    A a;
    call_foo(&a);

    return 0;
}

/**
 * 「アロー演算子」
 * 構造体同様に、ポインタを経由して、メンバーへアクセスできる
 * 
 * 
*/