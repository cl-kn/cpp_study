//***************************************************
/** 21/3/4
 * P255 「3つの三角形の初期化と面積表示」
 */
//***************************************************

#include <iostream>

class Triangle
{
private:
    int m_height;      //高さ
    int m_base_length; //底辺の長さ

public:
    explicit Triangle(int height, int base_length); //コンストラクタ
    int height() const;
    int base_length() const;
};

//コンストラクタ
Triangle::Triangle(int height, int base_length) : m_height(height), m_base_length(base_length)
{
}

//戻り値：高さ
int Triangle::height() const
{
    return m_height;
}

// 戻り値：底辺の長さ
int Triangle::base_length() const
{
    return m_base_length;
}

int main(void)
{
    Triangle tringles[] = {

        Triangle{10, 20},
    };

    return 0;
}