//***************************************************
/** 12/22 「const」 */
//***************************************************

#ifndef POS_H
#define POS_H

class POS
{
private:
    int x;
    int y;

public:
    POS() : x(0), y(0) {}

    //「const」付きのメンバ関数
    int get_x() const;
    int get_y() const;

    void set_x(int x);
    void set_y(int y);
};

#endif //POS_H