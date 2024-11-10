//
//  Doctor.hpp
//  Hospitol
//
//  Created by macbook on 26/04/2024.
//
#pragma once
#include <stdio.h>
#include "Person.hpp"
#include "Appointment.hpp"
#include "Patient.hpp"
#include <string>

using namespace std;

class Doctor : public Person {
private:
    int idD;
    string specialitation;
    int appointNum;
    Appointment** listr;
public:
    Doctor (string name , string email , int idp , string specialitation );
    void Addapointment (Appointment*a);
    void numberofapp ();
    virtual void Infodisplay(Patient**a);
};

