//***************************************************
/** 1/5
 * P43 constポインター
 */
//***************************************************

#include <iostream>

int main(void)
{
    //constポインター
    //cont typename * variable-name;
    //type-name const * variable-name;

    const int num1 = 55;
    const int num2 = 0;

    const int *cptr = &num1; //constポインターを格納するポインター変数cptr

    cptr = &num2;

    // num1 = 100; // constなので代入不可

    std::cout << "*cptr = "<<cptr << std::endl;

    return 0;
}