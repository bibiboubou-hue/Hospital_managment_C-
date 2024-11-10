//
//  Billing.hpp
//  Hospitol
//
//  Created by macbook on 28/04/2024.
//

#include <stdio.h>
#include "Patient.hpp"
#include "Appointment.hpp"
#include <string>
#include <stdio.h>
using namespace std;
class billing {
private:
    Patient* a;
    double amountofpyment;
    double cridte;
    
public:
    billing (Patient*a , double ammountofpyment ,double  cridte);
    void addbill ();
    void paybill (double money,Patient*a);
    void Infodisplay();
};
