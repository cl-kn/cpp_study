//***************************************************
/** 21/1/12 
 * P101 「std::cin を使ったコンソール入力」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

int main(void)
{
    std::string str;
    std::string line;

    std::cout << "please enter the word" << std::endl
              << "> ";

    // std::cin >> str; //空白以後の入力は無視
    // std::cout << str << std::endl;

    std::getline(std::cin, line); //１行の入力受付    

    std::cout << line << std::endl;

    return 0;
}