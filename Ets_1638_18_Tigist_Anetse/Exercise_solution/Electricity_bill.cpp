#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int unit;
  cout <<"enter electricity unit in kWH:"<<endl;
  cin  >>unit;
  double energy_charge;
  energy_charge = (unit<=50)? unit*1.5:50*1.5+(unit-50)
 *2;
  double total;
  const int service_charge=10;
  total= service_charge + energy_charge;
  cout << fixed << setprecision(2);
  cout <<"energy charge is: " << energy_charge<< " birr"<<endl;
  cout<<"survice charge is: " << service_charge<<"birr"<<endl;
  cout<<"total birr is:  " << total<<"birr"<<endl;
  return 0;
}
