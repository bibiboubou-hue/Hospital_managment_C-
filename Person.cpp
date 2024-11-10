//
//  Person.cpp
//  Hospitol
//
//  Created by macbook on 26/04/2024.
//

#include "Person.hpp"
#include <iostream>
using namespace std;
Person::Person(string  n , string  em){
    this-> name = n;
    this-> email =em;
}
void Person::Infodisplay(){
    cout<< "your informations"<<endl ;
    cout<<this->name<<endl;
    cout<<this-> email<<endl;
}
string  Person::Getname(){
    return this-> name;
}
string Person::Getemail(){
    return this->email;
}


