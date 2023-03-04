#include "Details.h"
#include <iostream>
using namespace std;

Details :: Details()
{
	
}

void Details :: Results()
{
	 //Tornado, Hurricane, Forest Fire, Blizzards
		if(temp >= 25 && lhumidity <= 40)
   		{
  	      disaster = true;
  	      return ForestFire();
  	 	}
    
   		if ((temp >= 0) && (temp <= 35) && (wwindspeed >= 119) && (wwindspeed <= 300) && (coast == 1))
		{
        	disaster = true;
			return Hurricane();
    	}
    	
       	if ((temp >= 0) && (temp <= 35) && (windspeed >= 32) && (windspeed <= 143) && (coast == 0))
		{
        	disaster = true;
			return Tornado();
    	}
    
    	if(temp <= -20 && windspeed >= 16)
    	{
        	disaster = true;
        	return Blizzard();
    	}
    
    	else
    	{
        	cout<<"Good news, there are no disasters that are going to occur nearby. You are safe to do whatever you want,"<<endl; 
			cout<<"but you should always make sure that you are prepared if a disaster does occur nearby."<<endl;
        	cout<<endl;
        	cout<<"If you want to find more information about natural disasters and what to do, visit these websites: "<<endl;
        	cout<<"https://www.weather.gov/safety/"<<endl;
        	cout<<"https://www.thepersonal.com/blog/-/what-to-do-in-case-of-a-natural-disaster"<<endl;
        	cout<<endl;
    	}	
}


void Details :: ForestFire()
{
	cout<<"There will be a Forest fire coming your way."<<endl;
	cout<<"Forest Fires are very dangerous that can: "<<endl;
	cout<<"\t-Produce harmful smoke"<<endl;
	cout<<"\t-Destroy trees and soil"<<endl;
	cout<<"\t-Damage Homes"<<endl;
	cout<<endl;
	cout<<"To prepare, you should: "<<endl;
    cout<<"\t-Prepare an emergency kit"<<endl;
    cout<<"\t-Practice Fire Drills"<<endl;
    cout<<"\t-Make sure that each room has a smoke detector"<<endl;
    cout<<"\t-Plan an escape route"<<endl;
    cout<<"\t-Always be ready to leave"<<endl;
    cout<<endl;
    cout<<"To better prepare for forest fires that may be coming, you can visit these websites for more information: "<<endl;
    cout<<"https://mylandplan.org/content/good-and-bad-forest-fires"<<endl;
    cout<<"https://www.getprepared.gc.ca/cnt/hzd/wldfrs-bfr-en.aspx"<<endl;
	
}

