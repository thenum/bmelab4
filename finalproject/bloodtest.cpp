//============================================================================
// Name : project.cpp
// Author : reshma
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>

#include "bloodtest.hpp"
using namespace std;

 void bloodtest::b_test(){
     cout << "Please enter (F) if the patient is female and (M) if the patient is male:";
     cin >> gender;
     cout << "Please enter the patients blood type (O/A/B/AB):";
     cin >>bloodtype;
}


void bloodtest::annotation(){

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
//-------------------------------------------------------
bloodcount :: bloodcount()  {
    RBC=0;
    WBC=0;
    platelets=0;
    hemoglobins=0;
    hematocrit=0;
    MCV=0;
}

void bloodcount :: test () {

                        cout<<"RBC Result\n";
                        RBC=rand()%7;
                        if(gender == 'M'){
                                if(RBC>=5 && RBC<=6){
                                        cout<<"Patient has "<<RBC<<"million cells/mcl and he is in normal range\n";
                                }

                                else{
                                        cout<<"Patient has "<<RBC<<"million and should meet the desired Doctor for consultation\n";
                                }
                        }
                        else if(gender == 'F'){
                                if(RBC>=4 && RBC<=5){
                                        cout<<"Patient has "<< RBC<<" million cells/mcl and she is in normal range\n ";
                                }
                                else{
                                        cout<<"Patient has "<<RBC<<"mllion and should consult the desired doctor\n";
                                }
                        }
                        cout<<endl;

                        cout<<"WBC Result\n";
                        WBC=rand()%15000;
                        if(WBC>=4500 && WBC<=10000){
                                cout<<"Patient has "<<WBC<<" in cells/mcl and is in normal range\n";
                        }
                        else{
                                cout<<"Patient has "<<WBC<<" in cells/mcl and should consult the desired doctor\n";
                        }

                        cout<<endl;
                        cout<<"Platelet Result\n";
                        platelets=rand()%470000;
                        if(platelets>=140000 && platelets<=450000){
                                cout<<"Patient has "<<platelets<<" in cells/mcl and is in normal range\n";
                        }
                        else{
                                cout<<"Patient has "<<platelets<<" in cells/mcl and should consult the desired doctor\n";
                        }

                        cout<<endl;
                        cout<<"Hemoglobin Result\n";
                        hemoglobins=rand()%20;
                        if(gender =='M'){
                                if(hemoglobins>=14 && hemoglobins<=17)
                                        cout<<"Patient has "<<hemoglobins<<"gm/dl hemoglobins and he is normal\n";

                                else
                                        cout<<"Patient has "<<hemoglobins<<" in gm/dl and should consult the desired doctor\n";

                        }
                        else if(gender == 'F'){
                                if(hemoglobins>=12 && hemoglobins<=15)
                                        cout<<"Patient has "<<hemoglobins<<"gm/dl hemoglobins and she is normal\n";

                                else
                                        cout<<"Patient has "<<hemoglobins<<" in gm/dl and should consult the desired doctor\n";

                    }

                        cout<<endl;
                        cout<<"Hematocrit Result\n";
                        hematocrit=rand()%52;
                        if(gender == 'M'){
                                if(hematocrit>=41 && hematocrit<=50)
                                        cout<<"Patient has "<<hematocrit<<"% hematocrit and he is normal\n";
                                else
                                        cout<<"Patient has "<<hematocrit<<"% and should consult the desired doctor\n";
                        }
                        else if(gender == 'F'){
                                if(hematocrit>=36 && hematocrit<=44)
                                        cout<<"Patient has "<<hematocrit<<"% hematocrit and she is normal\n";
                                else
                                        cout<<"Patient has "<<hematocrit<<"% and should consult the desired doctor\n";
                        }
                        cout<<endl;

                        cout<<"MCV Result\n";
                        MCV=rand()%100;
                        if(MCV>=80 && MCV<=95)
                                cout<<"Patient has "<<MCV<<"in femoliter and he is normal\n";
                        else
                                cout<<"Patient has "<<MCV<<" in femoliter and should consult the desired doctor\n";
                        cout<<endl;
        }

void bloodcount::displayb(){
	ofstream outfile; // producing an outfile
		outfile.open ("report.txt",ios::out);
			outfile <<"RBC = "<< RBC << " cells/mcl" << endl;
			outfile <<"WBC = "<< WBC << " cells/mcl" << endl;
			outfile <<"Platelets = "<< platelets << " cells/mcl" << endl;
			outfile <<"Hemoglobin = "<< hemoglobins << " gm/dl" << endl;
			outfile <<"MCV = "<< MCV << " femoliter" << endl;
			outfile << "Annotations:" << comment << endl;

}
//--------------------------------------------------------
bloodglucose::bloodglucose()
{
         pla_glucose=0;
}

void bloodglucose::plasmaglucose()
{
        srand(time(NULL));
        cout<<"Plasma glucose Result\n";
        pla_glucose=rand()%130;
        if((pla_glucose>=79) && (pla_glucose<=99))
                cout<<"Patient has "<<pla_glucose<<"mg/dL and it is normal\n";
        else if((pla_glucose>=100)&&(pla_glucose<=125))
                cout<<"Patient is prediabetics and has about"<<pla_glucose<<"mg/dL\n";
        else;
                cout<<"Patient is Diabetics and has about"<<pla_glucose<<"mg/dL\n";
                cout<<endl;
}

void bloodglucose::displayg(){
	ofstream outfile; // producing an outfile
		outfile.open ("report.txt",ios::out);
			outfile <<"Plasma Glucose = "<< pla_glucose << " mg/dL" << endl;
			outfile << "Annotations:" << comment << endl;

}

//-----------------------------------------------------------------
lipoprotein::lipoprotein(){
 total_chol = 0;
 LDL_chol = 0;
 HDL_chol = 0;
}

void lipoprotein::totalcholesterol(){

        srand(time(NULL));
        cout<<"Total Cholestrol Result\n";
        total_chol=rand()%250;
        if((total_chol<=200))
                cout<<"Patient is in desirable condition and his cholestrol is"<<total_chol<<"mg/dL\n";
        else if((total_chol>200)&&(total_chol<=239))
                cout<<"Patient is in Borderline condition and his cholestrol is"<<total_chol<<"mg/dL\n";
        else if(total_chol>=240)
                cout<<"Patient is in High state and his cholestrol is"<<total_chol<<"mg/dL\n";
cout<<endl;
}

void lipoprotein::LDLcholesterol(){

        srand(time(NULL));
        cout<<"LDL Cholestrol Result\n";
        LDL_chol=rand()%200;
        if((LDL_chol<100))
                cout<<"Patient is in optimal condition and his cholestrol is"<<LDL_chol<<"mg/dL\n";
        else if((LDL_chol>=100)&&(LDL_chol<=129))
                cout<<"Patient is in above optimal condition and his cholestrol is"<<LDL_chol<<"mg/dL\n";
        else if((LDL_chol>=130)&&(LDL_chol<=159))
                cout<<"Patient is in Borderline condition and his cholestrol is"<<LDL_chol<<"mg/dL\n";
        else if((LDL_chol>=160)&&(LDL_chol<=189))
                cout<<"Patient is in high condition and his cholestrol is"<<LDL_chol<<"mg/dL\n";
        else if(LDL_chol>=190)
                cout<<"Patient is in very high condition and his cholestrol is"<<LDL_chol<<"mg/dL\n";
cout<<endl;
}


void lipoprotein::HDLcholesterol(){

        srand(time(NULL));
        cout<<"HDL Cholestrol Result\n";
        HDL_chol=rand()%70;
        if((HDL_chol<40))
                cout<<"There is a major risk factor of heart disease\n";
        else if((HDL_chol>=40)&&(HDL_chol<=59))
                cout<<"Patient is better and his cholestrol is"<<HDL_chol<<"mg/dL\n";
        else if(HDL_chol>=60)
                cout<<"Patient is protective against heart disease and his cholestrol is"<<HDL_chol<<"mg/dL\n";

}

void lipoprotein::displayl(){
	ofstream outfile; // producing an outfile
		outfile.open ("report.txt",ios::out);
			outfile <<"Total Cholestrol = "<< total_chol << " mg/dL" << endl;
			outfile <<"LDL Cholestrol = "<< LDL_chol << " mg/dL" << endl;
			outfile <<"HDL Cholestrol = "<< HDL_chol << " mg/dL" << endl;
			outfile << "Annotations:" << comment << endl;

}
