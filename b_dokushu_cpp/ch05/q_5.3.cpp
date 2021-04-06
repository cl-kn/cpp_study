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
    std::cout << "before [new]" << std::endl; //動的確保前
    Animal *animal = new Animal{};            //動的確保
    std::cout << "after [new]" << std::endl;  //動的確保後

    std::cout << "before [delete]" << std::endl; //解放前
    delete animal;                               //解放！[P]
    std::cout << "after [delete]" << std::endl;  //解放後

    return 0;
}

/**
 * [P]
 * この delete animal がなければ、
 * 動的確保したインスタンスが破棄されずに残り続けるメモリリークが発生
 *
 *
*/