#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>

class Human
{
public:
    char *mName; // 氏名
    int mAge;    // 年齢

    //  コンストラクタ
    Human(char *name, int age);
    ~Human();// デストラクタ
};

Human::Human(char *name, int age)
{
    //  動的メモリ上に氏名を管理
    mName = (char *)malloc(strlen(name) + 1);

    strcpy(mName, name); //  氏名の設定
    mAge = age;          //  年齢の設定
}

int main()
{
    char name[] = "Taro Yamada";

    Human human1(name, 20);

    return 0; //  human1オブジェクト解体によって氏名がメモリリーク発生
}