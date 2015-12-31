//
//  main.cpp
//  virtualpet
//
//  Created by Jinwook Lee on 2015-12-30.
//  Copyright (c) 2015 Jinwook Lee. All rights reserved.
//

#include <iostream>
#include "Vpet.h"

using namespace std;

int main() {

    Vpet cheese(150, false);
    cheese.feedPet(25);
    
    Vpet rofl;
    rofl.feedPet(100);
    
    cout << "Cheese weighs: " << cheese.getWeight() << endl;
    cout << "rofl weighs: " << rofl.getWeight() << endl;
    rofl.getWeight();
    return 0;
}
