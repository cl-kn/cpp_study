//***************************************************
/** 21/3/9
 * 「引数を持つコンストラクタ呼び出しの例」
 */
//***************************************************

#include <iostream>
#include <string>

class A
{
    int m_v;
    std::string m_n;

public:
    A(int, std::string);
    A(float);
};

A::A(int v, std::string n) : m_v(v), m_n(n) {}

A::A(float) : A{-1, "float"}
{
}

int main(void)
{
    A ap(202, "1");
    A ab(42, "1");

    A bp = A(42, "0"); //関数形式の明示的型変換
    A bb = A{42, "0"}; //bpの初期化と同様

    // A cp = (42, "0"); //エラー
    A cb = {42, "0"};

    A dp = (42, 0.0); //A(float)が呼ばれる
    A db = {42, 0.0}; //エラー double → std::string へ変換不可

    double pi = 3.1415926536;
    A ep(pi); //double → float への暗黙変換が行われる
    A eb{pi}; //

    return 0;
}