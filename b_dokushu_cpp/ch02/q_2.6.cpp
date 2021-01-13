//***************************************************
/** 21/1/12
 * P104 練習2.6
 */
//***************************************************

#include <iostream>
#include <stdio.h>

int main(void)
{
    std::string line;

    do
    {
        std::cout << "> ";
        std::getline(std::cin, line);

        std::cout <<"[" << line<< "]" << std::endl;

    } while (line != "");

    std::cout << "end" << std::endl;

    return 0;
}