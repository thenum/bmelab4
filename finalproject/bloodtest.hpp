/*
* bloodtest.hpp
*
* Created on: Nov 20, 2013
* Author: Anna Roy
*/

#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_


#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

// The base class

class bloodtest {
    protected:
        char gender;
        string doctor_name;
        string bloodtype;
        string occupation, comment;
     public:

    void b_test();
    void annotation();

};
// Derived class 1
class bloodcount : public bloodtest
{
protected:
    float RBC;
    float WBC;
    float platelets;
    float hemoglobins;
     float hematocrit;
    float MCV;
public:
    bloodcount();
    void test();
    void displayb();

};
// Derived class 2
class bloodglucose : public bloodtest
{
protected:
    float pla_glucose;
public:
    bloodglucose();
    void plasmaglucose();
    void displayg();
};
// Derived class 3
class lipoprotein : public bloodtest
 {
protected:
    float total_chol;
    float LDL_chol;
    float HDL_chol;
public:
    lipoprotein();
    void totalcholesterol();
    void LDLcholesterol();
    void HDLcholesterol();
    void displayl();

};


#endif // BLOODTEST_HPP_
