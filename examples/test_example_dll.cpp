#include <stdio.h>
#include "example_dll.h"

int main(void)
{
        //LuboJ. don't forget LabVIEW transcriptor prefix for SubVIs!
        
        printf("%d\n", LVSubVI_Double(7));    //there is used in call generated function prefix LVSubVI_
        LVSubVI_CppFunc();                     //there is used in call generated function prefix LVSubVI_

        return 0;
}