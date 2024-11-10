//
//  Hospitale.hpp
//  Hospitol
//
//  Created by macbook on 29/04/2024.
//

#include "Patient.hpp"
#include "Doctor.hpp"
#include "Staff.hpp"
#include <string>
#include <stdio.h>
using namespace std;
class hospitale
{
private:
    string hospitale_name ;
public:
    hospitale (string hospitale_naame);
    void Infodisplay(Patient** a , Doctor**b,staff**c);
        
    
    
    
};


