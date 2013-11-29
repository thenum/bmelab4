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
		//imaging *comment;
		int bitsalloc;
		string comment, occupation;

	public:
		imaging();
		void annotation();
		void bitsallocated();
};

class MRI : public imaging {
	protected:
		string scanseq;
		string seqvar;
		string scanopt;

	public:
		void scaningsequence();
		void sequencevarient();
		void scanoptions();
		void displaym();
};

class CT: public imaging {
	protected:
		int DSP;
		int DSD;
		int bitsto;
		int hibit;

	public:
		CT ();
		void bitsstored();
		void highbit();
		void DistanceSourcePatient();
		void DistanceSourceDetector();
		void displayc();
};

class US : public imaging {
	protected:
		int LIC;
		int UCDP;
		int bitsto;
		int hibit;

	public:
		US();
		void bitsstored();
		void highbit();
		void LossyImageCompression();
		void UltrasoundColorDataPresent ();
		void displayu();
};



#endif /* IMAGING_HPP_ */
