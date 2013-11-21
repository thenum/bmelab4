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

imaging :: imaging (){
	age = 0;
	bitsalloc = 0;
	cout << "Please enter the first name of the patient:" << endl;
	cin >> firstname;
	cout << "Please enter the last name of the patient:" << endl;
	cin >> lastname;
	cout << "Please enter (F) if the patient is female and (M) if the patient is male:" << endl;
	cin >> gender;
		while (!(gender == "F"  )|(gender == "M")){
			cout << "Sorry your input is not correct. If the patient is female enter (F) or if male enter (M):" << endl;
			cin >> gender;
		}
	cout << "What is the patients age:"<< endl;
	cin >> age;

}

void imaging :: annotation() {
	cout << "****MENU: ANNOTATIONS****" << endl;
	cout << "Occupation\t\tInput" << endl;
	cout << "------------------------------"<< endl;
	cout << "Doctor\t\tD" << endl;
	cout << "Nurse\t\tB" << endl;
	cout << "Specialist\t\tS"<<endl;
	cout << "------------------------------"<< endl;
	cout << "According to the above chart, please specify which is applicable to you:" << endl;
	cin >> occupation;
		while (!(occupation == "D"  )|(occupation == "N")|(occupation == "S")){
			cout << "Sorry your input is not correct. Please specify according to the chart which is applicable to you:" << endl;
			cin >> occupation;
		}
	cout << "Comment:";
	// comment array code
}

void MRI :: scaningsequence(){

	x = rand() % 4;
	switch (x){
		case 0:
			scanseq = 'SE';
			cout << " SE = Spin Echo " << endl;
			break;
		case 1:
			scanseq = 'IR';
			cout << " IR = Inversion Recovery " << endl;
			break;
		case 2:
			scanseq = 'GR';
			cout << " GR = Gradient Recalled " << endl;
			break;
		case 3:
			scanseq = 'EP';
			cout << " EP = Echo Planar " << endl;
			break;
		case 4:
			scanseq = 'RM';
			cout << " RM = Research Mode " << endl;
			break;

	}
}

void MRI :: sequencevarient(){
	y = rand() % 6;
		switch (y){
			case 0:
				seqvar = 'SK';
				cout << " SK = segmented k-space " << endl;
				break;
			case 1:
				seqvar = 'MTC';
				cout << " MTC = magnetization transfer contrast " << endl;
				break;
			case 2:
				seqvar = 'SS';
				cout << " SS = steady state " << endl;
				break;
			case 3:
				seqvar = 'TRSS';
				cout << " TRSS = time reversed steady state " << endl;
				break;
			case 4:
				seqvar = 'SP';
				cout << " SP = spoiled " << endl;
				break;
			case 5:
				seqvar = 'MP';
				cout << " MP = MAG prepared " << endl;
				break;
			case 6:
				seqvar = 'OSP';
				cout << " OSP = oversampling phase " << endl;
				break;
			case 7:
				seqvar = 'NONE';
				cout << " NONE = no sequence variant " << endl;
				break;
		}
}

void MRI :: scanoptions(){
	z = rand() % 8;
		switch (z){
			case 0:
				seqvar = 'PER';
				cout << " PER = Phase Encode Reordering " << endl;
				break;
			case 1:
				seqvar = 'RG';
				cout << " Respiratory Gating " << endl;
				break;
			case 2:
				seqvar = 'CG';
				cout << " Cardiac Gating " << endl;
				break;
			case 3:
				seqvar = 'PPG';
				cout << " PPG = Peripheral Pulse Gating " << endl;
				break;
			case 4:
				seqvar = 'FC';
				cout << " FC = Flow Compensation " << endl;
				break;
			case 5:
				seqvar = 'PFF';
				cout << " PFF = Partial Fourier - Frequency " << endl;
				break;
			case 6:
				seqvar = 'PFP';
				cout << " PFP = Partial Fourier - Phase " << endl;
				break;
			case 7:
				seqvar = 'SP';
				cout << " SP = Spatial Presaturation " << endl;
				break;
			case 8:
				seqvar = 'FS';
				cout << " FS = Fat Saturation " << endl;
				break;
		}
}

void CT :: DistanceSourcePatient(){

}

void CT :: DistanceSourceDetector(){

}

void PET :: LossyImageCompression(){

}

void PET :: UltrasoundColorDataPresent (){

}
