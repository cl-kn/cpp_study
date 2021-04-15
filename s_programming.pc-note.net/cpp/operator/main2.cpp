//***************************************************
/** 21/4/15
 * 「代入演算子のオーバーロード」
 *
 * 参考：https://programming.pc-note.net/cpp/operator.html
 */
//***************************************************

#include <iostream>
#include <string>

//クラスのインスタンスの代入を行うクラス
//代入演算子 = のオーバーロード
class CalcClass
{
private:
    int num;

public:
    //代入演算子 = のオーバーロード注意点
    //① 戻り値の型は自分自身のクラス
    //② return文には「*this」を指定

    CalcClass &operator=(const CalcClass &c)
    {
        //※()の右にconstを付与すると、この関数内からのメンバ変数書き換えを制限する
        this->num = c.num;
        return *this;
    };

    CalcClass(int x = 0) : num{x} {};
    double get() { return this->num; };
    void set(int x) { this->num = x; };
    void show() { std::cout << "CalcClass num = " << this->num << std::endl; };
};

int main(void)
{
    CalcClass calc_class1(10);
    CalcClass calc_class2 = calc_class1;

    calc_class1.show(); //10
    calc_class2.show(); //10

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