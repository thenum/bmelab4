/*
 * physical.cpp
 *
 *  Created on: Nov 29, 2013
 *      Author: tmagendr
 */


#include <iostream>
#include <stdlib.h>
#include "physical.hpp"

using namespace std;
Physical:: Physical(){
	age =0;
}

void Physical::P_test(){
cout << "Please enter (F) if the patient is female and (M) if the patient is male:" << endl;
cin >> gender;
cout << "Enter the patient’s age:"<< endl;
cin >> age;
}

void Physical::annotation(){
    string doctor_name,nurse_name,sp_name,oth_name,ch;
    cout << "Please enter which specification applies to you according to the chart" <<endl;
    cout << "Occupation\t\tInput" << endl;
    cout << "Doctor\t\t\t(D)" << endl;
    cout << "Specialist\t\t(S)" << endl;
    cout << "Nurse\t\t\t(N)" << endl;
    cout << "Other\t\t\t(O)" << endl;
    cout<<"Enter the post as (D/S/N/O).....";
    cin >> ch;

    while (!((ch == "D" )|(ch == "S")|(ch== "N")|(ch=="O"))){
        cout << "Sorry your input is not correct. Please specify according to the chart which is applicable to you:" << endl;
        cin >>ch;
    }

    if (ch== "D"){
            occupation = "Doctor";
            cout<<"Occupation : "<<occupation<<endl;
        cout << "Please enter your name:";
        cin >> doctor_name;
        cout << "Comment:";
        cin >> comment;
     }

     else if (ch == "S"){
             occupation = "Specialist";
             cout<<"Occupation : "<<occupation<<endl;
         cout << "Please enter your name:";
         cin >> sp_name;
         cout << "Comment:";
         cin >> comment;

     }
     else if(ch == "N"){
         occupation = "Nurse";
         cout<<"Occupation : "<<occupation<<endl;
         cout << "Please enter your name:";
         cin >> nurse_name;
         cout << "Comment:";
         cin >> comment;

     }
     else if(ch=="O"){
             cout<<"Occupation : Others"<<endl;
             cout << "Please specify the post: ";
             cin >> occupation;

             cout << "Please enter your name: ";
             cin >> oth_name;
             cout << "Comment:";
             cin >> comment;

     }
}


void UrineTest::UrineColour(){
int x;
x = rand() % 7;
switch (x){
case 0:
colour = "Hydrated";
cout << "Urine Colour:"<< colour << endl;
break;

case 1:
colour = "Hydrated";
cout << "Urine Colour:"<< colour << endl;
break;

case 2:
colour = "Hydrated";
cout << "Urine Colour:"<< colour << endl;
break;

case 3:
colour = "Dehydrated";
cout << "Urine Colour:" << colour << endl;
break;

case 4:
colour = "Dehydrated";
cout << "Urine Colour:" << colour<< endl;
break;

case 5:
colour = "Dehydrated";
cout << "Urine Colour:" << colour << endl;
break;

case 6:
colour = "Severely Dehydrated";
cout << "Urine Colour:" << colour << endl;
break;

case 7:
colour = "Severely Dehydrated";
cout << "Urine Colour:" << colour << endl;
break;

}
}

void UrineTest::pHvalue(){
int y;
y = rand() % 2;
switch (y){

case 0:
pH = 5;
cout << "The patient's urine has a pH-value of" << pH << endl;
break;

case 1:
pH = 6;
cout << "The patient's urine has a pH-value of" << pH << endl;
break;

case 2:
pH = 7;
cout << "The patient's urine has a pH-value of" << pH << endl;
break;

default:
if (pH < 5){
cout << "Since pH-value is less than 5, the urine has a high acidic pH." << endl;
}
else if (pH > 7){
cout << "Since pH-value is greater than 7, the urine has a low acidic pH." << endl;
}
}

}

