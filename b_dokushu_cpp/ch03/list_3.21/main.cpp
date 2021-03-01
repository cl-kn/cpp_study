//***************************************************
/** 21/2/15
 * P177 「フレンド関数～フレンド宣言」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class Vector3d
{
private:
    float x;
    float y;
    float z;

public:
    Vector3d();
    Vector3d(float x, float y, float z);

    friend Vector3d add(const Vector3d &lhs, const Vector3d &rhs);
    friend Vector3d sub(const Vector3d &lhs, const Vector3d &rhs); //練習問題3.8 より追加
    void dump() const;
};

Vector3d::Vector3d() : Vector3d(0, 0, 0)
{
}

Vector3d::Vector3d(float x, float y, float z) : x(x), y(y), z(z)
{
}

Vector3d add(const Vector3d &lhs, const Vector3d &rhs)
{
    Vector3d result;

    result.x = lhs.x + rhs.x;
    result.y = lhs.y + rhs.y;
    result.z = lhs.z + rhs.z;

    return result;
}

Vector3d sub(const Vector3d &lhs, const Vector3d &rhs)
{
    Vector3d result{
        lhs.x - rhs.x,
        lhs.y - rhs.y,
        lhs.z - rhs.z};

    // result.x = lhs.x - rhs.x;
    // result.y = lhs.y - rhs.y;
    // result.z = lhs.z - rhs.z;

    return result;
}

void Vector3d::dump() const
{
    std::cout << "x: " << this->x << std::endl
              << "y: " << this->y << std::endl
              << "z: " << this->z << std::endl;
}

int main(void)
{
    Vector3d num1(1, 3, 5);
    Vector3d num2(2, 4, 6);

    Vector3d result_add = add(num1, num2);
    Vector3d result_sub = sub(num1, num2);
    result_add.dump();
    result_sub.dump();

    return 0;
}

/**
 * 「フレンド関数」
 * 
 * ・非メンバ関数から、privateなメンバ変数へアクセスを可能にする friend 指定子
 * ・非メンバ関数のプロトタイプ宣言時に、 friend を付与するだけ
 * 
 * 
*/