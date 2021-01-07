//***************************************************
/** 21/1/7
 * getter , setter
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
    this->price = price;
}

int Product::get_stock() //stockのgetter
{
    return this->stock;
}

void Product::set_stock(int stock) //stockのsetter
{
    this->stock = stock;
}

int main(void)
{
    Product toy;
    toy.set_id(1);
    toy.set_price(2500);
    toy.set_stock(3);

    std::cout << "ID:" << toy.get_id() << std::endl;
    std::cout << "PRICE:" << toy.get_price() << std::endl;
    std::cout << "STOCK:" << toy.get_stock() << std::endl;

    return 0;
}