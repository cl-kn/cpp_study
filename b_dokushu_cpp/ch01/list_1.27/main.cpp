//***************************************************
/** 20/1/7 */
//***************************************************

#include <iostream>

int main(void)
{
    //for→範囲for
    int value[] = {-20, 10, 5, -40, 0, 10, -30};
    int i = 0;
    size_t length = sizeof(value) / sizeof(value[0]);

    for (int elem : value)
    {
        if (elem < 0)
        {
            std::cout << "continue" << std::endl;
            continue;
        }
        if (elem == 0)
        {
            std::cout << "break" << std::endl;
            break;
        }
        std::cout << "elme = " << elem << std::endl;
    }

    // while (i < 7)
    // {
    //     if (value[i] < 0)
    //     {
    //         std::cout << "continue" << std::endl;
    //         i++;
    //         continue;
    //     }

    //     if (value[i] == 0)
    //     {
    //         std::cout << "break" << std::endl;
    //         break;
    //     }

    //     std::cout << "elme = " << value[i] << std::endl;
    //     i++;
    // }

    return 0;
}