//***************************************************
/** 21/4/6
 * 「オブジェクトの値渡しと参照渡し」
 */
//***************************************************

#include <iostream>
#include <string>

class Marker
{
public:
    Marker();  //コンスト
    ~Marker(); //デスト
};

Marker::Marker()
{
    std::cout << "コンストラクタ：" << this << std::endl;
}

Marker::~Marker()
{
    std::cout << "デスト：" << this << std::endl;
}

//ローカル関数*******************************************************
void copy(Marker m) //オブジェクトを引数で受ける（非const）
{
    std::cout << "void copy(Marker m) オブジェクトを引数で受け取る（非const）" << std::endl;
    std::cout << "copy: " << &m << std::endl;
}

void reference(const Marker &m) //オブジェクトを引数で受ける（const）
{
    std::cout << "reference(const Marker &m) オブジェクトを引数で受ける（const）" << std::endl;
    std::cout << "reference: " << &m << std::endl;
}
//*******************************************************************

int main(void)
{
    Marker m;

    std::cout << "値渡し前" << std::endl;
    copy(m);
    std::cout << "値渡し後" << std::endl;

    std::cout << "参照渡し前" << std::endl;
    reference(m);
    std::cout << "参照渡し後" << std::endl;

    return 0;
}