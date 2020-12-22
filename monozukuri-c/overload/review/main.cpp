#include <stdio.h>
#include "PERSON.h"

//***************************************************
/**クラスの練習
 * 12/21
 */
//***************************************************

int main(void)
{
    PERSON person1;
    person1.setName("Yamato");
    person1.setAge(20);
    person1.setHeight_Weight(180,78);
    person1.printPerson();

    return 0;
}