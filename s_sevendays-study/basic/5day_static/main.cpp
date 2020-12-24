//***************************************************
/** 第5日目：静的メンバ
 * https://cpp-lang.sevendays-study.com/day5.html
 * 12/24 */
//***************************************************

#include "DOG.h"
#include <iostream>

int main(void)
{
    CDog *d1, *d2, *d3;
    d1 = new CDog();

    d1->bark();
    CDog::showNum();

    d2 = new CDog();
    d3 = new CDog();

    d2->bark();
    d3->bark();

    delete d1;
    delete d2;

    CDog::showNum();

    delete d3;

    CDog::showNum();

    return 0;
}