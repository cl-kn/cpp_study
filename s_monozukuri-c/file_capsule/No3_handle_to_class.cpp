//***************************************************
/** ハンドルのクラス化【C言語のハンドルをクラスで再構築】
 * https://monozukuri-c.com/langcpp-handle-to-class/
 * 12/14 ,12/16 , 12/17
 * 「BankAccount.h」「BankAccount.cpp」を使う側のプログラム
 */
//***************************************************

#include "BankAccount.h"

int main()
{
    //----------------------------------------
    //スタックメモリのクラスオブジェクトを生成
    BankAccount no1_harry("Pochi", 1234);

    no1_harry.printBalance();
    no1_harry.depositMoney(5000);
    no1_harry.printBalance();
    no1_harry.withdrawalMoney(1234, 1000);
    no1_harry.printBalance();

    //----------------------------------------
    //動的メモリのクラスオブジェクトを生成
    BankAccount *no2_Taro = new BankAccount("Taro", 5678);

    no2_Taro->printBalance();
    no2_Taro->depositMoney(10000);
    no2_Taro->printBalance();
    no2_Taro->withdrawalMoney(5678, 3000);
    no2_Taro->printBalance();

    delete no2_Taro; //オブジェクトの解放

    return 0;
}

/**「プログラム実行時におけるメモリの使われ方」
 * ➀ コード領域 （命令）
 * ➁ データ領域 （GB変数、GBオブジェクト、static変数、staticオブジェクト）
 * ➂ スタック領域 （引数、ローカル変数、ローカルオブジェクト）
 * ➃ ヒープ領域 （）
 *
 * ※プログラム起動時に、➀・➁は固定的に決まり変化しない為、プログラム実行中は常にその領域内データへとアクセス可能
 *
 * ※➂は起動時に領域サイズが固定されるが、呼び出されるまでは空っぽ。呼び出されたタイミングでスタック領域に確保され、関数を抜けると再び解放される。よって、スタック領域は関数の中だけの使用
 *
 * ※➃は、new で作成された領域が格納される。ヒープ領域のサイズは未固定で、newのたびに拡張し、delete するたびに縮小される。new したオブジェクトのポインタをグローバル変数・ローカル変数に入れても実態はヒープ領域に格納される。
 * ⇒⇒したがって、new したら delete する！！
 *
*/