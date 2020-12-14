//***************************************************
/** ハンドルのクラス化【C言語のハンドルをクラスで再構築】
 * https://monozukuri-c.com/langcpp-handle-to-class/
 * 12/14
 * 「BankAccount.h」「BankAccount.cpp」を使う側のプログラム
 */
//***************************************************

#include "BankAccount.h"

int main()
{
    //----------------------------------------
    //スタックメモリのクラスオブジェクトを生成
    BankAccount no1_harry("Harry", 1234);

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