//***************************************************
/** 12/23 */
//***************************************************

#include "CAR.h"
#include <iostream>

//コンストラクタ
CCar::CCar()
{
    std::cout << "[CCar object born]" << std::endl;
}

//デストラクタ
CCar::~CCar()
{
    std::cout << "[CCar object die]" << std::endl;
}

void CCar::move()
{
    if (this->m_fuel >= 0)
    {
        this->m_migration++; //距離移動
        this->m_fuel--;      //燃料消費
    }
    std::cout << "migration : " << this->m_migration << std::endl;
    std::cout << "fuel : " << this->m_fuel << std::endl;
}

// 燃料補給メソッド
void CCar::supply(int fuel)
{
    if (fuel > 0)
    {
        this->m_fuel += fuel; //燃料補給
    }
    std::cout << "fuel : " << this->m_fuel << std::endl;
}
