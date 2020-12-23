//***************************************************
/** 12/21 */
//***************************************************

#ifndef POS2_H
#define POS2_H

class POS2
{
public:
    int x;
    int y;

    POS2();
    void setPos(int x, int y);
    POS2 operator+(POS2 rhs);
    POS2 operator+(int value);
};

class POS3
{
public:
    int x = 0;
    int y = 0;
};

#endif //POS2_H