//***************************************************
/** 21/4/13
 * 「ムーブ」について
 * 参考：https://qiita.com/luftfararen/items/1de032bc6e3eb69ca672
*/
//***************************************************

#include <iostream>
#include <string>

int main(void)
{

    return 0;
}

/**
 * C++11の代入とコンストラクタには「コピー」、「ムーブ」がある。
 * コピー
 * ・データをすべてコピー
 *
 * ムーブ std::move()
 * ・ポインタとサイズ情報のコピーだけを行う
 * ・ムーブ後はムーブ元のオブジェクトデータは不定になる為、使えない
 *
 *【例】
 *
 * std::string str = "corgi";
 * std::string str2 = str;
 * std::string str3 = std::move(str); //str3にstrの中身をムーブ、この後、strの利用は保証されない！！
 *
 * std::string str4(std::move(str3));
 *
 *
 *
*/