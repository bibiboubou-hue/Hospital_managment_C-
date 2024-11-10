//
//  Billing.cpp
//  Hospitol
//
//  Created by macbook on 28/04/2024.
//

#include "Billing.hpp"
#include <stdio.h>
#include "Patient.hpp"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
billing :: billing(Patient* a , double am , double c)
{
    this->amountofpyment=am;
    this->cridte = c;
}
void billing::addbill()
{
    this->cridte = this->amountofpyment + this->cridte ;
}
void billing::paybill(double money, Patient*a)
{
    if (money >= this->cridte)
    {
        cout <<"your payemnt has been complited "<<a->Getname()<<" dont have any credit "<<endl ;
    }
    if (money < this-> cridte)
    {
        cout<<"the money is not enough to pay the bill , your credit is "<<this->cridte - money<<endl;
        
    }
}
