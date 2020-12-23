//***************************************************
/** new／delete演算子【オブジェクトの動的生成と解放】
 * https://monozukuri-c.com/langcpp-new-delete/
 * 12/10
 *
 * C++で、メモリ確保・開放にnew / delete を使い、
 * malloc / free を使わない理由
 */
//***************************************************

#include <stdio.h>
#include <stdlib.h>

class POS
{
public:
    int x;
    int y;

    POS();
    ~POS();
};

POS::POS()
{
    x = 10;
    y = 20;
    printf("コンストラクタ\n");
}

POS::~POS()
{
    printf("デストラクタ\n");
}

int main(void)
{
    // POS *pos = new POS;
    // delete pos;

    //以下の malloc / free関数では、「コンストラクタ」「デストラクタ」呼び出しがない
    //よって、適切にオブジェクト生成・解体が出来ない
    POS *pos = (POS *)malloc(sizeof(POS));
    free(pos);

    return 0;
}