//***************************************************
/** 21/4/13
 * 「右辺値参照について」
 * 参考：https://qiita.com/seriru13/items/e5953f88fe23e4140687
*/
//***************************************************

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

//参考サイトより転載
//ムーブコンストラクタとムーブ演算代入を実装

class Test
{
private:
    std::string *p;

public:
    Test() : p(new std::string[1000]){};
    ~Test()
    {
        delete[] p;
    }

    Test(Test const &right)
    {
        *this = right;
    }

    Test &operator=(Test const &right)
    {
        if (this != &right)
        {
            p = new std::string[1000]; //新しいメモリ領域を用意
            memcpy(p, right.p, 1000);  //コピー
        }
        return *this;
    }

    Test(Test &&right)
    {
        *this = std::move(right);
    }

    Test &operator=(Test &&right)
    {
        std::cout << "move assigned!!!" << std::endl;
        if (this != &right)
        {
            delete[] p;  //メモリ領域を消す
            p = right.p; //相手のメモリ領域を譲り受ける
            right.p = nullptr;
        }
        return *this;
    }
};

int main(void)
{
    Test lval1;
    Test lval2;
    Test rval(lval1); //コピコン

    rval = std::move(lval2); //move代入

    return 0;
}

/**
 * 「右辺値」リテラルや参照がない戻り値
 *          ※評価された時点で破棄される
 *
 * 「左辺値」名前付きオブジェクト 例：Object o
 *          ※関数のスコープを外れるまで生存
 *
 * 【例】
 *          int i = 101;
 *         左辺値   右辺値
 *
 * 「右辺値参照型」
 *      右辺値への参照を持つ型で、左辺値である
 *      （右辺値を束縛できる型）
 *
 * 「std::move」
 * 左辺値を右辺値にキャスト
 *
 *
*/