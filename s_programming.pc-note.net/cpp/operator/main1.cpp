//***************************************************
/** 21/4/15
 * 「演算子のオーバーロード」「四則演算」
 *
 *  [+] [-] では、通常の記述
 *  [*] [/] では、参照、const を付与したより有効な記述
 *
 *
 * 参考：https://programming.pc-note.net/cpp/operator.html
 */
//***************************************************

#include <iostream>
#include <string>

//クラスのインスタンス同士の演算を行うクラス
//演算子のオーバーロード
class CalcClass
{
private:
    double num;

public:
    //[ + ]記号をオーバーロード
    CalcClass operator+(CalcClass c)
    {
        CalcClass cc;
        cc.num = this->num + c.num;

        return cc;
    }

    //[ - ]記号をオーバーロード
    CalcClass operator-(CalcClass c)
    {
        CalcClass cc;
        cc.num = this->num - c.num;

        return cc;
    }

    //[ * ]記号をオーバーロード ※参照で受け取る
    CalcClass operator*(const CalcClass &c)
    {
        // ※引数に const 指定することで参照値の書き換えを制限する
        CalcClass cc;
        cc.num = this->num * c.num;

        return cc;
    }

    // [ / ]記号をオーバーロード ※参照で受け取る※更にconstメンバ関数にする
    CalcClass operator/(const CalcClass &c) const
    {
        // ※引数に const 指定することで参照値の書き換えを制限する
        // ※引数()後に const を付与することで、この関数内からのメンバ変数書き換えを制限する
        CalcClass cc;
        cc.num = this->num / c.num;

        return cc;
    }

    CalcClass(double x = 0) : num{x} {};
    double get() { return this->num; };
    void set(double x) { this->num = x; };
    void show() { std::cout << "CalcClass num = " << this->num << std::endl; };
};

int main(void)
{
    CalcClass calc_class1(10), calc_class2(20);

    // ※ オーバーロードした関数は引数が一つ、演算子の右辺値のみ
    // ※ 左辺にそのクラスのインスタンスを置いた場合のみ動作する関数
    auto result1 = calc_class1 + calc_class2;
    auto result2 = calc_class1 - calc_class2;
    auto result3 = calc_class1 * calc_class2;
    auto result4 = calc_class1 / calc_class2;

    std::cout << "[result1]*****************" << std::endl;
    result1.show();
    std::cout << "[result2]*****************" << std::endl;
    result2.show();
    std::cout << "[result3]*****************" << std::endl;
    result3.show();
    std::cout << "[result4]*****************" << std::endl;
    result4.show();

    return 0;
}

/**
 * メモ
 * ・クラスのインスタンス同士を演算可能にも出来る
 *
 *
 *
 *
 *
*/