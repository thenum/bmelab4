/*
 * imagemain.cpp
 *
 *  Created on: Nov 22, 2013
 *      Author: tmagendr
 */




#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "imaging.hpp"
#include "bloodtest.hpp"
#include "physical.hpp"

using namespace std;

int main(){

	string l, firstname, lastname, gender, age, bloodtype;
	int input, whichtest, whichcategory;
	char yn;


	// Object names for each derived classes
	MRI testm;
	CT testc;
	US testu;
	bloodtest intro;
	bloodcount testb;
	bloodglucose testg;
	lipoprotein testl;
	Physical intro2;
	UrineTest ut;
	VitalSigns vs;
	HEENT ht;


cout << "Welcome to the Hospital Chart's System:" << endl;
cout << "*****************************************"<< endl;

cout << "Please enter the first name of the patient:";
cin >> firstname;
cout << "Please enter the last name of the patient:";
cin >> lastname;

cout << "*****************************************"<< endl;

cout << "Option\t\t\t\t\tInput" << endl;
cout << "------------------------------"<< endl;
cout << "Add test results to patients file\t(1)"<< endl;
cout << "Print out report\t\t\t(2)" << endl;
cout << "------------------------------"<< endl;
cout << "Please enter your input according to the chart below";
cin >> input;

switch (input){
	case 1:
		cout << "Adding new test results to patient file: " << endl;
		cout << "------------------------------"<< endl;
		cout << "Options\t\tInput" << endl;
		cout << "------------------------------"<< endl;
		cout << "Blood Test\t\t(1)" << endl;
		cout << "Physical Test\t\t(2)" << endl;
		cout << "Imaging\t\t\t(3)" << endl;
		cout << "------------------------------"<< endl;
		cout << "Which category of testing are you inputing according to the chart below:";
		cin >> whichcategory;

			switch (whichcategory){

				case 1:
					intro.b_test();
					cout << "*****************************************"<< endl;
					cout << "Options\t\tInput" << endl;
					cout << "------------------------------"<< endl;
					cout << "Blood Count Test\t\t(1)" << endl;
					cout << "Blood Glucose Test\t\t(2)" << endl;
					cout << "Lipoprotein Test\t\t(3)" << endl;
					cout << "------------------------------"<< endl;
					cout << "Which type of test will you like to input according to the chart below:";
					cin >> whichtest;
					switch (whichtest){
						case 1:
							cout << "Adding New Test: Blood Count Test" << endl;
							testb.test();
							testb.annotation();
							cout << "*****************************************"<< endl;
							cout << "If you would like this test to be printed in your report at the end of your session, please input (Y) for yes and (N) for no:";
							cin >> yn;

							if (yn == 'Y'){
								 cout <<"This Blood Count Test is being added to your report" << endl;
								 testb.displayb();
							}
							else if (yn == 'N' ){
								cout <<"This Blood Count Test is NOT being added to your report" << endl;
							}

							break;
						case 2:
							cout << "Adding New Test: Blood Glucose Test" << endl;
							testg.plasmaglucose();
							testg.annotation();
							cout << "*****************************************"<< endl;
							cout << "If you would like this test to be printed in your report at the end of your session, please input (Y) for yes and (N) for no:" << endl;
							cin >> yn;

							if (yn == 'Y'){
								 cout <<"This Blood Glucose Test is being added to your report" << endl;
								 testg.displayg();
							}
							else if (yn == 'N' ){
								cout <<"This Blood Glucose Test is NOT being added to your report" << endl;
							}

							break;
						case 3:
							cout << "Adding New Test: Lipoprotein Test" << endl;
							testl.totalcholesterol();
							testl.LDLcholesterol();
							testl.HDLcholesterol();
							testl.annotation();
							cout << "*****************************************"<< endl;
							cout << "If you would like this test to be printed in your report at the end of your session, please input (Y) for yes and (N) for no:" << endl;
							cin >> yn;

							if (yn == 'Y'){
								 cout <<"This Lipoprotein Test is being added to your report" << endl;
								 testl.displayl();
							}
							else if (yn == 'N' ){
								cout <<"This Lipoprotein Test is NOT being added to your report" << endl;
							}

							break;
					}

					break;




				case 2:

					cout << "Which type of test will you like to input according to the chart below:"<< endl;
					cout << "Options\t\tInput" << endl;
					cout << "------------------------------"<< endl;
					cout << "Urine Test\t\t(1)" << endl;
					cout << "Vital Signs Test\t\t(2)" << endl;
					cout << "HEENT Test\t\t(3)" << endl;
					cout << "------------------------------"<< endl;
					cin >> whichtest;

					switch (whichtest){

					case 1:
						cout << "Adding New Test: Urine Test" << endl;
						break;

					case 2:
						cout << "Adding New Test: Vital Signs Test" << endl;
						break;
					case 3:
						cout << "Adding New Test: HEENT Test" << endl;
						break;

					}



				break;







				case 3:

					cout << "Options\t\tInput" << endl;
					cout << "------------------------------"<< endl;
					cout << "MRI\t\t(1)" << endl;
					cout << "CT\t\t(2)" << endl;
					cout << "US\t\t(3)" << endl;
					cout << "------------------------------"<< endl;
					cout << "Which type of test will you like to input according to the chart below:";
					cin >> whichtest;
					switch (whichtest){
						case 1:
							cout << "Adding New Test: MRI" << endl;
							testm.bitsallocated();
							testm.scaningsequence();
							testm.sequencevarient();
							testm.scanoptions();
							testm.annotation();
							cout << "*****************************************"<< endl;
							cout << "If you would like this test to be printed in your report at the end of your session, please input (Y) for yes and (N) for no:" << endl;
							cin >> yn;

							if (yn == 'Y'){
								 cout <<"This MRI test is being added to your report" << endl;
								 testm.displaym();
							}
							else if (yn == 'N' ){
								cout <<"This MRI test is NOT being added to your report" << endl;
							}
							break;

						case 2:
							cout << "Adding New Test: CT Scan" << endl;
							testc.bitsallocated();
							testc.bitsstored();
							testc.highbit();
							testc.DistanceSourcePatient();
							testc.DistanceSourceDetector();
							testc.annotation();
							cout << "*****************************************"<< endl;
							cout << "If you would like this test to be printed in your report at the end of your session, please input (Y) for yes and (N) for no:" << endl;
							cin >> yn;

							if (yn == 'Y'){
								 cout <<"This CT Scan test is being added to your report" << endl;
								 testc.displayc();
							}
							else if (yn == 'N' ){
								 cout <<"This CT Scan test is NOT being added to your report" << endl;
							}

							break;
						case 3:
							cout << "Adding New Test: Ultrasound" << endl;
							testu.bitsallocated();
							testu.bitsstored();
							testu.highbit();
							testu.LossyImageCompression();
							testu.UltrasoundColorDataPresent();
							testu.annotation();
							cout << "*****************************************"<< endl;
							cout << "If you would like this test to be printed in your report at the end of your session, please input (Y) for yes and (N) for no:" << endl;
							cin >> yn;


							if (yn == 'Y' ){
								 cout <<"This Ultrasound test is being added to your report" << endl;
								 testu.displayu();
							}
							else if (yn == 'N' ){
								 cout <<"This Ultrasound test is NOT being added to your report" << endl;
							}

							break;
					}
					break;



			}

}

}




















