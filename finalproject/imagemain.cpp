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
	MRI testm;
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
	testu.annotation();
}
