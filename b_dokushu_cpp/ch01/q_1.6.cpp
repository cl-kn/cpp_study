//***************************************************
/** 20/1/7
 * 練習問題1.6
 *
 */
//***************************************************

#include <iostream>
#include <string>

int main(void)
{
    //問題１
    int array[] = {4, 2, 1, 9, 5};

    size_t length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++)
    {
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }

    //問題２
    // char string[] = {"a", NULL, "b", "c", NULL};
    char string[] = "dog, \0 null cat"; //dog,

    std::cout << string << std::endl;

    std::string string2 = "dog, \0 null cat";
    std::cout << string2 << std::endl; //dog,

    return 0;
}