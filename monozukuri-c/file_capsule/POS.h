#ifndef POS_H
#define POS_H

class POS
{
private:
    int x;
    int y;

public:
    POS();
    int setPos(int tmp_x, int tmp_y);
    void printPos(void);

#if 0
    //以下は、ヘッダファイルに記述するクラスの型定義の中で、メンバ関数の定義を行っている。「インライン関数」
    int setPos()
    {
        x = tmp_x;
        y = tmp_x;
    }

#endif
};

#endif