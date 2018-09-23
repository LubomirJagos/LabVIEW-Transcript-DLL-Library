#include <stdio.h>
#include "example_2.h"

int main(void)
{
        //LuboJ. don't forget LabVIEW transcriptor prefix for SubVIs!
        
        LVSubVI_CppFunc();                            //there is used in call generated function prefix LVSubVI_
        for(int i = 0; i < 200; i++){
                //there is used in call generated function prefix LVSubVI_
                printf("%d\n", LVSubVI_Double(i));
        }
        LVSubVI_SimpleFunc2(10);
        return 0;
}