void UrineTest::RBCcount(){
RBC = rand() % 10;
if (age < 13){
cout << "Child" << endl;
if (RBC > 4.3 || RBC <4.5 ){
cout << "The RBC count is" << RBC << "*10^12/L\tNORMAL RANGE" << endl;
}
else {
cout << "The RBC count is" << RBC << "*10^12/L\tABNORMAL RANGE" << endl;
}
}
else if (age > 13){
cout << "Adult " << endl;
if (gender == "M"){
if (RBC > 4.3 || RBC < 5.7){
cout << "The RBC count is" << RBC << "*10^12/L\tNORMAL RANGE" << endl;
}
else {
cout << "The RBC count is" << RBC << "*10^12/L\tABNORMAL RANGE" << endl;
}
}
else if (gender == "F"){
if (RBC > 4.1 || RBC < 5.1){
cout << "The RBC count is" << RBC << "*10^12/L\tNORMAL RANGE" << endl;
}
else {
cout << "The RBC count is" << RBC << "*10^12/L\tABNORMAL RANGE" << endl;
}
}
}

}

void UrineTest::WBCcount(){
WBC = rand() % 15;
if (WBC > 3.5||WBC < 10.5){
cout << "The WBC count is" << WBC << "*10^9/L\tNORMAL RANGE" << endl;
}
else {
cout << "The WBC count is" << WBC << "*10^9/L\tABNORMAL RANGE" << endl;
}
}

void VitalSigns::temperature(){
//output = min + (rand() % (int)(max - min + 1))
temp = 90 + (rand() % (int)(11));
if (temp >= 96.2 || temp <= 97.5){
cout << "The temperature is " << temp << "degree F\t NORMAL RANGE" << endl;
}
else if(temp <= 95)
{
cout << "The temperature is " << temp << "degree F\t HYPOTHERMIA" << endl;
}
else if(temp >= 97.5){
cout << "The temperature is " << temp << "degree F\t FEVER" << endl;
}
}

void VitalSigns::heartrate(){
HR = rand() % 250;
if (HR >= 60 || HR <= 100){
cout << "The patient has a heart rate of" << HR << ". This is a normal resting heart-rate for an average person." << endl;
}
else if (HR<60||HR>100){
cout << "The patient has a heart rate of" << HR << ". This is an abnormal resting heart rate for an average person." << endl;
}
};

void VitalSigns::respiratoryrate(){
RR = rand() % 50;
if (HR >= 15 || HR <= 20){
cout << "The patient has a respiratory rate of" << RR << ". This is a normal respiratory-rate for an average person." << endl;
}
else if (HR<15||HR>20){
cout << "The patient has a respiratory rate of" << RR << ". This is an abnormal respiratory-rate for an average person."<< endl;
}
};

void HEENT::lightexam(){
//physically examining the eyes
cout << "Results from the Light Examination\t\t" << endl;
cout << "Normal\t\t NORM" << endl;
cout << "Abnormal\t\t ABNORM" << endl;
cout << "Please specify the results of the light examination. Select ‘NORM’ for a normal and ‘ABNORM’ for an abnormal light examination." << endl;
cin >> eyes;
while (!(eyes == "NORM" )|(eyes == "ABNORM")){
cout << "Sorry your input is not correct. Please try again." << endl;
}
}

void HEENT::otoscopy(){
//physically examining the ears
cout << "Results from the Otoscopy Examination\t\t" << endl;
cout << "Normal\t\t NORM" << endl;
cout << "Abnormal\t\t ABNORM" << endl;
cout << "Please specify the results of the ear examination. Select ‘NORM’ for a normal and ‘ABNORM’ for an abnormal Otoscopy examination. "<< endl;
cin >> ears;
while (!(ears == "NORM" )|(ears == "ABNORM")){
cout << "Sorry your input is not correct. Please try again." << endl;
}
}

void HEENT::occlude(){
//physically examining the nose
cout << "Results from the Occlusion Examination\t\t" << endl;
cout << "Normal\t\t NORM" << endl;
cout << "Abnormal\t\t ABNORM" << endl;
cout << "Please specify the results of the nose examination. Select ‘NORM’ for a normal and ‘ABNORM’ for an abnormal Occlusion examination." << endl;
cin >> nose;
while (!(nose == "NORM" )|(nose == "ABNORM")){
cout << "Sorry your input is not correct. Please try again." << endl;
}
}
