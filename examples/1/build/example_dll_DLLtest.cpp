#include <stdio.h>
#include <cstring>
#include <string>
#include "example_dll.h"
using namespace std;
int main(int argc, char* argv[])
{
        //LuboJ. don't forget LabVIEW transcriptor prefix for SubVIs!
        
        /*
        LVSubVI_CppFunc();                            //there is used in call generated function prefix LVSubVI_
        for(int i = 0; i < 200; i++){
                //there is used in call generated function prefix LVSubVI_
                printf("%d\n", LVSubVI_Double(i));
        }

        return 0;
       */

//  char str [80];
string str = "";// str.resize(256);
string str2 = "lubo";
  printf ("Enter your family name: ");
  str.resize(strlen(&str[0]) == 0?256:strlen(&str[0]));  scanf ("%s",&str[0]); str.resize(strlen(&str[0]));  
  printf("Your name: %s, length is: %d", &str[0], str.length());
  str2 = str + str2;
  printf("2nd string: %s, length: %d\n",&str2[0],str2.length());
  return 0;
}

