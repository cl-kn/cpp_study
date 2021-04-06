//***************************************************
/** 21/4/6
 * P279 「メンバー変数を参照で返す」
*/
//***************************************************

#include <iostream>
#include <string>

class Object
{
    std::string name;

public:
    Object(std::string name);

    const std::string &get_name() const;
};

Object::Object(std::string name) : name{name}
{
    //文字列をメンバ変数 name にコピー
}

const std::string &Object::get_name() const
{
    return name; //nameを参照で返す
}

int main(void)
{
    Object obj{"Big Object !!!!"};

    //メンバ変数への参照を取得
    const std::string &name = obj.get_name();
    std::cout << name << std::endl;

    return 0;
}