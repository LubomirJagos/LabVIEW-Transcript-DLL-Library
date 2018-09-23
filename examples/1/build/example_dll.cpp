#include <stdio.h>
#include <string>
#include "example_dll.h"
#include <vector>
#include <cstring>
#define String string
using namespace std;
long LVSubVI_Double(long number_in = 0){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_721_ = 100;
    long wireUID_108_ = number_in;
    bool wireUID_673_;
    long wireUID_126_;
    wireUID_673_ = wireUID_108_ > wireUID_721_;
    /***** BEGIN CaseStructure ********/
    switch(wireUID_673_){
        case true:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            long wireUID_192_ = 2;
            long wireUID_483_;
            long wireUID_471_ = wireUID_108_;
            wireUID_483_ = wireUID_192_ * wireUID_471_;
            
            
             /* C code */
            wireUID_126_ = wireUID_483_; /* output assgn. */
        }
        break;
        case false:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            long wireUID_792_ = 7;
            long wireUID_795_;
            long wireUID_798_ = wireUID_108_;
            wireUID_795_ = wireUID_792_ * wireUID_798_;
            
            
             /* C code */
            wireUID_126_ = wireUID_795_; /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    
    long number_out = wireUID_126_;
    
    return number_out;
} //SubVI not locked auto-generated call
using namespace std;
void LVSubVI_CppFunc(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    String wireUID_354_ = "CppFunc";
    puts(&wireUID_354_[0]);
    
    
    
} //SubVI not locked auto-generated call

void example_dll(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_333_;
    long wireUID_300_ = 0;
    wireUID_333_ = LVSubVI_Double(wireUID_300_);
    LVSubVI_CppFunc();
    
    
    
}

void setup(){
    example_dll();
}
void loop(){
}
