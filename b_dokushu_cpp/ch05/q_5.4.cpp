//***************************************************
/** 3/18
 * 練習問題 5.4
 * １：コンストラクタがオーバーロードしているクラスを作り、new演算子で動的確保した時に、コンストラクタを呼び分ける
 * ２：１で作成したクラスで、配列の動的確保を行う。各要素が違うコンストラクタで初期化されるようにする
 */
//***************************************************

#include <iostream>

class Person
{
    int age;
    std::string name;

public:
    Person(int age, std::string name) : age(age), name(name)
    {
    }

    Person()
    {
        Person(0, "no name");
    }

    ~Person() {}

    void printInfo() const;
};

void Person::printInfo() const
{
    std::cout << "age: " << this->age << std::endl
              << "name: " << this->name << std::endl;
}

int main(void)
{
    Person *p1 = new Person{10, "harry"};
    Person *p2 = new Person{};
    p1->printInfo();
    p2->printInfo();



    return 0;
}