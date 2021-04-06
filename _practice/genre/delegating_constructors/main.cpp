//***************************************************
/** 21/4/6
 * 移譲コンストラクタについて
 */
//***************************************************

#include <iostream>
#include <string>

//--------------------------------------------
// C++11以前のコンストラクタ処理
//--------------------------------------------
class Test
{
private:
    void initialize(int i) //共通の初期化関数
    {
        //初期化処理など
    }

public:
    //以下コンストラクタ
    Test(int i)
    {
        initialize(i);
    }
    Test(const char *c)
    {
        initialize(atoi(c));
    }
};

//--------------------------------------------
// C++11以降：移譲コンストラクタ！！
//--------------------------------------------

class Test2
{
public:
    int number;
    Test2(int i)
    {
        //初期化処理
        number = i;
    }

    //移譲コンストラクタ（コンストラクタ内で同クラスのコンストラクタ呼び出し）
    Test2(const char *c) : Test2(atoi(c))
    {
    }
};

int main(void)
{
    Test2 *test2 = new Test2{55};
    Test2 *test22 = new Test2('1');

    std::cout << test2->number << std::endl; //55
    std::cout << test22->number << std::endl;

    delete test2;
    delete test22;



    return 0;
}

/**
 * atoi()
 * 整数値の文字列型データをint型に変換
 *
 *
*/