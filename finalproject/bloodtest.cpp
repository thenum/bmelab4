/*
 * bloodtest.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: tmagendr
 */
#include <iostream>
#include "bloodtest.hpp"
using namespace std;

bloodtest::bloodtest(){
	cout << "Please enter the first name of the patient:" << endl;
	cin >> firstname;
	cout << "Please enter the last name of the patient:" << endl;
	cin >> lastname;
	cout << "Please enter (F) if the patient is female and (M) if the patient is male:" << endl;
	cin >> gender;
	cout << "Please enter the patients blood type:"<< endl;
	cin >> bloodtype;

}

void bloodtest::annotation(){
	cout << "Please enter which specification applies to you according to the chart" <<endl;
	cout << "Occupation\t\tInput" << endl;
	cout << "Doctor\t\t(D)" << endl;
	cout << "Specialist\t\t(S)" << endl;
	cout << "Nurse\t\t(N)" << endl;
	cout << "Other\t\t(O)" << endl;
	cin >> occupation;
}
