//***************************************************
/** 12/24 */
//***************************************************

#ifndef DOG_H
#define DOG_H

class CDog
{
public:
    CDog();  //コンスト
    ~CDog(); //デスト

    static void showNum(); //生成数カウントメソッド ※静的メンバ関数
    void bark();           //吠えるメソッド

private:
    int d_id;           //犬の番号
    static int d_count; //犬の数 ※静的メンバ変数
};

#endif //DOG_H