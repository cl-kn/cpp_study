//***************************************************
/** 12/23 */
//***************************************************

#ifndef CAR_H
#define CAR_H

//自動車クラス
class CCar
{
public:
    CCar();  //コンスト
    ~CCar(); //デスト

    void move();           //移動メソッド
    void supply(int fuel); //燃料補給メソッド
    void printCarInfo();   //車情報表示メソッド

private:
    int m_fuel;      //燃料
    int m_migration; //走行距離
    char *car_name;
};

#endif // CAR_H