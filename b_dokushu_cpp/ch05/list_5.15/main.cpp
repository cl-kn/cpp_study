//***************************************************
/** 21/3/9
 * 「std::initializer_list」
 */
//***************************************************

#include <iostream>
#include <initializer_list>
#include <string>

class Int_Vector
{
    std::size_t m_size;
    int *m_array;

public:
    Int_Vector(std::initializer_list<int> init);
    ~Int_Vector();

    std::size_t size() const
    {
        return m_size;
    }

    int at(int n) const
    {
        return m_array[n];
    }
};

Int_Vector::Int_Vector(std::initializer_list<int> init) : m_size{init.size()}, m_array{new int[init.size()]}
{
    std::size_t i = 0;

    //std::initializer_listの中身を使って動的配列を初期化
    for (int e : init)
    {
        m_array[i] = e;
        ++i;
    }
}

Int_Vector::~Int_Vector()
{
    delete[] m_array;
}

int main(void)
{
    //配列の様に std::initializer_list で初期化
    Int_Vector iv = {0, 1, 2, 3, 4, 5};
    std::cout << "iv.size() = " << iv.size() << std::endl;
    std::cout << "iv.at(3) = " << iv.at(3) << std::endl;

    return 0;
}

/**
 * 4/6 メモ
 * 「size_t」型
 * 符号なし整数型（オブジェクトのバイト数を表現できる程度に十分に大きい）
 * オブジェクトのバイト数（例えばmallocの引数）やコンテナの要素数（例えばstd::size()の返り値）を表現するために用いられる。
 *
*/