#include <stdio.h>
#include <string>
#include "example_3.h"
#include <cstring>
#include <vector>
#define String string
using namespace std;
using namespace std;
void LVSubVI_gameFunc(){
    /*feedback and shift regs. declarations */
    vector<String> shiftRegister_645;
    bool shiftRegisterInitBool_645 = true;
    
    /* END feedback and shift regs declarations */
    String wireUID_633_;
    String wireUID_693_ = "Guess number.\n";
    long wireUID_528_ = 42;
    String wireUID_778_ = "";
    String wireUID_503_ = "Type your name: ";
    String wireUID_398_ = "Welcome at DEMO Game.\n";
    printf("%s",&wireUID_398_[0]);
    printf("%s",&wireUID_503_[0]);
    wireUID_778_.resize(strlen(&wireUID_778_[0]) == 0?256:strlen(&wireUID_778_[0])); //first create some space in string buffer if empty to be sure that there is some space at least
    scanf ("%s",&wireUID_778_[0]);
    wireUID_778_.resize(strlen(&wireUID_778_[0])); //resize string to its size
    wireUID_633_ = wireUID_778_; //output assignement
    /* FlatSequenceFrame */
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    String wireUID_972_ = "\n";
    String wireUID_950_;
    String wireUID_929_ = "Your name is: ";
    String wireUID_587_ = wireUID_633_;
    wireUID_950_ = wireUID_929_ + wireUID_587_ + wireUID_972_;
    printf("%s",&wireUID_950_[0]);
    
    
    
     //frame output assignemnts
    /* end FlatSequenceFrame */
    /***** BEGIN WhileLoop ********/
    bool wireUID_2681_; //LoopEndRef.
    int iteratorUID_418 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_645){
            shiftRegister_645.push_back(wireUID_693_);
            shiftRegisterInitBool_645 = false;
        } //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_155_;
        long wireUID_877_ = 0;
        long wireUID_1027_ = wireUID_528_;
        bool wireUID_1687_;
        String wireUID_674_ = shiftRegister_645.front(); shiftRegister_645.erase(shiftRegister_645.begin());
        String wireUID_638_;
        String wireUID_2919_;
        bool wireUID_2865_;
        String wireUID_2731_;
        bool wireUID_2286_;
        printf("%s",&wireUID_674_[0]);
        scanf("%d", &wireUID_877_);
        wireUID_155_ = wireUID_877_;
        wireUID_1687_ = wireUID_155_ > wireUID_1027_;
        wireUID_2286_ = wireUID_155_ < wireUID_1027_;
        wireUID_2865_ = wireUID_1027_ == wireUID_155_;
        /***** BEGIN CaseStructure ********/
        switch(wireUID_1687_){
            case true:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                String wireUID_2580_ = "You gessed TOO HIGH.\nTry again:";
                
                
                 /* C code */
                wireUID_2731_ = wireUID_2580_; /* output assgn. */
            }
            break;
            case false:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                
                
                 /* C code */
             /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        /***** BEGIN CaseStructure ********/
        switch(wireUID_2286_){
            case true:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                String wireUID_2603_ = "You gessed TOO LOW.\nTry again: ";
                
                
                 /* C code */
                wireUID_2919_ = wireUID_2603_; /* output assgn. */
            }
            break;
            case false:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                String wireUID_2708_ = wireUID_2731_;
                
                
                 /* C code */
                wireUID_2919_ = wireUID_2708_; /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        /***** BEGIN CaseStructure ********/
        switch(wireUID_2865_){
            case true:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                String wireUID_848_ = "You WIN.\n";
                bool wireUID_2666_ = true;
                printf("%s",&wireUID_848_[0]);
                
                
                 /* C code */
                wireUID_2681_ = wireUID_2666_; /* output assgn. */
            }
            break;
            case false:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                String wireUID_2474_ = wireUID_2919_;
                
                
                 /* C code */
                wireUID_638_ = wireUID_2474_; /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        
        
         //C code
        
        shiftRegister_645.push_back(wireUID_638_); //output assgn.
        iteratorUID_418++; //iterator increment
    }while(!wireUID_2681_); //negation because in LabVIEW it is when stop (oposite)
    
    /****** END WhileLoop */
    
    
    
} //SubVI not locked auto-generated call

void example_3(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    LVSubVI_gameFunc();
    
    
    
}

void setup(){
    example_3();
}
void loop(){
}
