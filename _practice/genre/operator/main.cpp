//***************************************************
/** 21/4/16
 * 「演算子オーバーロード」の復習
 * 参考：http://wisdom.sakura.ne.jp/programming/cpp/cpp27.html
 */
//***************************************************

#include <iostream>
#include <string>

// [+] をオーバーロードした Integer クラス
class Integer
{
private:
    int val;

public:
    int operator+(Integer obj)
    {
        return this->val + obj.val;
    };

    Integer(int x) : val{x} {};
};

// [=]をオーバーロード
class String
{
public:
    std::string str;
    String operator=(std::string str)
    {
        this->str = str;
        return *this;
    }
};

int main(void)
{
    Integer i1(10), i2(20);
    std::cout << i1 + i2 << std::endl; //30

    String str1, str2;
    str1 = str2 = "Corgi Dog !!";
    std::cout << "str1.str" << str1.str << std::endl;
    std::cout << "str2.str" << str2.str << std::endl;

    return 0;
}