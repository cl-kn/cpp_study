//***************************************************
/**  第１日目：名前空間
 * https://cpp-lang.sevendays-study.com/day1.html
 * 12/23 */
//***************************************************

#include <iostream>

using namespace std;

int main(void)
{
    cout << "HelloWorld!!" << endl;
    // std::cout << "HelloWorld!!" << std::endl; //←の場合、using namespace std は不要

    //コンソールからの入力受付
    string num;
    cout << "<< ";
    cin >> num;
    cout << "num = " << num << endl;

    return 0;
}

/**
 * using namespace std;・・指定された名前の名前空間を使う
 * cout・・・・・・・・・・オブジェクト
 * << 及び >>・・・・・・・ストリームのデータのやり取りを行う
 * endl・・・・・・・・・・改行
 *
 *「名前空間」
 *・C++で追加された、大規模開発に耐えうる名前決定の拡張機能。各々の名前（変数名、関数名など）を名前空間に所属させることで、重複する名前を利用できるようにする。
 *
 * using namespace(名前空間名);
 *
 *
 *
*/