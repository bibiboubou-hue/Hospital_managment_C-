//
//  Patient.cpp
//  Hospitol
//
//  Created by macbook on 26/04/2024.
//

#include "Patient.hpp"
#include "Person.hpp"
#include <iostream>
using namespace std;
Patient::Patient(string n , string e, int idp1 , string mdh1) : Person (n, e)
{
    this -> idp =idp1;
    this-> Medicalhistory = mdh1;
}
void Patient::addmedicalhistory(string record)
{
    this->Medicalhistory+record = this->Medicalhistory;
}
void Patient::Infodisplay(){
    cout<<"the  Medicalhistory is "<<endl;
    cout<< this->Medicalhistory <<endl;
}
string Patient::getnamep(){
    return this->name;
}
