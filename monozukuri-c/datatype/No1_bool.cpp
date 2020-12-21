//***************************************************
/** bool型【trueとfalseを管理する新しいデータ型】
 * https://monozukuri-c.com/langcpp-funclist-bool/
 * 12/21
 */
//***************************************************

#include <stdio.h>

int main(void)
{
    bool flg = true;
    bool tmp; // 初期値：false(0)

    int num = 10;

    if (flg == false)
    {
        printf("false\n");
    }
    else
    {
        printf("true\n");
    }

    if (num == 100)
    {
        printf("%d\n", num);
    }

    printf("%d", tmp);

    return 0;
}

/**
 * C++ には、「boolean」型が追加された。
 * [1] , [0] の値を持ち、true , false を表す
 *
 * int型、double型などの、「-1, 0, 1, 44.5」の値をboolに代入すると、キャストされ、１以上の値、0未満の値は「１」、0、0.0 の値は「０」に変換される
 *
 *
*/