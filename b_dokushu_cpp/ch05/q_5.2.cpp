//***************************************************
/** 21/3/8
 * 「練習問題 5.2」
 */
//***************************************************

#include <iostream>
#include <vector>

class Product
{
    int id = 0;
    std::string name = "";
    int price = 0;

public:
    explicit Product(int id, std::string name, int price);
};

Product::Product(int id, std::string name, int price) : id(id), name(name), price(price) {}

int main(void)
{
    Product p1[4] = {
        Product{1, "product 1", 500},
        Product{1, "product 2", 1000},
        Product{1, "product 2", 1000},
        Product{1, "product 2", 1000},
    };

    // for (auto arr : p1)
    // {
    //     std::cout << arr << std::endl;
    // }

    // std::vector<Product> p = {
    //     Product{1, "apple", 500},
    //     Product{2, "tomato", 100},
    // };

    // p.push_back(Product{});
    // p.push_back(Product{});

    return 0;
}

/**
 * 21/3/8  コメントを外すと、コンパイルエラー
 *
 *
*/
