//***************************************************
/** 21/4/15
 * 「コピコンと合わせて定義する」
 * 「複合代入演算子のオーバーロード」
 *
 * 参考：https://programming.pc-note.net/cpp/operator.html
 */
//***************************************************

#include <iostream>
#include <string>

//クラスのインスタンスの代入を行うクラス
//代入演算子 = のオーバーロード
//※コピコン追加

class CalcClass
{
private:
    int *pointer;
    int num;

public:
    //代入演算子 = のオーバーロード注意点
    //① 戻り値の型は自分自身のクラス
    //② return文には「*this」を指定

    CalcClass &operator=(const CalcClass &c)
    {
        //※()の右にconstを付与すると、この関数内での値の代入が出来ない為エラーとなる
        this->pointer = 0;
        return *this;
    };

    //複合代入演算子 += のオーバーロード
    //①引数：自身のインスタンスを受け取る
    CalcClass &operator+=(const CalcClass &c)
    {
        num += c.num;
        return *this;
    };

    //②引数：目的の型を受け取る
    CalcClass &operator+=(int r)
    {
        num += r;
        return *this;
    };

    CalcClass(int *x = 0) : pointer{x} {}; //コンストラクタ
    CalcClass(const CalcClass &c) : pointer{0} {};

    int *getP()
    {
        return pointer;
    };

    void setP(int *p) { this->pointer = p; };
    void show() { std::cout << "address = " << this->pointer << std::endl; };
};

int main(void)
{
    int num = 10;
    CalcClass cc1(&num);

    CalcClass cc2(cc1);  //コピコン
    CalcClass cc3 = cc1; //コピコン
    CalcClass cc4;
    cc4 = cc1; //演算子オーバーロード

    cc1.show(); //numのアドレス表示
    cc2.show();
    cc3.show();
    cc4.show();

    // CalcClass calc_class1(10);
    // CalcClass calc_class2(20);

    // auto result = calc_class1 += calc_class2;
    // std::cout << result << std::endl;

    // calc_class1 += 55;
    // std::cout << calc_class1.show() << std::endl;

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