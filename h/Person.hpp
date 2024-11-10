//
//  Person.hpp
//  Hospitol
//
//  Created by macbook on 26/04/2024.
//
#pragma once
#include <stdio.h>
#include <string>
using namespace std;
class Person {
protected:
    string name ;
    string email;
    
public:

    Person (string name, string  email);
    virtual void Infodisplay ();
    virtual string Getname();
    string Getemail();
    
    
};

