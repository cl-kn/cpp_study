//***************************************************
/** 21/3/8
 * 「new 演算子、delete 演算子」
 */
//***************************************************

#include <iostream>

int *local()
{
    int i = 42; //ローカル変数

    // return &i; //※※ダングリングポインタ
}

int *dyn_alloc()
{
    int *ptr = new int; //int型のオブジェクトを動的確保
    *ptr = 42;          // 動的確保したint型のオブジェクトにアクセス
    return ptr;         // 動的確保したものはスコープから出ても破棄されない
}

int main(void)
{
    //※※local() で作成したローカル変数は破棄済み
    //このオブジェクトは参照不可
    //int * l = local();
    //std::cout << *l<< std::endl;

    //動的確保したオブジェクトは関数から戻っても破棄されないので有効
    int *d = dyn_alloc();
    std::cout << *d << std::endl;
    delete d; //オブジェクト破棄

    // std::cout << *d << std::endl;

    return 0;
}

/**
 * new演算子
 * type * variable = new type;
 * ・オブジェクトを動的確保
 *
 * delete演算子
 * delete variable;
 * ・確保したオブジェクトを破棄
 *
*/