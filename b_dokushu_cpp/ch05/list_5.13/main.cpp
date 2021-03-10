//***************************************************
/** 21/3/9
 * オブジェクト配列の動的確保
 */
//***************************************************

#include <iostream>

class Object
{
    std::string name;

public:
    Object() : Object("NO NAME"){};                   //引数ありconstructor
    explicit Object(std::string name) : name(name) {} //引数なしconstructor
    ~Object();

    void show_name() const;
};

//destructor
Object::~Object()
{
    std::cout << "[Object] dest" << std::endl;
}

void Object::show_name() const
{
    std::cout << "object name:" << name << std::endl;
}

int main(void)
{
    //配列のnew演算子 ※戻り値型はポインター
    Object *obj = new Object[5]{
        Object{"first"},
        Object{"second"},
        //これ以降の要素はデフォルトコンストラクタで初期化
    };

    obj[0].show_name();
    obj[1].show_name();
    obj[2].show_name();

    //配列のdelete演算子。確保した要素分の、各要素のデストラクタが全て呼ばれる
    delete[] obj;

    return 0;
}