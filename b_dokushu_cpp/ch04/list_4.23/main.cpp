//***************************************************
/** 21/2/26
 * P237「マクロを使った識別子の置き換え」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

void dog()
{
    std::cout << "Corgi" << std::endl;
}

void cat()
{
    std::cout << "Maine Coon" << std::endl;
}

int main(void)
{
    dog();
    cat();

//マクロ定義
#define dog cat
    dog(); //マクロ定義により、 dog が cat に置き換わってコンパイル
#undef dog
    dog();

    return 0;
}