//***************************************************
/** 21/4/6
 * P282 「練習問題 5.7」
 * ① コードの修正
 * ② メンバ変数への参照を直接返すメンバ関数を定義
 * それを constメンバ関数でもオーバーロードしてくれ
 * ※2つの関数が出来る
 */
//***************************************************

#include <iostream>
#include <string>

int value = 0; //修正後

class Dog
{

    std::string name;
    int age;

public:
    Dog(std::string name) : name(name)
    {
    }
    Dog() : Dog("no name") {}

    std::string &getName()
    {
        return name;
    }

    const std::string &getName() const
    {
        return name;
    }
};

//誤った関数
//戻り値が "ローカル変数への参照" の為、main()で参照を受け取った段階では破棄されている
int &function()
{
    // int value = 0;
    return value;
}

int main(void)
{
    int &value = function(); //ローカル変数への参照はこの時点で破棄される
    value = 10;

    std::cout << value << std::endl;

    //問題②*******************************
    Dog dog{"corgi"};
    std::cout << dog.getName() << std::endl;

    return 0;
}