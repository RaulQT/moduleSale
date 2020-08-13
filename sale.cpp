//
//  Sale.cpp
//  C++Mastery
//
//  Created by Raul on 7/17/18.
//  Copyright © 2018 Raul. All rights reserved.
//

#include "sale.h"

Sale::Sale(){
}

Sale::Sale(double c,double r){
    itemCost=c;
    taxRate=r;
}
double Sale::getItemCost() const{
    return itemCost;
}
double Sale::getTaxRate() const{
    return taxRate;
}
double Sale::getTax() const{
    return(itemCost*taxRate);
}
double Sale::getTotal() const{
    return (itemCost+getTax());
}
