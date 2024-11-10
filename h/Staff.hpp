//
//  Staff.hpp
//  Hospitol
//
//  Created by macbook on 29/04/2024.
//


#pragma once
#include <stdio.h>
#include <string>
#include "Person.hpp"
class staff : public Person {
private:
    string jobtitle ;
    string department ;
    
public:
    staff(string name , string email, string jobtitle , string department );
    void Infodisplay ();
    
    
};

