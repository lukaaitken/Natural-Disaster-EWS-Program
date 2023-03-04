#include "EWS.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

NaturalDisasterEWS :: NaturalDisasterEWS()
{
	temp = 0;
	lhumidity = 0;
	hhumidity = 0;
	windspeed = 0;

	
}

void NaturalDisasterEWS :: getData()
{
	ofstream outfile;	//creating randomized text file
	srand(time(0));
	outfile.open("info.txt");
  	outfile<<(rand() % 100) - 50<<endl;	//temperature
   	outfile<<(rand() % 100)<<endl;	//high humidity
   	outfile<<(rand() % 100)<<endl;	//low humidity
   	outfile<<(rand() % 143)<<endl;	//windspeed
   	outfile<<(rand() % 300)<<endl;	//Wwindspeed
   	outfile<<(rand() & 1)<<endl; //near coast
   	cout<<"File Randomly Generated"<<endl;
   	cout<<endl;
   	outfile.close();
}

void NaturalDisasterEWS :: setData()
{
	ifstream infile;
	infile.open("info.txt");
	
	if(infile.fail())	//checks if file exists
		cout<<"File doesn't exist"<<endl;
	else
		cout<<"File exists"<<endl;
	
	if(!infile.is_open())
	{
		infile.open("info.txt");
	 } 
	infile >> temp >> hhumidity >> lhumidity >> windspeed >> wwindspeed >> coast;
    infile.close();
}



