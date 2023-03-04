#ifndef EWS_H
#define EWS_H
using namespace std;

class NaturalDisasterEWS
{
	public:
		float temp;
		float lhumidity;
		float hhumidity;
		float windspeed;
		float wwindspeed;
		int coast;
		
		NaturalDisasterEWS();
		void getData();
		void setData();
		
	
};
#endif

