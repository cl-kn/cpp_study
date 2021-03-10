//***************************************************
/** 21/3/8
 * 練習問題 5.3
 * １：new演算子でクラスを動的確保（コンスト、デストがいつ呼ばれたか分かるように）
 * ２：１のプログラムにおいて delete演算子を削除したらどうなるか
 */
//***************************************************

#include <iostream>

class Animal
{
    std::string dog = "";
    std::string cat = "";

public:
    Animal();
    ~Animal();
};

Animal::Animal() { std::cout << "call const" << std::endl; };
Animal::~Animal() { std::cout << "call dest" << std::endl; };

int main(void)
{
    std::cout << "before [new]" << std::endl;
    Animal *animal = new Animal{};
    std::cout << "after [new]" << std::endl;

    std::cout<< "before [delete]" << std::endl;
    delete animal;
    std::cout<< "after [delete]" << std::endl;

    // delete animal;

    return 0;
}