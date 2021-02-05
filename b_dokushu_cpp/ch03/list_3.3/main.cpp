//***************************************************
/** 21/1/19
 * P129_list3.3 「メンバー変数に mutable 指定をする」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class HeavyClass
{
    int m_value;

    mutable int m_cache;        //キャッシュデータ
    mutable bool m_cache_vaild; //キャッシュ有効かフラグ

public:
    int generate() const;

    void set(int value);
    int get() const;
};

//設定された値から、データを生成するメンバ関数
int HeavyClass::generate() const
{
    std::cout << "data generate function" << std::endl;
    return m_value;
}

void HeavyClass::set(int value)
{
    this->m_cache_vaild = false; //キャッシュを無効化
    this->m_value = value;
}

int HeavyClass::get() const
{
    if (this->m_cache_vaild)
    {
        return this->m_cache;
    }

    this->m_cache = generate(); //データを生成し、キャッシュに保存
    this->m_cache_vaild = true; //キャッシュを有効化

    return m_cache;
}

int main(void)
{
    HeavyClass heavy_object;

    heavy_object.set(100);

    std::cout << heavy_object.get() << std::endl; //キャッシュ生成

    std::cout << heavy_object.get() << std::endl; //キャッシュ生成済みなので、キャッシュが返却

    heavy_object.set(200);

    std::cout << heavy_object.get() << std::endl;

    std::cout << heavy_object.get() << std::endl;

    return 0;
}