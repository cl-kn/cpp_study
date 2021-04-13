//***************************************************
/** 21/4/13
 * 「モノづくりC」サイトより
 * 「コピーコンストラクタ」
*/
//***************************************************

#include <iostream>
#include <string>

//コピコン未定義クラス
class Pos
{
public:
    int x;
    int y;

    Pos(int tmpx, int tmpy) : x(tmpx), y(tmpy){};
};

//コピコン定義クラス
class POS
{

public:
    int xx;
    int yy;

    POS(int tmpxx, int tmpyy) : xx(tmpxx), yy(tmpyy) { std::cout << "constructor" << std::endl; };
    POS(const POS &pos) : xx(pos.xx), yy(pos.yy) { std::cout << "copy constructor" << std::endl; }; //コピコン

    ~POS() { std::cout << "destructor" << std::endl; };
    //引数に同名クラスの参照を指定する
};

int main(void)
{
    //-------------------------------------------------------------
    //コピーコンストラクタ処理を未定義・・・自動的に定義される

    // Pos posA(100, 200); //posAに対するコンストラクタ呼び出し
    // Pos posB = posA;    //posBに対するコピーコンストラクタ呼び出し

    // std::cout << "posA.x = " << posA.x << std::endl; //100
    // std::cout << "posA.y = " << posA.y << std::endl; //200

    // std::cout << "**************************************" << std::endl;

    // std::cout << "posB.x = " << posB.x << std::endl; //100
    // std::cout << "posB.y = " << posB.y << std::endl; //200
    // std::cout << "**************************************" << std::endl;
    //-------------------------------------------------------------

    //コピコン定義
    POS posAA(100, 200); //
    POS posBB = posAA;   //
    posBB = posAA;       //

    return 0;
}
