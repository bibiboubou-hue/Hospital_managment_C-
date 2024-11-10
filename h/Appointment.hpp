//
//  Appointment.hpp
//  Hospitol
//
//  Created by macbook on 26/04/2024.
//
#pragma once
#include <stdio.h>
#include <string>
#include "Patient.hpp"

using namespace std;
class Appointment {
private:
    int appid;
    string date ;
    Patient * a;
    bool Canceled ;
public:
    Appointment ( int appid,string date, Patient*a);
    void schedule(Patient*a);
    void canceled();
    void dispaly();
    ~Appointment();
    
};


