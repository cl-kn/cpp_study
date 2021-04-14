//***************************************************
/** 21/4/14
 * 練習問題 5.8
 * １：右辺値参照を受け取る関数を定義し、変数を実引数にして呼び出し
 * ２：ムーブコンストラクター、コピーコンストラクタを定義して呼び分け
 */
//***************************************************

#include <iostream>
#include <string>
#include <utility>

//答案１，２
class Sample
{
private:
    int x;
    int y;
    int z;

public:
    Sample(int x, int y, int z) : x{x}, y{y}, z{z} {};

    void r_value_reference(Sample &&num)
    {
        std::cout << "Sample.x = " << num.x << std::endl;
        std::cout << "Sample.y = " << num.y << std::endl;
        std::cout << "Sample.z = " << num.z << std::endl;
    };
};

//解答１
//変数は左辺値である為、std::move()関数 を使用して左辺値を右辺値参照にキャストする
void show(int &&r_ref)
{
    std::cout << r_ref << std::endl;
}

//解答２
class A
{
public:
    //何かコンストを定義するとデフォコンは自動作成されない為、定義しておく
    A()
    {
        std::cout << "default constructor" << std::endl;
    };

    A(const A &other)
    {
        std::cout << "copy constructor" << std::endl;
    }

    A(A &&other)
    {
        std::cout << "move constructor" << std::endl;
    }
};

int main(void)
{
    Sample s{1, 2, 3};
    // s.r_value_reference();

    //解答１
    int i = 2021;
    show(std::move(i)); //2021

    //解答２
    A a;               //default constructor
    A c(a);            //copy constructor
    A m(std::move(a)); //move constructor

    return 0;
}