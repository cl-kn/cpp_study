//***************************************************
/** new／delete演算子【オブジェクトの動的生成と解放】
 * https://monozukuri-c.com/langcpp-new-delete/
 * 12/10
 */
//***************************************************

#include <stdio.h>

class POS
{
public:
    int x;
    int y;
};

int main(void)
{
    //動的メモリの確保 new, delete
    int *pNum1 = new int;         //初期化ナシ
    short *pNum2 = new short(50); //初期化アリ

    *pNum1 = 100;

    printf("Num1:%d\n", *pNum1);
    printf("Num2:%d\n", *pNum2);

    //動的メモリ解放
    delete pNum1;
    delete pNum2;

    //*************************************************
    //配列の動的メモリ確保 new[], delete[]
    short *pArray = new short[5];

    for (int i = 0; i < 5; i++)
    {
        pArray[i] = i;
        printf("i = %d\n", pArray[i]);
    }
    //配列の動的メモリ開放
    delete[] pArray;

    printf(">> delete[] pArray\n");
    for (int i = 0; i < 5; i++)
    {
        printf("i = %d\n", pArray[i]);
    }

    //*************************************************
    //クラスオブジェクトの確保と解放
    POS *pPos = new POS;
    delete pPos;

    //オブジェクト配列の確保と解放
    POS *pPosArray = new POS[5];
    delete[] pPosArray;

    //*************************************************
    //動的メモリの配列を、0で初期化
    int *pArray2 = new int[5]();

    for (int i = 0; i < 5; i++)
    {
        printf("pArray2[%d] = %d\n", i, pArray2[i]);
    }

    return 0;
}

/**
 *「new演算子」
 * 概要：確保された動的メモリへのポインタが取得できる
 *
 * new データ型名;
 * new データ型名(初期値);
 *
 * int * pNum1 = new int;
 *
 *「delete演算子」
 * 概要：new演算子で確保した動的メモリを解放する
 *
 *「new[]」
 * 概要：[]内に指定した要素数分の動的メモリを確保する
 *
 *「delete[]」
 * 概要：new[]で確保した動的メモリを解放する
 *
 *「動的メモリの配列を、0で初期化する」
 * int *pArray2 = new int[5]();
 * ↑[配列要素数]の隣に()を足す
 *
 *
*/