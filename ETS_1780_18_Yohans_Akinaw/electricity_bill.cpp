#include <iostream>
#include <iomanip>
using namespace std;
int main(){

//declaring the basic variables 
const int base_units=50;
const double service_charge=10.0;
const double unit_cost=1.5;//the cost the user has to pay for the base units 
const double extra_cost=2.0;//the cost the user pay if the units are morethan the base units 
int electricity_units{};
cout<<"Enter the electricity units (KWh)\n";
cin>>electricity_units;

//mathematical calculation phase

double energy_charge=(electricity_units<=base_units) ? 
electricity_units*unit_cost:
base_units*unit_cost+(electricity_units-base_units)*extra_cost;//the price the user has to pay for energy consuption 

double total_bill=energy_charge+service_charge;

//dispaly the output 
cout<<fixed<<setprecision(2);
cout<<"The  service charge :"<<service_charge<<"\n";
cout<<"Energy Charge :"<<energy_charge<<"\n";
cout<<"Total Bill :"<<total_bill<<"\n";

return 0;


}