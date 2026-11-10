#include<iostream>
#include<iomanip>
using namespace std;

int main(){

//declaring basic variables 
    double distance{};
    int hours{};
    int minutes{};
    double fuel_consumption_per_100km{};

   double price_rate{};
//accepting input from users
cout<<"Enter the distance traveled:\n";
cin>>distance;

cout<<"Enter the fuel use rate per 100km: \n";
cin>>fuel_consumption_per_100km;

cout<<"Enter the price per litter(birr)\n";
cin>>price_rate;

cout<<"Enter time in hours and minutes separated by space \n";
cin>>hours>>minutes;

//mathematical and logical calculation

 double fuel_consumption_rate_per_km=fuel_consumption_per_100km/100;//consumption rate per km
 
 double fuel_use=fuel_consumption_rate_per_km*distance;//the fuel used

double time=hours+(minutes/60.0);

double speed=distance/time;

 double price=price_rate*fuel_use;

//displaying the output
cout<<fixed<<setprecision(2);
cout<<"the average speed is   "<<speed<<"\n";
cout<<"the fuel used "<<fuel_use<<"\n";
cout<<"the price is "<<price<<"\n";


return 0;





}