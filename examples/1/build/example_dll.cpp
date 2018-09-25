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
long LVSubVI_Sqaure_Number(long number_in = 0){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_109_ = number_in;
    long wireUID_126_;
    wireUID_126_ = wireUID_109_ * wireUID_109_;
    
    long number_out = wireUID_126_;
    
    return number_out;
} //SubVI not locked auto-generated call
vector<long> LVSubVI_arrayAdd(vector<long> Array2 = vector<long>(),vector<long> Array = vector<long>()){
    /*feedback and shift regs. declarations */
    vector<vector<long>> shiftRegister_728;
    bool shiftRegisterInitBool_728 = true;
    
    /* END feedback and shift regs declarations */
    long wireUID_292_;
    vector<long> wireUID_579_ = Array;
    vector<long> wireUID_1072_;
    vector<long> wireUID_803_ = vector<long>();
    vector<long> wireUID_611_ = Array2;
    wireUID_292_ = wireUID_579_.size();
    /**** BEGIN ForLoop *****/
    
    int iteratorUID_268 = 0; //loop iterator
    for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_292_; LVHardcodedCnt++){
        if (shiftRegisterInitBool_728){
            shiftRegister_728.push_back(wireUID_803_);
            shiftRegisterInitBool_728 = false;
        } // shift regs
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        vector<long> wireUID_725_ = shiftRegister_728.front(); shiftRegister_728.erase(shiftRegister_728.begin());
        vector<long> wireUID_723_;
        long wireUID_695_;
        long wireUID_651_;
        long wireUID_640_;
        vector<long> wireUID_590_ = wireUID_611_;
        vector<long> wireUID_558_ = wireUID_579_;
        long wireUID_522_ = iteratorUID_268 /*Diagram owned wire terminal*/;
        wireUID_640_ = wireUID_558_[wireUID_522_];
        wireUID_651_ = wireUID_590_[wireUID_522_];
        wireUID_695_ = wireUID_651_ + wireUID_640_;
        wireUID_723_.insert(wireUID_723_.end(), wireUID_725_.begin(), wireUID_725_.end());
        wireUID_723_.insert(wireUID_723_.end(), wireUID_695_);
        
        
         /* C code*/
        
        shiftRegister_728.push_back(wireUID_723_); /* output assignements */
        iteratorUID_268++; //iterator increment
    }
    wireUID_1072_ = shiftRegister_728.front();
    /***** END ForLoop ******/
    
    vector<long> numberOut = wireUID_1072_;
    
    return numberOut;
} //SubVI not locked auto-generated call
long LVSubVI_sign(long number_in = 0){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_704_;
    long wireUID_671_ = 0;
    long wireUID_665_;
    long wireUID_224_ = number_in;
    bool wireUID_550_;
    bool wireUID_263_;
    wireUID_263_ = (wireUID_224_ > 0);
    wireUID_550_ = (wireUID_224_ < 0);
    /***** BEGIN CaseStructure ********/
    switch(wireUID_263_){
        case true:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            long wireUID_751_ = 1;
            
            
             /* C code */
            wireUID_704_ = wireUID_751_; /* output assgn. */
        }
        break;
        case false:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            long wireUID_765_ = wireUID_671_;
            
            
             /* C code */
            wireUID_704_ = wireUID_765_; /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    /***** BEGIN CaseStructure ********/
    switch(wireUID_550_){
        case true:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            long wireUID_808_ = -1;
            
            
             /* C code */
            wireUID_665_ = wireUID_808_; /* output assgn. */
        }
        break;
        case false:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            long wireUID_824_ = wireUID_704_;
            
            
             /* C code */
            wireUID_665_ = wireUID_824_; /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    
    long number_out = wireUID_665_;
    
    return number_out;
} //SubVI not locked auto-generated call

void example_dll(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_820_;
    long wireUID_787_ = 0;
    vector<long> wireUID_585_;
    vector<long> wireUID_493_ = vector<long>();
    vector<long> wireUID_415_ = vector<long>();
    long wireUID_484_;
    long wireUID_451_ = 0;
    long wireUID_333_;
    long wireUID_300_ = 0;
    wireUID_333_ = LVSubVI_Double(wireUID_300_);
    LVSubVI_CppFunc();
    wireUID_484_ = LVSubVI_Sqaure_Number(wireUID_451_);
    wireUID_585_ = LVSubVI_arrayAdd(wireUID_415_,wireUID_493_);
    wireUID_820_ = LVSubVI_sign(wireUID_787_);
    
    
    
}

void setup(){
    example_dll();
}
void loop(){
}
