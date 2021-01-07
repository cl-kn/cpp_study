//***************************************************
/** 21/01/07
 * P71 list2.1 構造体を使った商品の管理
 */
//***************************************************

#include <iostream>

typedef struct
{
    int id;    //商品ID
    int price; //単価
    int stock; //在庫数

} S_PRODUCT;

int main(void)
{
    S_PRODUCT pen;
    pen.id = 1;
    pen.price = 200;
    pen.stock = 50;

    S_PRODUCT *s_ptr = &pen; //構造体へのポインタ変数

    std::cout << "pen id = " << s_ptr->id << std::endl;
    std::cout << "pen price = " << s_ptr->price << std::endl;
    std::cout << "pen stock = " << s_ptr->stock << std::endl;

    return 0;
}