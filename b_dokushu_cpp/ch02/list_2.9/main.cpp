//***************************************************
/** 21/1/8
 * list2-9 参照への代入
 */
//***************************************************

#include <iostream>
#include <stdio.h>

int main(void)
{
    int value = 42;
    int other = 2;
    int *pointer = &value;  //ポインタ変数への代入
    int &reference = value; //参照valueへの参照

    std::cout << "value address = " << &value << "..." << value << std::endl; //[value]のアドレス、値
    std::cout << "other address = " << &other << "..." << other << std::endl; //[other]のアドレス、値

    std::cout << "pointer address = " << &pointer << "..." << *pointer << std::endl;      //[pointer]のアドレス、値
    std::cout << "reference address = " << &reference << "..." << reference << std::endl; //[reference]のアドレス、値

    pointer = &other;  //otherのアドレスをポインタ変数に渡す
    reference = other; //参照先をvalueからotherへ変更 ※誤り※

    std::cout << std::endl;
    std::cout << "value address = " << &value << "..." << value << std::endl; //[value]のアドレス、値
    std::cout << "other address = " << &other << "..." << other << std::endl; //[other]のアドレス、値

    std::cout << "pointer address = " << &pointer << "..." << *pointer << std::endl;      //[pointer]のアドレス、値
    std::cout << "reference address = " << &reference << "..." << reference << std::endl; //[reference]のアドレス、値

    return 0;
}