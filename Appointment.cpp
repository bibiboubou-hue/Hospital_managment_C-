//
//  Appointment.cpp
//  Hospitol
//
//  Created by macbook on 26/04/2024.
//

#include "Appointment.hpp"
#include <iostream>
#include <string>
#include "Patient.hpp"
#include "Person.hpp"
using namespace std;
Appointment:: Appointment(int appid1 , string da , Patient* a) 
{
    this -> appid = appid1;
    this -> date = da;
}   
void Appointment::schedule(Patient*a){
    cout <<"the date for the appoitment is "<<endl;
    cout <<this->date<<endl;
    cout << "the name of the Patient is "<< a->Getname() <<endl;
    if (Canceled)
    {
        cout<<"-->>THIS APPOINTMENT IS CANCELED"<<endl ;
    }
}

void Appointment::dispaly(){
    cout <<this->appid<<endl;
    cout <<this->date<<endl;
}
void Appointment::canceled(){
    Canceled = true;
}

