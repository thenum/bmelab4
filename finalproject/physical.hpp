/*
* physical.hpp
*
* Created on: Nov 22, 2013
* Author: tmagendr
*/

#ifndef PHYSICAL_HPP_
#define PHYSICAL_HPP_
#include <iostream>

using namespace std;

class Physical{
protected:
string gender;
int age;
string occupation, comment;

public:
Physical();
void P_test();
void annotation();
};

class UrineTest: public Physical{
protected:
string colour;
int pH;
float RBC;
float WBC;

public:
void UrineColour();
void pHvalue();
void RBCcount();
void WBCcount();
};

class VitalSigns: public Physical {
protected:
float temp;
int HR;
int RR;

public:
void temperature();
void heartrate();
void respiratoryrate();
};

class HEENT: public Physical{
protected:
string eyes;
string ears;
string nose;

public:
void lightexam();
void otoscopy();
void occlude();
};

#endif /* PHYSICAL_HPP_ */
