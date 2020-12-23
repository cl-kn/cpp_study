//***************************************************
/** コピーコンストラクタ【オブジェクトを使った初期化方法】
 * https://monozukuri-c.com/langcpp-copyconstructor/
 * 12/11
 * コピーコンストラクタが必要な理由
 * 引数にポインタではなく、参照を受け取る理由
 * 資源を管理するクラスのコピー問題
 */
//***************************************************
#include <stdio.h>
#include <string.h>

class Human
{
public:
    char *mName; //氏名

    Human(const char *name);
    ~Human();
};

//コンストラクタ（引数：ポインタ）
#ifdef 0
Human::Human(const char *name)
{
    //ヒープメモリ確保
    mName = new char[strlen(name) + 1]();
    //引数の氏名をメンバ変数にコピー
    strcpy(mName, name);
}
#endif

//コンストラクタ（引数：参照）
Human::Human(const Human &human)
{
    //ヒープメモリ確保
    mName = new char[strlen(human.mName) + 1]();
    //引数の氏名をメンバ変数にコピー
    strcpy(mName, human.mName);
}

//デストラクタ
Human::~Human()
{
    //ヒープメモリを解放
    delete[] mName;
}

int main()
{
    //コンストラクタの引数がポインタの場合、
    // human1, human2 両オブジェクトは、同一の動的メモリを指す
    //引数が参照の場合、
    //human1, human2 両オブジェクトは動的メモリ内で別々の領域にある
    Human human1("Jones");
    Human human2(human1);

    printf("%s\n", human1.mName); //Jones
    printf("%s\n", human2.mName); //Jones
}

/**
 * サイトには、例外で停止するとあるが、例外は出ない
 * human2のデストラクタ実行後に、human1のデストラクタが実行？
 *
 *
 *
*/