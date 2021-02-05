//***************************************************
/** 21/1/20
 * P131 「練習問題 3.1」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class A
{
    int v;

public:
    void set(int value);
    // int get();
    int &get();
    const int &get() const;
};

void A::set(int value)
{
    this->v = value;
}

int &A::get()
{
    return v;
}

const int &A::get() const
{
    return v;
}

int main(void)
{
    A a;
    a.set(42);

    const A &ca = a;
    ca.get();

    return 0;
}