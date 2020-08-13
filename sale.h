//
//  Sale.h
//  C++Mastery
//
//  Created by Raul on 7/17/18.
//  Copyright © 2018 Raul. All rights reserved.
//
#ifndef Sale_h
#define Sale_h
class Sale{
private:
    double itemCost;
    double taxRate;
public:
    Sale();
    Sale(double,double);
    double getItemCost() const;
    double getTaxRate() const;
    double getTax() const;
    double getTotal() const;
};
#endif /* Sale_h */
