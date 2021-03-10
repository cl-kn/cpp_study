#ifndef INC_C_HPP
#define INC_C_HPP

#include <iostream>

class A
{
    std::string m_name;
    int m_value;

public:
    explicit A(std::string name, int value);
    explicit A(std::string name);
    A(); //デフォコン
    void show() const;
};

A::A(std::string name, int value) : m_name(name), m_value(value)
{
}

A::A(std::string name) : A(name, -1) {}

A::A() : A("default") {}

void A::show() const
{
    std::cout << m_name << " " << m_value << std::endl;
}

#endif
