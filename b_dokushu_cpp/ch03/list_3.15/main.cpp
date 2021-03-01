//***************************************************
/** 21/2/8
 * P162 list3.15「図形の形状を扱うクラス」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

//図形クラス（基底）
class Shape
{
public:
    //純粋仮想関数（抽象メソッド）
    virtual float area() const = 0;      //面積を求める
    virtual float perimeter() const = 0; //周囲長を求める
};

//長方形クラス（派生）
class Rectangle : public Shape
{
    float height;
    float width;

public:
    explicit Rectangle(float height, float width); //コンスト宣言
    float area() const override;
    float perimeter() const override;
};

//コンスト定義
Rectangle::Rectangle(float height, float width) : height(height), width(width)
{
}

float Rectangle::area() const
{
    return height * width;
}

float Rectangle::perimeter() const
{
    return 2 * (height + width);
}

//円クラス（派生）
class Circle : public Shape
{
    float r; //半径
public:
    explicit Circle(float r);
    float area() const override;
    float perimeter() const override;
};

Circle::Circle(float r) : r(r)
{
}

float Circle::area() const
{
    return r * r * 3.14F;
}

float Circle::perimeter() const
{
    return 2 * r * 3.14F;
}

int main(void)
{
    Rectangle rect(10, 2);
    std::cout << "rect" << std::endl;
    std::cout << "  area: " << rect.area() << std::endl;
    std::cout << "  perimeter: " << rect.perimeter() << std::endl;

    Circle circle(4);
    std::cout << "circle" << std::endl;
    std::cout << "  area: " << circle.area() << std::endl;
    std::cout << "  perimeter: " << circle.perimeter() << std::endl;

    return 0;
}

/**
 * 「純粋仮想関数」
 * ・JAVAの抽象メソッド（abstruct）と類似
 * ・基底クラスでは宣言のみで定義（処理内容）はなく、派生先クラスでオーバーライドして実装を強制する機能
 * 
 * [構文]：純粋仮想関数
 * class class-name {
 *  public:
 *      virtual return-type function-name(parameters....) = 0;
 * }
 * 
 * 
*/