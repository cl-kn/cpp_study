//***************************************************
/** 12/21 関数オーバーロード、データ型の呼び出し順位 */
//***************************************************

#include <stdio.h>

void printNum(int num) //整数型系統
{
    printf("int: %d\n", num);
}

void printNum(long num) //整数型系統
{
    printf("long: %d\n", num);
}

void printNum(float num) //浮動小数点型系統
{
    printf("float: %f\n", num);
}

void printNum(double num) //浮動小数点型系統
{
    printf("double: %lf\n", num);
}

int main(void)
{
    printNum(100);  //int
    printNum(3.14); //double

    return 0;
}