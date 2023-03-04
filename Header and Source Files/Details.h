#ifndef DETAILS_H
#define DETAILS_H
#include "Ews.h" 
using namespace std;

class Details : public NaturalDisasterEWS 
{
	public:
		bool disaster;
		
		Details();
		void Results();
		
		void ForestFire();
		void Hurricane();
		void Tornado();
		void Blizzard();
		
};
#endif
