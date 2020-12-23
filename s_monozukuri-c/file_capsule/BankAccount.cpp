#include <stdio.h>
#include <string.h>

#include "BankAccount.h"

BankAccount::BankAccount(const char *name, unsigned short pincode)
{
    //口座情報を初期化
    strcpy(mName, name);
    mPincode = pincode;
    mBalance = 0;
}

BankAccount::~BankAccount(){};

//氏名・預金残高を表示する関数
int BankAccount::printBalance()
{
    if (mBalance < 0)
    {
        return -1;
    }
    printf("-----------------------------\n");
    printf("%s様\n", mName);
    printf("%d円", mBalance);

    return 0;
}

//銀行口座への預け入れ
int BankAccount::depositMoney(unsigned long money)
{
    if (money < 0)
    {
        return -1;
    }

    mBalance += money;

    return 0;
}

//銀行口座からお金の引き出し
int BankAccount::withdrawalMoney(unsigned short pincode, unsigned long reqmoney)
{

    if (reqmoney < 0)
    {
        return -1;
    }

    if (pincode != mPincode)
    {
        return -2;
    }

    if (mBalance <= 0)
    {
        return -3;
    }

    mBalance -= reqmoney;

    return 0;
}