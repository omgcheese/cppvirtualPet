//
//  Vpet.cpp
//  virtualpet
//
//  Created by Jinwook Lee on 2015-12-30.
//  Copyright (c) 2015 Jinwook Lee. All rights reserved.
//

#include "Vpet.h"

Vpet::Vpet(int w, bool h): weight(w), hungry(h) {
}

Vpet::Vpet():weight(100),hungry(true) {
}

void Vpet::feedPet(int amount) {
    if(amount >= 0.5 * weight) {
        hungry = false;
    }
    else {
        hungry = true;
    }
    
    weight = weight + 0.25 * amount;
}

int Vpet::getWeight() {
    return weight;
}

bool Vpet::getHungry() {
    return hungry;
}
