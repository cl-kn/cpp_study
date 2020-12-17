#include "POS.h"

POS::POS()
{
    this->x = 0;
    this->y = 0;
}

void POS::setPos()
{
    this->x = 0;
    this->y = 0;
}

void POS::setPos(int x, int y)
{
    this->x = x;
    this->y = y;
}

void POS::setPos(S_Pos3D pos3d)
{
    this->x = pos3d.x;
    this->y = pos3d.y;
}