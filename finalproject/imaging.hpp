/*
 * imaging.hpp
 *
 *  Created on: Nov 21, 2013
 *      Author: tmagendr
 */

#ifndef IMAGING_HPP_
#define IMAGING_HPP_

#include <iostream>

using namespace std;

class imaging{
	protected:
	string firstname;
	string lastname;
	string gender;
	int age;
	string occupation;
	int bitsalloc;
	string comment[];

	public:
		imaging();
		void display();
		void annotation();
		void bitsallocated();
};

class MRI : public imaging {
	protected:
		int x,y,z;
		string scanseq;
		string seqvar;
		string scanopt;

	public:
		void scaningsequence();
		void sequencevarient();
		void scanoptions();
};

class CT: public imaging {
	protected:
		int DSP;
		int DSD;

	public:
		void DistanceSourcePatient();
		void DistanceSourceDetector();
};

class PET : public imaging {
	protected:
		string LIC;
		string UCDP;

	public:
		void LossyImageCompression();
		void UltrasoundColorDataPresent ();
};



#endif /* IMAGING_HPP_ */
