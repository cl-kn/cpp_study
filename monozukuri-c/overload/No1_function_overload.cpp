//***************************************************
/** 関数のオーバーロード【同名の関数を複数定義できる機能】
 * https://monozukuri-c.com/langcpp-function-overload/
 * 12/17, 12/18
 */
//***************************************************
#include <stdio.h>

class ANIMAL
{
public:
    //const
    const char *dog;
    const char *cat;

    ANIMAL(void);
    ANIMAL(char *dog_name, char *cat_name);
};

//コンストラクタ１
ANIMAL::ANIMAL(void)
{
    //標準C++で、文字列リテラルは const char 配列
    this->dog = "dog";
    this->cat = "cat";
}

//コンストラクタ２
//オーバーロード
ANIMAL::ANIMAL(char *dog_name, char *cat_name)
{
    this->dog = dog_name;
    this->cat = cat_name;
}

//関数のオーバーロード
//関数の概要は同じで、引数により内容を変更したい時などに使う
void printNum(int num)
{
    printf("func1 int : %d\n", num);
}

void printNum(double num)
{
    printf("func2 double : %.3lf\n", num);
}

void printNum(int num1, double num2)
{
    printf("func3 int %d : double %.3lf\n", num1, num2);
}

int main()
{
    ANIMAL animal = ANIMAL();
    printf("%s", animal.dog);

    printNum(10);
    printNum(3.14);
    printNum(50, 1.23);
}