//***************************************************
/** 21/4/6
 * 「引数を持つコンストラクタ呼び出しの例」の復習
*/
//***************************************************

#include <iostream>
#include <string>

class A
{
    int x;
    std::string str;

public:
    A(int, std::string);
    A(float);

    void printValue();
};

A::A(int v, std::string s) : x(v), str(s) {} //コンスト
A::A(float) : A{-1, "float"} {}              //移譲コンスト

void A::printValue()
{
    std::cout << "class A.x = " << this->x << std::endl;
    std::cout << "class A.str = " << this->str << std::endl;
}

int main(void)
{
    A a1(101, "corgi");
    A a2(1, "dog");
    A a4 = A(1, "apple1");
    A a5 = A{2, "apple2"};
    A a6 = {3, "apple3"};



    a1.printValue();
    a2.printValue();

    return 0;
}