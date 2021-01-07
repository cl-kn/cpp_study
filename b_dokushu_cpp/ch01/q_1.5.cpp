//***************************************************
/** 1/5
 * P50 「練習問題 1.5」
 */
//***************************************************

#include <iostream>

void show_float_num(float num)
{
    std::cout << num << std::endl;
}

int main(void)
{
    //問題１
    float f1 = 42.195f;
    show_float_num(f1);

    //問題２
    float f2 = 100.001f;
    f2 -= 100;

    std::cout << f2 << std::endl; //0.000999451

    //問題３
    int i = 1;

    int *ptr = &i;
    *ptr = 42;

    std::cout << i << std::endl;

    /*
     * コンピュータでは、扱う浮動小数点数はすべての実数を正確に表現できない為、近似値が使われることが多い
     */

    return 0;
}