/*
 * imagemain.cpp
 *
 *  Created on: Nov 22, 2013
 *      Author: tmagendr
 */


#include <iostream>
#include <stdlib.h>
#include "imaging.hpp"

using namespace std;

int main (){
	string firstname, lastname, gender;
	int test;
	int age;
	int b = 0;
	MRI testm;
	CT testc;
	US testu;

	cout << "Please enter the first name of the patient:" << endl;
	cin >> firstname;
	cout << "Please enter the last name of the patient:" << endl;
	cin >> lastname;
	cout << "Please enter (F) if the patient is female and (M) if the patient is male:" << endl;
	cin >> gender;
	cout << "What is the patients age:"<< endl;
	cin >> age;

	cout << "Please select which tests performed on "<<firstname << " " << lastname << " that you would like to be displayed according to the chart below:" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Option\t\tInput" << endl;
	cout << "MRI\t\t(1)" << endl;
	cout << "CT SCAN\t\t(2)" << endl;
	cout << "ULTRASOUND\t(3)" << endl;
	cout << "---------------------------------------" << endl;
	cin >> test;

	while (test < 1 || test > 3){
		cout << "Sorry your input is not correct. Please enter a input according to the above chart:" << endl;
		cin >> test;
	}

	switch (test) {
		case 1:
			cout << "****TEST: MRI****" << endl;
			testm.scaningsequence();
			testm.scanoptions();
			testm.sequencevarient();
			testm.annotation();
			break;
		case 2:
			cout << "****TEST: CT Scan****" << endl;
			testc.bitsallocated();
			testc.bitsstored();
			testc.highbit();
			testc.DistanceSourcePatient();
			testc.DistanceSourceDetector();
			break;
		case 3:
			cout << "****TEST: Ultrasound****" << endl;
			testu.bitsallocated();
			testu.bitsstored();
			testu.highbit();
			testu.LossyImageCompression();
			testu.UltrasoundColorDataPresent();
			break;
	}


	/*MRI testm;
	CT testc;
	US testu;



	testm.bitsallocated();
	testm.scaningsequence();
	testm.scanoptions();
	testm.sequencevarient();
	testm.annotation();

	testc.bitsallocated();
	testc.bitsstored();
	testc.highbit();
	testc.DistanceSourcePatient();
	testc.DistanceSourceDetector();
	testc.annotation();

	testu.bitsallocated();
	testu.bitsstored();
	testu.highbit();
	testu.LossyImageCompression();
	testu.UltrasoundColorDataPresent();
	testu.annotation();*/
}
