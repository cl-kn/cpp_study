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

    d1->bark();      // 0 : bow wow
    CDog::showNum(); //1

    d2 = new CDog(); // d_id = 1 d_count = 2
    d3 = new CDog(); // d_id = 2 d_count = 3

    d2->bark(); // 1 : bow wow
    d3->bark(); // 2 : bow wow

    delete d1; // dog : 0 delete
    delete d2; // dog : 1 delete

    CDog::showNum(); // 1

    delete d3; // dog : 2 delete

    CDog::showNum(); // 0

    return 0;
}