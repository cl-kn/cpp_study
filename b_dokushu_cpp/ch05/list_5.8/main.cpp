//***************************************************
/** 21/3/8
 *
 * 「動的配列の操作・・・追加、削除」
*/
//***************************************************

#include <iostream>
#include <vector>

// std::string pop_back()
// {
//     return "delete";
// }

int main(void)
{
    std::vector<int> list;

    list.push_back(2021); //末尾に 2021 追加
    list.push_back(1900); //末尾に 1900 追加

    for (auto x : list)
    {
        std::cout << x << std::endl; //2021 1900
    }

    std::cout << std::endl;

    list.pop_back();     //最後の要素を削除
    list.push_back(-10); //末尾に -10 追加

    for (auto x : list)
    {
        std::cout << x << std::endl; //2121 -10
    }

    return 0;
}