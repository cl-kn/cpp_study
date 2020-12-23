#ifndef BankAccount_h
#define BankAccount_h

#define D_ACCOUNT_NAMESIZE (64) //氏名サイズ

class BankAccount
{
private:
    //メンバ変数
    char mName[D_ACCOUNT_NAMESIZE]; //登録氏名
    unsigned short mPincode;        //暗証番号
    unsigned long mBalance;         //預金残高

public:
    //コンストラクタ
    BankAccount(const char *name, unsigned short pincode);
    //デストラクタ
    ~BankAccount();

    //メンバ関数
    int printBalance();
    int depositMoney(unsigned long money);
    int withdrawalMoney(unsigned short pincode, unsigned long reqmoney);
};

#endif