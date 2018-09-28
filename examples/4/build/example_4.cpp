#include <stdio.h>
#include <string>
#include "example_4.h"
#include <vector>
#define String string
using namespace std;
void LVSubVI_lowpass1(double* SignalInput = 0,int elementsCount = 0,double* SigalOutput = 0){
    /*feedback and shift regs. declarations */
    vector<vector<double>> shiftRegister_2403;
    bool shiftRegisterInitBool_2403 = true;
    
    /* END feedback and shift regs declarations */
    vector<double> wireUID_3888_;
    long wireUID_4267_;
    double* wireUID_2880_ = SigalOutput;
    vector<double> wireUID_2152_;
    vector<double> wireUID_2461_ = vector<double>();
    int wireUID_2113_ = elementsCount;
    double* wireUID_2349_ = SignalInput;
    long wireUID_1500_;
    /* Don't know how to translate class "Generic ->GObject ->Node ->Structure ->MultiFrameStructure ->DisableStructure": "Diagram Disable Structure" */
    /* Don't know how to translate class "Generic ->GObject ->Node ->Structure ->MultiFrameStructure ->DisableStructure": "Diagram Disable Structure" */
    /**** BEGIN ForLoop *****/
    
    int iteratorUID_2019 = 0; //loop iterator
    for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_2113_; LVHardcodedCnt++){
        if (shiftRegisterInitBool_2403){
            shiftRegister_2403.push_back(wireUID_2461_);
            shiftRegisterInitBool_2403 = false;
        } // shift regs
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        vector<double> wireUID_2466_ = shiftRegister_2403.front(); shiftRegister_2403.erase(shiftRegister_2403.begin());
        vector<double> wireUID_2397_;
        double wireUID_2361_specialWire;
        long wireUID_2127_ = iteratorUID_2019 /*Diagram owned wire terminal*/;
        double* wireUID_2047_ = wireUID_2349_;
        wireUID_2361_specialWire = wireUID_2047_[wireUID_2127_];
        wireUID_2397_.insert(wireUID_2397_.end(), wireUID_2466_.begin(), wireUID_2466_.end());
        wireUID_2397_.insert(wireUID_2397_.end(), wireUID_2361_specialWire);
        
        
         /* C code*/
        
        shiftRegister_2403.push_back(wireUID_2397_); /* output assignements */
        iteratorUID_2019++; //iterator increment
    }
    wireUID_2152_ = shiftRegister_2403.front();
    /***** END ForLoop ******/
    wireUID_1500_ = wireUID_2152_.size();
    /**** BEGIN ForLoop *****/
    vector<vector<double>> feedbackNode_844;
    bool feedbackNodeInitBool_844 = true;
    
    vector<double> feedbackNode_1126;
    bool feedbackNodeInitBool_1126 = true;
    
    vector<double> feedbackNode_1100;
    bool feedbackNodeInitBool_1100 = true;
    
    vector<double> feedbackNode_1074;
    bool feedbackNodeInitBool_1074 = true;
    
    vector<double> feedbackNode_982;
    bool feedbackNodeInitBool_982 = true;
    
    vector<double> feedbackNode_956;
    bool feedbackNodeInitBool_956 = true;
    
    vector<double> feedbackNode_930;
    bool feedbackNodeInitBool_930 = true;
    
    vector<double> feedbackNode_904;
    bool feedbackNodeInitBool_904 = true;
    
    vector<double> feedbackNode_878;
    bool feedbackNodeInitBool_878 = true;
    
    vector<double> feedbackNode_743;
    bool feedbackNodeInitBool_743 = true;
    
    vector<double> feedbackNode_684;
    bool feedbackNodeInitBool_684 = true;
    
    vector<double> feedbackNode_658;
    bool feedbackNodeInitBool_658 = true;
    
    vector<double> feedbackNode_632;
    bool feedbackNodeInitBool_632 = true;
    
    vector<double> feedbackNode_606;
    bool feedbackNodeInitBool_606 = true;
    
    
    int iteratorUID_267 = 0; //loop iterator
    for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_1500_; LVHardcodedCnt++){
     // shift regs
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        double wireUID_1283_;
        vector<double> wireUID_862_A;
        vector<double> wireUID_865_ = vector<double>();
        double wireUID_1286_;
        double wireUID_1289_;
        double wireUID_1292_;
        double wireUID_1295_;
        double wireUID_1298_;
        double wireUID_1301_;
        double wireUID_1304_;
        double wireUID_1307_;
        double wireUID_1310_ = 0.000000;
        double wireUID_1313_ = 0.002092;
        double wireUID_1316_ = 0.000000;
        double wireUID_1319_ = 0.014270;
        double wireUID_1322_;
        double wireUID_1325_;
        double wireUID_1328_ = 0.040648;
        double wireUID_1331_ = 0.000000;
        double wireUID_1334_;
        double wireUID_1337_;
        double wireUID_1340_;
        double wireUID_1343_;
        double wireUID_1346_;
        double wireUID_1349_;
        double wireUID_1352_;
        double wireUID_1355_;
        double wireUID_1358_;
        double wireUID_1361_;
        double wireUID_1364_;
        double wireUID_1367_ = 0.082817;
        double wireUID_1370_;
        double wireUID_1373_ = 0.000000;
        double wireUID_1376_;
        double wireUID_1379_;
        double wireUID_1382_;
        double wireUID_1385_ = 0.000000;
        double wireUID_1388_ = 0.131856;
        double wireUID_1391_ = 0.171980;
        double wireUID_1394_ = 0.000000;
        double wireUID_1397_ = 0.000000;
        double wireUID_1400_ = 0.187522;
        double wireUID_1403_ = 0.171980;
        double wireUID_1406_ = 0.000000;
        vector<double> wireUID_1409_B;
        double wireUID_1412_ = 0.131856;
        double wireUID_1415_;
        double wireUID_1418_;
        double wireUID_1421_;
        double wireUID_1424_;
        double wireUID_1427_ = 0.000000;
        double wireUID_1430_;
        double wireUID_1433_;
        double wireUID_1436_;
        double wireUID_1439_;
        double wireUID_1442_;
        double wireUID_1445_;
        double wireUID_1448_;
        double wireUID_1451_;
        double wireUID_1454_ = 0.000000;
        double wireUID_1457_ = 0.082817;
        double wireUID_1460_ = 0.040648;
        double wireUID_1463_ = 0.000000;
        double wireUID_1466_ = 0.000000;
        double wireUID_1469_ = 0.014270;
        double wireUID_1472_ = 0.002092;
        double wireUID_1475_ = 0.000000;
        double wireUID_1478_;
        long wireUID_1481_ = iteratorUID_267 /*Diagram owned wire terminal*/;
        vector<double> wireUID_1484_ = wireUID_2152_;
        wireUID_1478_ = wireUID_1484_[wireUID_1481_];
        if (feedbackNodeInitBool_606){
            feedbackNode_606.push_back(wireUID_1475_);
            feedbackNodeInitBool_606 = false;
        }
        wireUID_1451_ = feedbackNode_606.front(); feedbackNode_606.erase(feedbackNode_606.begin());
        if (feedbackNodeInitBool_632){
            feedbackNode_632.push_back(wireUID_1466_);
            feedbackNodeInitBool_632 = false;
        }
        wireUID_1448_ = feedbackNode_632.front(); feedbackNode_632.erase(feedbackNode_632.begin());
        if (feedbackNodeInitBool_658){
            feedbackNode_658.push_back(wireUID_1463_);
            feedbackNodeInitBool_658 = false;
        }
        wireUID_1445_ = feedbackNode_658.front(); feedbackNode_658.erase(feedbackNode_658.begin());
        if (feedbackNodeInitBool_684){
            feedbackNode_684.push_back(wireUID_1454_);
            feedbackNodeInitBool_684 = false;
        }
        wireUID_1424_ = feedbackNode_684.front(); feedbackNode_684.erase(feedbackNode_684.begin());
        if (feedbackNodeInitBool_743){
            feedbackNode_743.push_back(wireUID_1427_);
            feedbackNodeInitBool_743 = false;
        }
        wireUID_1364_ = feedbackNode_743.front(); feedbackNode_743.erase(feedbackNode_743.begin());
        if (feedbackNodeInitBool_878){
            feedbackNode_878.push_back(wireUID_1406_);
            feedbackNodeInitBool_878 = false;
        }
        wireUID_1382_ = feedbackNode_878.front(); feedbackNode_878.erase(feedbackNode_878.begin());
        if (feedbackNodeInitBool_904){
            feedbackNode_904.push_back(wireUID_1397_);
            feedbackNodeInitBool_904 = false;
        }
        wireUID_1379_ = feedbackNode_904.front(); feedbackNode_904.erase(feedbackNode_904.begin());
        if (feedbackNodeInitBool_930){
            feedbackNode_930.push_back(wireUID_1394_);
            feedbackNodeInitBool_930 = false;
        }
        wireUID_1376_ = feedbackNode_930.front(); feedbackNode_930.erase(feedbackNode_930.begin());
        if (feedbackNodeInitBool_956){
            feedbackNode_956.push_back(wireUID_1385_);
            feedbackNodeInitBool_956 = false;
        }
        wireUID_1370_ = feedbackNode_956.front(); feedbackNode_956.erase(feedbackNode_956.begin());
        if (feedbackNodeInitBool_982){
            feedbackNode_982.push_back(wireUID_1373_);
            feedbackNodeInitBool_982 = false;
        }
        wireUID_1322_ = feedbackNode_982.front(); feedbackNode_982.erase(feedbackNode_982.begin());
        if (feedbackNodeInitBool_1074){
            feedbackNode_1074.push_back(wireUID_1331_);
            feedbackNodeInitBool_1074 = false;
        }
        wireUID_1298_ = feedbackNode_1074.front(); feedbackNode_1074.erase(feedbackNode_1074.begin());
        if (feedbackNodeInitBool_1100){
            feedbackNode_1100.push_back(wireUID_1316_);
            feedbackNodeInitBool_1100 = false;
        }
        wireUID_1295_ = feedbackNode_1100.front(); feedbackNode_1100.erase(feedbackNode_1100.begin());
        if (feedbackNodeInitBool_1126){
            feedbackNode_1126.push_back(wireUID_1310_);
            feedbackNodeInitBool_1126 = false;
        }
        wireUID_1307_ = feedbackNode_1126.front(); feedbackNode_1126.erase(feedbackNode_1126.begin());
        if (feedbackNodeInitBool_844){
            feedbackNode_844.push_back(wireUID_865_);
            feedbackNodeInitBool_844 = false;
        }
        wireUID_862_A = feedbackNode_844.front(); feedbackNode_844.erase(feedbackNode_844.begin());
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1436_ = wireUID_1451_ * wireUID_1472_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1433_ = wireUID_1448_ * wireUID_1469_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1430_ = wireUID_1445_ * wireUID_1460_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1421_ = wireUID_1424_ * wireUID_1457_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1415_ = wireUID_1364_ * wireUID_1412_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1352_ = wireUID_1382_ * wireUID_1403_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1340_ = wireUID_1379_ * wireUID_1400_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1349_ = wireUID_1376_ * wireUID_1391_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1346_ = wireUID_1370_ * wireUID_1388_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1334_ = wireUID_1322_ * wireUID_1367_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1325_ = wireUID_1298_ * wireUID_1328_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1304_ = wireUID_1295_ * wireUID_1319_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1301_ = wireUID_1307_ * wireUID_1313_;
        wireUID_1439_ = wireUID_1433_ + wireUID_1436_;
        wireUID_1442_ = wireUID_1421_ + wireUID_1430_;
        wireUID_1361_ = wireUID_1349_ + wireUID_1352_;
        wireUID_1337_ = wireUID_1325_ + wireUID_1334_;
        wireUID_1286_ = wireUID_1301_ + wireUID_1304_;
        wireUID_1418_ = wireUID_1442_ + wireUID_1439_;
        wireUID_1358_ = wireUID_1337_ + wireUID_1346_;
        wireUID_1355_ = wireUID_1415_ + wireUID_1418_;
        wireUID_1343_ = wireUID_1358_ + wireUID_1361_;
        wireUID_1292_ = wireUID_1343_ + wireUID_1340_;
        wireUID_1289_ = wireUID_1286_ + wireUID_1292_;
        wireUID_1283_ = wireUID_1289_ + wireUID_1355_;
        wireUID_1409_B.insert(wireUID_1409_B.end(), wireUID_862_A.begin(), wireUID_862_A.end());
        wireUID_1409_B.insert(wireUID_1409_B.end(), wireUID_1283_);
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        feedbackNode_606.push_back(wireUID_1478_);
        feedbackNode_632.push_back(wireUID_1451_);
        feedbackNode_658.push_back(wireUID_1448_);
        feedbackNode_684.push_back(wireUID_1445_);
        feedbackNode_743.push_back(wireUID_1424_);
        feedbackNode_878.push_back(wireUID_1364_);
        feedbackNode_904.push_back(wireUID_1382_);
        feedbackNode_930.push_back(wireUID_1379_);
        feedbackNode_956.push_back(wireUID_1376_);
        feedbackNode_982.push_back(wireUID_1370_);
        feedbackNode_1074.push_back(wireUID_1322_);
        feedbackNode_1100.push_back(wireUID_1298_);
        feedbackNode_1126.push_back(wireUID_1295_);
        feedbackNode_844.push_back(wireUID_1409_B);
        
        
         /* C code*/
        wireUID_3888_ = wireUID_1409_B;
         /* output assignements */
        iteratorUID_267++; //iterator increment
    }
    
    /***** END ForLoop ******/
    wireUID_4267_ = wireUID_3888_.size();
    /**** BEGIN ForLoop *****/
    
    int iteratorUID_4193 = 0; //loop iterator
    for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_4267_; LVHardcodedCnt++){
     // shift regs
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        double wireUID_4392_;
        long wireUID_4286_ = iteratorUID_4193 /*Diagram owned wire terminal*/;
        vector<double> wireUID_4368_ = wireUID_3888_;
        double* wireUID_4237_ = wireUID_2880_;
        wireUID_4392_ = wireUID_4368_[wireUID_4286_];
        wireUID_4237_[wireUID_4286_] = wireUID_4392_;
        
        
         /* C code*/
        
         /* output assignements */
        iteratorUID_4193++; //iterator increment
    }
    
    /***** END ForLoop ******/
    
    
    
} //SubVI not locked auto-generated call

void example_4(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_700_ = 3;
    double* wireUID_606_ = 0;
    double* wireUID_553_ = 0;
    LVSubVI_lowpass1(wireUID_606_,wireUID_700_,wireUID_553_);
    
    
    
}

void setup(){
    example_4();
}
void loop(){
}
