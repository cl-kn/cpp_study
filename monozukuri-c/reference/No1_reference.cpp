//***************************************************
/** 参照【関数におけるポインタ渡しと参照渡しの違い】
 * https://monozukuri-c.com/langcpp-funclist-reference/
 * 12/10, 12/11
 */
//***************************************************

#include <stdio.h>

//参照を引数で受け取る関数
void func_reference(int &num)
{
    num = 100;
}

//ポインタver
void func_pointer(int *num)
{
    *num = 100;
}

//ローカル変数への参照を返す関数
//不正な操作
// int &func_error()
// {
//     int numxx = 50;
//     return numxx;
// }

int main(void)
{
    short num = 50;      //変数定義
    short &refnum = num; //参照変数の定義

    char c = 'a';
    // char &cc; 未初期化の為、コンパイルエラー

    printf("num = %d\n", num);

    refnum = 100; //refnumはnum を指すので、値の変更が適用される

    printf(">>refnum = 100\n");
    printf("num = %d\n", num);

    //以下は同一アドレス
    printf(">>num address = 0x%p\n", &num);
    printf(">>refnum address = 0x%p\n", &refnum);

    //*******************************************************
    //参照を引数に持つ関数の、参照渡し
    int x1 = 15;
    int x2 = 1;
    printf(">> func_reference\n");
    printf("x1 = %d\n", x1); //x = 15
    func_reference(x1);
    printf("x1 = %d\n", x1); // x = 100

    //ポインタver
    printf(">> func_pointer\n");
    printf("x2 = %d\n", x2); //x = 1
    func_pointer(&x2);
    printf("x2 = %d\n", x2); // x = 100

    //*******************************************************
    //戻り値を参照とする場合
    //不正：ローカル変数への参照を返す
    // int &numx = func_error(); //warning
    // numx = 99;                //warning

    //*******************************************************
    //配列に対する参照
    //要素数の指定が必要なため、ポインターに軍配
    int array[5] = {0};
    int(&ref_array)[5] = array;

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        ref_array[i] = i * 100;
    }

    printf(">>ref_array[i] = i * 100\n");

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}

/**「参照機能（エイリアス＝＝別名）」
 * 変数定義で生成した変数に、別名のラベルを張り付け、参照できる機能
 * 参照は、同一メモリを指し示す！
 *
 * 参照先データ型 & 参照変数名 = 参照先の変数名;
 * ※必ず初期化する
 * ※「&」を付ける＝「参照変数」であることを示す
 *
 * short num = 50;
 * short & refnum = num; //初期化している
 *
 * 戻り値で「参照」を返す変数は、staticかメンバ変数
 * ※ローカル変数の参照を戻り値で返す関数は、関数を利用する側で、受け取った参照の変数から値を更新した場合、関数側のreturn 実行後でローカル変数は破棄されている為（スタックメモリ）、破棄されたメモリへのアクセスとなってしまい、不正な操作となる
 *
 * 「参照」は、初期化した変数に対する別名（エイリアス）の為、NULLポインタがない
 *
 * 「参照」
 * ・クラスオブジェクトを渡す時
 *
 * 「ポインタ」
 * ・int型などの組み込み型を渡すとき
 * ・配列を渡すとき
 *
 * ・アドレス演算子がある為、呼び出し側で値が書き換わる可能性を検知できる
 *
*/