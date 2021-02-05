//***************************************************
/** 21/1/14
 * list3.1 「constメンバー関数」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class product
{
    int id;

public:
    int get_id() const;
    void set_id(int new_id);
};

//constメンバー関数
int product::get_id() const
{
    return this->id;
}

void product::set_id(int new_id)
{
    this->id = new_id;
}

int main(void)
{
    const product cp{}; //const変数を0で初期化

    std::cout << cp.get_id() << std::endl;

    return 0;
}

/** 2/1「constの付与について」
 * constメンバ関数の使い分けは、情報を取得するか、変更するかでわけるとよい
 * 
 * 情報を取得する関数▶const を使い、内容を変更させない
 * 
 * 情報を変更する関数▶const は使わない（使うと変更できない）
 * 
 * 
 * 
 * 
*/