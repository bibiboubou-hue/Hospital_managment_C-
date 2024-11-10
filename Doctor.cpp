//
//  Doctor.cpp
//  Hospitol
//
//  Created by macbook on 26/04/2024.
//

#include "Doctor.hpp"
#include <string>
#include <iostream>
#include "Appointment.hpp"
#include "Patient.hpp"
Doctor :: Doctor(string name , string email , int idD1 , string spe) : Person (name , email){
    this -> idD = idD1;
    this-> specialitation=spe;
    this->appointNum = 0;
    this->listr = new Appointment * [100] {nullptr,};
}

void Doctor::Addapointment(Appointment* app) {
    if (appointNum < 100) { // Check to prevent overflow
        listr[appointNum++] = app;
    } else {
        cout << "Maximum appointment limit reached" << endl;
    }
}

void Doctor::numberofapp() {
    cout << "Number of appointments: " << appointNum << endl;
}

void Doctor::Infodisplay(Patient **a) {
    cout<< "Doctor name:"<<Getname() <<endl;
    cout<<"Doctor email:"<<Getemail()<<endl;
    cout << "Doctor ID: " << this->idD << endl;
    cout << "Specialization: " << this->specialitation << endl;
    numberofapp();
    for (int i = 0; i < this->appointNum; i++) {
        cout << "Appointment " << i + 1 << ": ";
        
            listr[i]->schedule(a[i]);
        
    }
}
