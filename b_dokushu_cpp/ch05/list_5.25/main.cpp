//***************************************************
/** 21/4/14
 * 「ムーブコンストラクター：所有権の移譲」
*/
//***************************************************

#include <iostream>
#include <string>
#include <utility>

//家を表すクラス
class Home
{
private:
    int *m_land; //土地

public:
    explicit Home(std::size_t size) : m_land{new int[size]} {}; //constructor
    ~Home()                                                     //destructor
    {
        delete[] m_land;
    };

    ////右辺値参照 (Home &&other)constructor
    //１：ムーブ元のポインターをコピー :m_land{other.m_land}
    //２：ムーブ元のポインターを空にする
    Home(Home &&other) : m_land{other.m_land}
    {
        other.m_land = nullptr; //元の場所にnull代入・・・所有権の移動
    };

    int *get_land() const { return m_land; }; //getter:土地
};

int main(void)
{
    Home A_Home{100};
    std::cout << "[A_Home] address : " << A_Home.get_land() << std::endl; //0x7e7c10

    //A_Homeの所有権を、B_Home に移譲する
    Home B_Home{std::move(A_Home)};

    std::cout << "[B_Home] address : " << B_Home.get_land() << std::endl; //0x7e7c10
    std::cout << "[A_Home] address : " << A_Home.get_land() << std::endl; //移譲後、nullptr が代入されている為、 0

    return 0;
}