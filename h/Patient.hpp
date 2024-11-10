//
//  Patient.hpp
//  Hospitol
//
//  Created by macbook on 26/04/2024.
//
#pragma once
#include <stdio.h>
#include <string>
#include "Person.hpp"
using namespace std;
class Patient : public Person {
private:
    int idp;
    string Medicalhistory;
    
public:
    Patient(string name , string email ,int idp , string  Medicalhistory);
    void addmedicalhistory(string record);
    string  getnamep();
    void Infodisplay();
};


