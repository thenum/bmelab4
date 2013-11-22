/*
 * imaging.cpp
 *
 *  Created on: Nov 21, 2013
 *      Author: tmagendr
 */

#include <iostream>
#include <stdlib.h>
#include "imaging.hpp"

using namespace std;

/***********************BASE CLASS*************************/
imaging :: imaging (){
	age = 0;
	bitsalloc = 0;
	//i = 0;
	//int max = 1000;

	//comment = new(nothrow) imaging[max];

	cout << "Please enter the first name of the patient:" << endl;
	cin >> firstname;
	cout << "Please enter the last name of the patient:" << endl;
	cin >> lastname;
	cout << "Please enter (F) if the patient is female and (M) if the patient is male:" << endl;
	cin >> gender;
		/*while (!(gender == "F"  )|!(gender == "M")){
			cout << "Sorry your input is not correct. If the patient is female enter (F) or if male enter (M):" << endl;
			cin >> gender;
		}*/
	cout << "What is the patients age:"<< endl;
	cin >> age;

}

void imaging :: display() {

}

void imaging :: annotation() {
	string dname, nname, sname, l;
	cout << "****MENU: ANNOTATIONS****" << endl;
	cout << "Occupation\t\tInput" << endl;
	cout << "------------------------------"<< endl;
	cout << "Doctor\t\tD" << endl;
	cout << "Nurse\t\tN" << endl;
	cout << "Specialist\t\tS"<<endl;
	cout << "------------------------------"<< endl;
	cout << "According to the above chart, please specify which is applicable to you:" << endl;
	cin >> l;
		while (!(l == "D"  )|(l == "N")|(l == "S")){
			cout << "Sorry your input is not correct. Please specify according to the chart which is applicable to you:" << endl;
			cin >> l;
		}

			if (l == "D"){
				occupation = "Doctor";
				cout << "Please enter your name:";
				cin >> dname;
			}

			else if ( l == "N"){

				occupation = "Nurse";
				cout << "Please enter your name:";
				cin >> nname;
			}
			else (l == "S");{
				occupation = "Specialist";
				cout << "Please enter your name:";
				cin >> sname;

		}
	cout << "Comment:";
	// comment array code
}

void imaging :: bitsallocated(){
	bitsalloc = rand() % 500;
	cout << "Bits Allocated:" << bitsalloc << endl;
}



/***********************DERIVED CLASS#1: MRI IMAGING*************************/
void MRI :: scaningsequence(){
	int x;

	x = rand() % 4;

	switch (x){
		case 0:
			scanseq = "SE";
			cout << " SE = Spin Echo " << endl;
			break;
		case 1:
			scanseq = "IR";
			cout << " IR = Inversion Recovery " << endl;
			break;
		case 2:
			scanseq = "GR";
			cout << " GR = Gradient Recalled " << endl;
			break;
		case 3:
			scanseq = "EP";
			cout << " EP = Echo Planar " << endl;
			break;
		case 4:
			scanseq = "RM";
			cout << " RM = Research Mode " << endl;
			break;

	}
}

void MRI :: sequencevarient(){
	int y;

	y = rand() % 6;

		switch (y){
			case 0:
				seqvar = "SK";
				cout << " SK = segmented k-space " << endl;
				break;
			case 1:
				seqvar = "MTC";
				cout << " MTC = magnetization transfer contrast " << endl;
				break;
			case 2:
				seqvar = "SS";
				cout << " SS = steady state " << endl;
				break;
			case 3:
				seqvar = "TRSS";
				cout << " TRSS = time reversed steady state " << endl;
				break;
			case 4:
				seqvar = "SP";
				cout << " SP = spoiled " << endl;
				break;
			case 5:
				seqvar = "MP";
				cout << " MP = MAG prepared " << endl;
				break;
			case 6:
				seqvar = "OSP";
				cout << " OSP = oversampling phase " << endl;
				break;
			case 7:
				seqvar = "NONE";
				cout << " NONE = no sequence variant " << endl;
				break;
		}
}

void MRI :: scanoptions(){
	int z;

	z = rand() % 8;

		switch (z){
			case 0:
				seqvar = "PER";
				cout << " PER = Phase Encode Reordering " << endl;
				break;
			case 1:
				seqvar = "RG";
				cout << " Respiratory Gating " << endl;
				break;
			case 2:
				seqvar = "CG";
				cout << " Cardiac Gating " << endl;
				break;
			case 3:
				seqvar = "PPG";
				cout << " PPG = Peripheral Pulse Gating " << endl;
				break;
			case 4:
				seqvar = "FC";
				cout << " FC = Flow Compensation " << endl;
				break;
			case 5:
				seqvar = "PFF";
				cout << " PFF = Partial Fourier - Frequency " << endl;
				break;
			case 6:
				seqvar = "PFP";
				cout << " PFP = Partial Fourier - Phase " << endl;
				break;
			case 7:
				seqvar = "SP";
				cout << " SP = Spatial Pre-saturation " << endl;
				break;
			case 8:
				seqvar = "FS";
				cout << " FS = Fat Saturation " << endl;
				break;
		}
}




/***********************DERIVED CLASS#2: CT IMAGING*************************/
void CT :: bitsstored(){
	bitsto = rand() % bitsalloc;
	cout << "Bits Stored: " << bitsto << endl;
}

void CT :: highbit(){
	hibit = rand() % bitsalloc;
	cout << "High Bit: " << hibit << endl;
}

void CT :: DistanceSourcePatient(){
	DSP = rand() % 100000000000;
	cout << "Distance Source to Patient: " << DSP << "mm" << endl;
}

void CT :: DistanceSourceDetector(){
	DSD = rand() % 100000000000;
	cout << "Distance Source to Detector: " << DSD << "mm" << endl;
}



/***********************DERIVED CLASS#3: ULRTASOUND IMAGING*************************/
void US :: bitsstored(){
	bitsto = rand() % bitsalloc;
	cout << "Bits Stored: " << bitsto << endl;
}

void US :: highbit(){
	hibit = rand() % bitsalloc;
	cout << "High Bit: " << hibit << endl;
}

void US :: LossyImageCompression(){
	LIC = rand() % 1;

	switch (LIC){
		case 0:
			cout << "0" << LIC << ":Image has NOT been subjected to lossy compression." << endl;
			break;
		case 1:
			cout << "0" << LIC << ":Image has been subjected to lossy compression." << endl;
			break;
	}
}

void US :: UltrasoundColorDataPresent (){
	UCDP = rand() % 1;

		switch (UCDP){
			case 0:
				cout << "0" << UCDP << ":Ultrasound color data not present in image." << endl;
				break;
			case 1:
				cout << "0" << UCDP << ":Ultrasound color data is present in image." << endl;
				break;
		}
	}

