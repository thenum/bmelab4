/*
 * imaging.cpp
 *
 *  Created on: Nov 21, 2013
 *      Author: tmagendr
 */

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "imaging.hpp"

using namespace std;

/***********************BASE CLASS*************************/
imaging :: imaging (){
	bitsalloc = 0;

	//i = 0;
	//int max = 1000;

	//comment = new(nothrow) imaging[max];

}


void imaging :: annotation() {
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

void imaging :: bitsallocated(){
	bitsalloc = rand() % 500;
	cout << "Bits Allocated:" << bitsalloc << endl;
}



/***********************DERIVED CLASS#1: MRI IMAGING*************************/

void MRI :: scaningsequence(){
	int x;

	x = rand() % 4;
	cout << "Scanning Sequence:\t";
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
	cout << "Sequence Varient:\t";
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
	cout << "Scan Options:\t";
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

void MRI :: displaym(){
	ofstream outfile; // producing an outfile
	outfile.open ("report.txt",ios::out);
			outfile << "Bits Allocated: " << bitsalloc << endl;
			outfile << "Scanning Sequence: " << scanseq << endl;
			outfile << "Scan Options: " << scanopt << endl;
			outfile << "Annotations:" << comment << endl;

}



/***********************DERIVED CLASS#2: CT IMAGING*************************/

CT :: CT (){
	DSP = 0;
	DSD = 0;
	bitsto = 0;
	hibit = 0;
}

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


void CT :: displayc(){
	ofstream outfile; // producing an outfile
	outfile.open ("report.txt",ios::out);
			outfile << "Bits Allocated: " << bitsalloc << endl;
			outfile << "Bits Stored: " << bitsto << endl;
			outfile << "High Bit: " << hibit << endl;
			outfile << "Distance Source to Patient: " << DSP << "mm" << endl;
			outfile << "Distance Source to Detector: " << DSD <<  "mm" << endl;
			outfile << "Annotations:" << comment << endl;

}
/***********************DERIVED CLASS#3: ULRTASOUND IMAGING*************************/

US :: US (){
	LIC = 0;
	UCDP = 0;
	bitsto = 0;
	hibit = 0;
}

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
	cout << "Lossy Image Compression:\t";
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
	cout << "Ultrasound Color Data Present:\t";
		switch (UCDP){
			case 0:
				cout << "0" << UCDP << ":Ultrasound color data not present in image." << endl;
				break;
			case 1:
				cout << "0" << UCDP << ":Ultrasound color data is present in image." << endl;
				break;
		}
	}
void US :: displayu(){
	ofstream outfile; // producing an outfile
	outfile.open ("report.txt",ios::out);
			outfile << "Bits Allocated: " << bitsalloc << endl;
			outfile << "Bits Stored: " << bitsto << endl;
			outfile << "High Bit: " << hibit << endl;
			outfile << "Ultrasound Color Data Present: 0" << UCDP;
			outfile << "Lossy Image Compression: 0" << LIC;
			outfile << "Annotations:" << comment << endl;

}


