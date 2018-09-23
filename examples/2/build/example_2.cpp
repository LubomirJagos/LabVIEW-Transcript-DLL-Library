#include <stdio.h>
#include <string>
#include "example_2.h"
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
void LVSubVI_SimpleFunc2(long cyclesCnt = 42){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_348_ = cyclesCnt;
    /**** BEGIN ForLoop *****/
    
    int iteratorUID_323 = 0; //loop iterator
    for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_348_; LVHardcodedCnt++){
     // shift regs
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        String wireUID_656_ = "Hello world.";
        puts(&wireUID_656_[0]);
        
        
         /* C code*/
        
         /* output assignements */
        iteratorUID_323++; //iterator increment
    }
    
    /***** END ForLoop ******/
    
    
    
} //SubVI not locked auto-generated call

void example_2(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_304_ = 42;
    long wireUID_333_;
    long wireUID_300_ = 0;
    wireUID_333_ = LVSubVI_Double(wireUID_300_);
    LVSubVI_CppFunc();
    LVSubVI_SimpleFunc2(wireUID_304_);
    
    
    
}

void setup(){
    example_2();
}
void loop(){
}
