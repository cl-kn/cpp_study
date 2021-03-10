//***************************************************
/** 21/3/9
 * 「std::initializer_list」
 */
//***************************************************

#include <iostream>
#include <initializer_list>

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
    Int_Vector iv = {0, 1, 2, 3, 4, 5};
    std::cout<<  << std::endl;
    std::cout<<  << std::endl;

    return 0;
}