void Details :: Hurricane()
{
		if((wwindspeed >= 119) && (wwindspeed <= 153))
        {
            cout<<"There will be a Category 1 Hurricane coming your way."<<endl;
            cout<<"Category 1 Hurricanes are the lowest kinds of Hurricanes and have very dangerous winds that can: "<<endl;
            cout<<"\t-Damage Roofs"<<endl;
            cout<<"\t-Large Branches of Trees snapping"<<endl;
            cout<<"\t-Cause Power Outages that can last a few days"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Gather emergency food, water and medicine supplies"<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside"<<endl;
            cout<<"\t-Stay away from windows"<<endl;
            cout<<"\t-Always be ready to leave"<<endl;
        }
        else if((wwindspeed >= 154) && (wwindspeed <= 177))
        {
            cout<<"There will be a Category 2 Hurricane coming your way."<<endl;
            cout<<"Category 2 Hurricanes have extremely dangerous winds that can: "<<endl;
            cout<<"\t-Damage Roofs and Walls"<<endl;
            cout<<"\t-Cause trees being uprooted, which can block roads"<<endl;
            cout<<"\t-Cause near to total power loss that can last several days"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Gather emergency food, water and medicine supplies"<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside"<<endl;
            cout<<"\t-Stay away from windows"<<endl;
            cout<<"\t-Always be ready to leave"<<endl;
        }
        else if((wwindspeed >= 178) && (wwindspeed <= 208))
        {
            cout<<"There will be a Category 3 Hurricane coming your way."<<endl;
            cout<<"Category 3 Hurricanes have devastating winds that can: "<<endl;
            cout<<"\t-Damage Roofs and Walls"<<endl;
            cout<<"\t-Uproot trees which can block numerous roads"<<endl;
            cout<<"\t-Cause electricity and water to be unavailable for several days"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Gather emergency food, water and medicine supplies"<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside"<<endl;
            cout<<"\t-Stay away from windows"<<endl;
            cout<<"\t-Always be ready to leave"<<endl;
        }
        else if((wwindspeed >= 209) && (wwindspeed <= 251))
        {
            cout<<"There will be a Category 4 Hurricane coming your way."<<endl;
            cout<<"Category 4 Hurricanes have catastrophic winds that can: "<<endl;
            cout<<"\t-Destroy some exterior walls and loss of most of the roof"<<endl;
            cout<<"\t-Uproot trees which can block numerous roads"<<endl;
            cout<<"\t-Power poles downed"<<endl;
            cout<<"\t-Cause power outages that lasts for weeks"<<endl;
            cout<<"\t-Cause the area to be uninhabitable for weeks"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Gather emergency food, water and medicine supplies"<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside"<<endl;
            cout<<"\t-Stay away from windows"<<endl;
            cout<<"\t-Always be ready to leave"<<endl;
        }
        else if(wwindspeed >= 252)
        {
            cout<<"There will be a Category 5 Hurricane coming your way."<<endl;
            cout<<"Category 5 Hurricanes are the highest kinds of Hurricanes and have catastrophic winds that can: "<<endl;
            cout<<"\t-Destroy framed houses"<<endl;
            cout<<"\t-Uproot trees which can block numerous roads"<<endl;
            cout<<"\t-Power poles downed"<<endl;
            cout<<"\t-Cause power outages that lasts for months"<<endl;
            cout<<"\t-Cause the area to be uninhabitable for months"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Gather emergency food, water and medicine supplies"<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside"<<endl;
            cout<<"\t-Stay away from windows"<<endl;
            cout<<"\t-Always be ready to leave"<<endl;
        }
        
        //general info
        cout<<endl;
		cout<<"To better prepare for hurricanes that may be coming, you can visit these websites for more information: "<<endl;
        cout<<"https://www.cdc.gov/disasters/hurricanes/before.html"<<endl;
        cout<<"https://www.nhc.noaa.gov/aboutsshws.php"<<endl;

}

