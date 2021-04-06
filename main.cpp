
#include <cstddef>
#include <cassert>
#include <iostream>
#include <string>

int main()
{
    std::size_t n = sizeof('a');
    std::cout << assert(n == 1) << std::endl;
}