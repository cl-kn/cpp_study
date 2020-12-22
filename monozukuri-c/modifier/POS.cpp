//***************************************************
/** 12/22 「const」 */
//***************************************************

#include <stdio.h>
#include "POS.h"

//const 付きのメンバ関数
int POS::get_x() const
{
    return x;
}

int POS::get_y() const
{
    return y;
}

//const 無しのメンバ関数
void POS::set_x(int x)
{
    this->x = x;
}

void POS::set_y(int y)
{
    this->y = y;
}

/**【➁ メンバ関数に付与】
 * ・「const」を付与することで、自オブジェクトを示す this ポインタを使ったメンバ関数の変更がないことを保証できる！
 *
 * 【➂ 「const」を付与したメンバ変数】
 * ・
 *
 *
*/