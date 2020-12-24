//***************************************************
/** 12/24 */
//***************************************************

#ifndef DOG_H
#define DOG_H

class CDog
{
public:
    CDog();
    ~CDog();

    static void showNum();
    void bark();

private:
    int d_id;
    static int d_count;
};

#endif //DOG_H