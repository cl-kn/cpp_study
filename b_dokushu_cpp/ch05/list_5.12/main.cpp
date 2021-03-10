//***************************************************
/** 21/3/9
 * P266 「クラスの動的確保」 */
//***************************************************

#include <iostream>

class Triangle
{
    float height;
    float width;

public:
    explicit Triangle(float height, float width);

    float area() const;
};

Triangle::Triangle(float height, float width) : height(height), width(width) {}

float Triangle::area() const
{
    return height * width / 2;
}

int main(void)
{
    Triangle *tri = new Triangle{10.0f, 5.0f};

    std::cout << "Triangle area = " << tri->area() << std::endl;

    delete tri;

    return 0;
}

/**
 * 「new delete の使い方」
 * ・new演算子を宣言する際に、コンストラクタ引数を渡し、適切なコンストラクタを使ってオブジェクトを初期化できる。
 *
 *
*/