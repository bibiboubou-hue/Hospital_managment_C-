//
//  Staff.cpp
//  Hospitol
//
//  Created by macbook on 29/04/2024.
//

#include "Staff.hpp"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

staff::staff(string name , string email,string job , string dep) : Person (name , email)
{
    this->jobtitle= job ;
    this->department=dep;
}
void staff::Infodisplay()
{
    cout<<this->jobtitle;
    cout<< this->department;
}
