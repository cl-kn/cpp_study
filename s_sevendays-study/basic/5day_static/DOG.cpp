//***************************************************
/** 12/24 */
//***************************************************

#include <iostream>
#include "DOG.h"

int CDog::d_count = 0;

CDog::CDog(): d_id(0)
{
    d_id = d_count;
    d_count++;
}

CDog::~CDog()
{
    std::cout << "dog :" << d_id << "delete" << std::endl;
    d_count--;
}

void CDog::showNum()
{
    std::cout << "" << d_count << "" << std::endl;
}

void CDog::bark()
{
    std::cout << d_id << " : "
              << "bow wow" << std::endl;
}
