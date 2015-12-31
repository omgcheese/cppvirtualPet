//
//  Vpet.h
//  virtualpet
//
//  Created by Jinwook Lee on 2015-12-30.
//  Copyright (c) 2015 Jinwook Lee. All rights reserved.
//

#ifndef virtualpet_Vpet_h
#define virtualpet_Vpet_h

class Vpet {
    //can be data memeber or function memeber
    
    public:
    
    //constructor (Special Member Function)
    Vpet(int, bool);
    
    //constructor without parameters (default value)
    Vpet();
    
    //Member Function
    
    //not returning any value; thus void
    void feedPet(int);
    
    //fetch hungry and weight attributes
    bool getHungry();
    int getWeight();
    
    private:
    
    bool hungry;
    int weight;
    
    
    
};


#endif
