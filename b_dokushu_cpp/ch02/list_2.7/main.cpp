//***************************************************
/** 21/1/7
 * 練習問題 2.2 getter , setter
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class Product
{
private:
    int id;    //商品ID
    int price; //商品価格
    int stock; //商品在庫
public:
    int get_id();
    void set_id(int id);

    int get_price();
    void set_price(int price);

    int get_stock();
    void set_stock(int stock);

    void set_allValue(int id, int price, int stock);
};

int Product::get_id() //IDのgetter
{
    return this->id;
}

void Product::set_id(int id) //IDのsetter
{
    this->id = id;
}

int Product::get_price() //priceのgetter
{
    return this->price;
}

void Product::set_price(int price) //priseのsetter
{
    if (price < 0)
    {
        std::cout << "[price = " << price << "] illegal value..." << std::endl;
        this->price = 0;
        return;
    }
    this->price = price;
}

int Product::get_stock() //stockのgetter
{
    return this->stock;
}

void Product::set_stock(int stock) //stockのsetter
{
    if (stock < 0)
    {
        std::cout << "[stock = " << stock << "] illegal value..." << std::endl;
        this->stock = 0;
        return;
    }
    this->stock = stock;
}

void Product::set_allValue(int id, int price, int stock)
{
    if (price < 0)
    {
        std::cout << "[price = " << price << "] illegal value..." << std::endl;
        this->price = 0;
        return;
    }

    if (stock < 0)
    {
        std::cout << "[stock = " << stock << "] illegal value..." << std::endl;
        this->stock = 0;
        return;
    }
    this->id = id;
    this->price = price;
    this->stock = stock;
}

int main(void)
{
    //toyインスタンス生成
    Product toy;
    toy.set_id(1);
    toy.set_price(-2500);
    toy.set_stock(-3);

    Product *pts = &toy;

    std::cout << "<toy>" << std::endl;
    std::cout << "id:" << pts->get_id() << std::endl;
    std::cout << "price:" << pts->get_price() << std::endl;
    std::cout << "stock:" << pts->get_stock() << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    //pencil インスタンス生成
    Product pencil;
    pencil.set_allValue(21, 4500, 10);

    Product *pts_pencil = &pencil;

    std::cout << "<pencil>" << std::endl;
    std::cout << "id:" << pts_pencil->get_id() << std::endl;
    std::cout << "price:" << pts_pencil->get_price() << std::endl;
    std::cout << "stock:" << pts_pencil->get_stock() << std::endl;

    return 0;
}