//
//  main.cpp
//  Hospitol
//
//  Created by meeeeee on 26/04/2024.
//

#include <iostream>
#include "Person.hpp"
#include "Doctor.hpp"
#include "Patient.hpp"
#include "Appointment.hpp"
#include "Billing.hpp"
#include "Staff.hpp"
#include "Hospitale.hpp"
int main(int argc, const char * argv[]) {
    // the Pateints
    Patient* newPatient=new Patient("Jhone","jhone@gamil.com",101010,"cencer-cencer2");
    Patient* newPatient1=new Patient("maria","maria@gamil.com",101011,"nothing");
    Patient* newPatient2= new Patient("area","aria@gamil.com",191011,"rohlik");
    
   
    // the Appoinment
    Appointment * newAppoinmtent = new Appointment (11111 , "05_04_2024",newPatient);
    Appointment * newAppoinmtent1 = new Appointment (11112, "10_04_2024",newPatient1);
    Appointment * newAppoinmtent2 = new Appointment (11112 , "15_09_2024",newPatient2);
    
    // the Docters
    Doctor * doc = new Doctor("dhakir","dhakir@gmail.com",12345,"General medicine");
    Doctor * mac = new Doctor("jorge","joprge@gmail.com",1234,"Physical medicine and rehabilitation");
    
    // puting the pateints in a list
    Patient** listofp= new Patient*[3];
    listofp[0] =newPatient;
    listofp[1] =newPatient1;
    listofp[2] =newPatient2;
    
    doc->Addapointment(newAppoinmtent);
    doc->Addapointment(newAppoinmtent1);
    doc->Addapointment(newAppoinmtent2);
    cout<<"-----Doctor info 1 ------"<<endl ;
    doc->Infodisplay(listofp);
    // puting the pateints in a list
    Patient** listofp1= new Patient*[1];
    listofp1[0] =newPatient;
    // canceling the Appoinment
    newAppoinmtent->canceled();
    
    cout<<"-----Doctor info 2 ------"<<endl;
    mac->Addapointment(newAppoinmtent);
    mac->Infodisplay(listofp1);
    
    // ----  after the appoinment
    cout<<"-----After appoinment (payment) ------"<<endl;
    billing * newbill = new billing (newPatient , 1000 , 0);
    newbill->addbill();
    newbill->paybill(1000,newPatient);
    // ____ the stuff
    staff* Docassis = new staff  ("karim", "karim@gmail.com","assistance","Care unit");
    staff** listofs = new staff *[1];
    listofs[0]=Docassis ;
    
    //-------THE hospital
    Doctor** listofd= new Doctor*[2];
    listofd[0] =doc;
    listofd[1] =mac;
    cout<<"-----the Hostbital ------"<<endl;
    hospitale*newHos = new hospitale ("hospitale_of_Piter");
    newHos->Infodisplay(listofp,listofd,listofs);
   
    return 0;
}
