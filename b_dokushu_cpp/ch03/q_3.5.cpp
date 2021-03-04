//***************************************************
/** 21/2/9
 * P165 練習問題3.5
 */
//***************************************************

#include <iostream>
#include <stdio.h>
#include <string>

class Base
{
public:
    virtual std::string name() const;
    virtual std::string most_name() const = 0; //抽象メソッド
};

std::string Base::name() const
{
    return "Base::name()";
}

// std::string Base::most_name() const
// {
//     return "Base::most_name()";
// }

class Derived : public Base
{
public:
    std::string name() const override;
    //※ここで、Baseの抽象メソッド most_name() をオーバーライドしてない為、抽象クラスになる
};

std::string Derived::name() const
{
    return "Derived::name()";
}

class MoreDerived : public Derived
{
public:
    std::string name() const override;
    std::string most_name() const override;
};

std::string MoreDerived::name() const
{
    return "MoreDerived::name()";
}

std::string MoreDerived::most_name() const
{
    return "MoreDerived::most_name()";
}

int main(void)
{
    // Derived derived; //Derivedは抽象クラスなので、インスタンス化できない

    MoreDerived moreDerived;
    std::cout << moreDerived.most_name() << std::endl; //MoreDerived::most_name()
    return 0;
}

/**
 * 問１ 継承先クラスと継承元クラスの名称
 *
 * 問２ 基底クラス▶派生クラス１▶派生クラス２ のコード書き
 *
 * 問３ 基底クラスで抽象メソッドを書いた場合、派生クラス２でのみオーバーライドすると、派生クラス１の
 * インスタンスは作成できるか？
 *
 *
 *
 *
*/