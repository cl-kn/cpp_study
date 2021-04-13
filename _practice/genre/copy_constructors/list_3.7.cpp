//***************************************************
/** 21/4/13
 * リスト3.7 より「コピーコンストラクタ」※コード修正
 */
//***************************************************

#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;

    Person(int age) : age(age)
    {
        std::cout << "１：共通constructor" << std::endl;
    };

public:
    Person() : Person(-1)
    {
        std::cout << "２：引数なしconstructor" << std::endl;
    };

    Person(std::string name, int age) : Person(age)
    {
        std::cout << "３：引数付きconstructor、age のみ初期化" << std::endl;
        set_name(name);
    };

    Person(const Person &p)
    {
        std::cout << "４：copy constructor" << std::endl;

        set_name(p.get_name());
        set_age(p.get_age());
    };

    //setter******************************************
    void set_name(std::string name)
    {
        this->name = name;
    };

    void set_age(int age)
    {
        this->age = age;
    };

    //getter******************************************
    std::string get_name() const
    {
        return name;
    };

    int get_age() const
    {
        return age;
    };
};

int main(void)
{
    // Person Nanashi(); //何もナシ
    Person Kei2("Kei Nishikori", 30); //１⇒３
    Kei2.get_age();
    // Person copy(Kei);

    // std::cout << copy.get_name() << std::endl;
    // std::cout << copy.get_age() << std::endl;

    return 0;
}