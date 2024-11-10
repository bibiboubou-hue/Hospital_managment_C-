//
//  Hospitale.cpp
//  Hospitol
//
//  Created by macbook on 29/04/2024.
//
#include "Hospitale.hpp"
#include "Patient.hpp"
#include "Doctor.hpp"
#include "staff.hpp"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

hospitale::hospitale(string honame )
{
    this->hospitale_name=honame;
}
void hospitale::Infodisplay(Patient**a , Doctor ** b, staff**c)
{ cout<<"the Doctors are"<<endl;
    int i=0;
    while (b[i]!= NULL)
{
    cout<<b[i]->Getname()<<endl;
    i++;
}
    cout<<"the Patients are"<<endl;
         i=0;
        while (a[i]!= NULL)
    {
        cout<<a[i]->Getname()<<endl;
        i++;
    }
    cout<<"the stuffs are"<<endl;
         i=0;
        while (c[i]!= NULL)
    {
        cout<<c[i]->Getname()<<endl;
        i++;
    }
    
}
