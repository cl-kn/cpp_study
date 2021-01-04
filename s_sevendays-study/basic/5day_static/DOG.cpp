//***************************************************
/** 12/24 */
//***************************************************

#include <iostream>
#include "DOG.h"

int CDog::d_count = 0; //static変数の初期値設定

//コンストラクタ
CDog::CDog()
{
    d_id = d_count;
    d_count++;
}

//デストラクタ
CDog::~CDog()
{
    std::cout << "dog :" << d_id << "delete" << std::endl;
    d_count--;
}

//生成数カウント
void CDog::showNum()
{
    std::cout << "" << d_count << "" << std::endl;
}

//吠える
void CDog::bark()
{
    std::cout << d_id << " : "
              << "bow wow" << std::endl;
}
