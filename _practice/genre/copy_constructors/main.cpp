//***************************************************
/** 21/4/13
 * 「コピーコンストラクタ」について ※復習
 */
//***************************************************

#include <iostream>
#include <string>

class Fruit
{
public:
    std::string name;
    int rank;

    //通常コンスト１
    Fruit()
    {
        this->name = "no name";
        this->rank = 0;

        std::cout << "constructor 引数なし" << std::endl;
        std::cout << "[" << name << "]" << std::endl;
        std::cout << "[" << rank << "]" << std::endl;
        std::cout << std::endl;
    };

    //通常コンスト２
    Fruit(std::string name, int rank) : name{name}, rank{rank}
    {
        std::cout << "constructor 引数指定" << std::endl;
        std::cout << "[" << name << "]" << std::endl;
        std::cout << "[" << rank << "]" << std::endl;
        std::cout << std::endl;
    };

    //コピコン
    Fruit(const Fruit &)
    {
        std::cout << "copy constructor" << std::endl;
    };
};

int main(void)
{
    Fruit f1;
    Fruit f2("orange", 5);

    Fruit f3(f1);                      //コピコン呼び出し
    std::cout << f3.name << std::endl; //インスタンス f3 は、初期値を設定していない為、不定の値
    std::cout << f3.rank << std::endl;

    return 0;
}