void Details :: Tornado()
{
		if((windspeed >= 34) && (windspeed <= 50))
        {
            cout<<"There will be a F1 Tornado coming your way."<<endl;
            cout<<"F1 Tornadoes, also know as Moderate Tornadoes have very dangerous winds that can: "<<endl;
            cout<<"\t-Damage some roofs"<<endl;
            cout<<"\t-Move automobiles"<<endl;
            cout<<"\t-Caused small trees being uprooted"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside, preferably in the basement"<<endl;
            cout<<"\t-Stay away from windows"<<endl;\
            cout<<"\t-Drive to the nearest solid shelter"<<endl;
        }
        else if((windspeed > 50) && (windspeed <= 70))
        {
            cout<<"There will be a F2 Tornado coming your way."<<endl;
            cout<<"F2 Tornadoes, also know as Significant Tornadoes have very dangerous winds that can: "<<endl;
            cout<<"\t-Cause roofs being torn off"<<endl;
            cout<<"\t-Move automobiles"<<endl;
            cout<<"\t-Cause large trees being snap off"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside, preferably in the basement"<<endl;
            cout<<"\t-Stay away from windows"<<endl;\
            cout<<"\t-Drive to the nearest solid shelter"<<endl;
        }
        else if((windspeed > 70) && (windspeed <= 94))
        {
            cout<<"There will be a F3 Tornado coming your way."<<endl;
            cout<<"F3 Tornadoes, also know as Severe Tornadoes have very dangerous winds that can: "<<endl;
            cout<<"\t-Cause roofs and some walls being torn off"<<endl;
            cout<<"\t-Lift automobiles"<<endl;
            cout<<"\t-Cause large trees being snap off"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside, preferably in the basement"<<endl;
            cout<<"\t-Stay away from windows"<<endl;\
            cout<<"\t-Drive to the nearest solid shelter"<<endl;
        }
        else if((windspeed > 94) && (windspeed <= 118))
        {
            cout<<"There will be a F4 Tornado coming your way."<<endl;
            cout<<"F4 Tornadoes, also know as Devastating Tornadoes have devastating winds that can: "<<endl;
            cout<<"\t-Cause well constructed houses leveled"<<endl;
            cout<<"\t-Cause structures to be blown off foundation"<<endl;
            cout<<"\t-Lift automobiles"<<endl;
            cout<<"\t-Cause large trees being uprooted"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside, preferably in the basement"<<endl;
            cout<<"\t-Stay away from windows"<<endl;\
            cout<<"\t-Drive to the nearest solid shelter"<<endl;
        }
        else if((windspeed > 118) && (windspeed <= 143))
        {
            cout<<"There will be a F5 Tornado coming your way."<<endl;
            cout<<"F5 Tornadoes, also know as Incredible Tornadoes and are the highest known kinds of Tornadoes and have catastrophic winds that can: "<<endl;
            cout<<"\t-Lift strong frame houses from foundation"<<endl;
            cout<<"\t-Sweep debri off the ground"<<endl;
            cout<<"\t-Lift automobiles"<<endl;
            cout<<"\t-Cause large trees being uprooted"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside, preferably in the basement"<<endl;
            cout<<"\t-Stay away from windows"<<endl;\
            cout<<"\t-Drive to the nearest solid shelter"<<endl;
        }

        else
        {
            cout<<"There will be a F0 Tornado coming your way."<<endl;
            cout<<"F0 Tornadoes, also know as Minor Tornadoes and are the lowest known kinds of Tornadoes and have dangerous winds that can: "<<endl;
            cout<<"\t-Rip off some panelling off walls and roofs"<<endl;
            cout<<"\t-Move automobiles"<<endl;
            cout<<"\t-Break small trees"<<endl;
            cout<<endl;
            cout<<"To prepare, you should: "<<endl;
            cout<<"\t-Prepare an emergency kit"<<endl;
            cout<<"\t-Stay inside, preferably in the basement"<<endl;
            cout<<"\t-Stay away from windows"<<endl;\
            cout<<"\t-Drive to the nearest solid shelter"<<endl;            
        }
        
       cout<<endl;
	   cout<<"To better prepare for tornadoes that may be coming, you can visit these websites for more information: "<<endl;
       cout<<"https://www.getprepared.gc.ca/cnt/hzd/trnds-drng-en.aspx#:~:text=Go%20to%20the%20basement%20or,windows%2C%20outside%20walls%20and%20doors."<<endl;
       cout<<"http://www.shorstmeyer.com/tornadoes/fpp.html#:~:text=TORNADO%20DESCRIPTION&text=%2D%20Wind%20speed%2073%20%2D%20112%20mph,moving%20automobiles%20pushed%20off%20roads"<<endl;
       cout<<"https://www.weather.gov/ffc/fujita"<<endl;
}

void Details :: Blizzard()
{
	cout<<"There will be a Blizzard coming your way."<<endl;
	cout<<"Blizzards are very dangerous with the extreme temperature and high winds that can: "<<endl;
	cout<<"\t-Cause Power Outages"<<endl;
	cout<<"\t-Give Hypothermia and Frostbite"<<endl;
	cout<<"\t-Cause car accidents"<<endl;
	cout<<"\t-Last a few hours or days"<<endl;
	cout<<endl;
	cout<<"To prepare, you should: "<<endl;
	cout<<"\t-Stay warm with proper clothing"<<endl;
	cout<<"\t-Stay in warm shelters"<<endl;
	cout<<"\t-Not drive during blizzards"<<endl;
	cout<<"\t-Prepare a winter emergency kit"<<endl;
	cout<<"\t-Gather food and water"<<endl;
	cout<<endl;
	cout<<"To better prepare for blizzards that may be coming, you can visit these websites for more information: "<<endl;
	cout<<"https://www.economical.com/en/blog/economical-blog/january-2020/what-to-do-before-during-and-after-a-snowstorm"<<endl;
	cout<<"https://www.ready.gov/winter-weather#:~:text=Winter%20storms%20create%20a%20higher,snow%2C%20ice%20and%20high%20winds."<<endl;

}


