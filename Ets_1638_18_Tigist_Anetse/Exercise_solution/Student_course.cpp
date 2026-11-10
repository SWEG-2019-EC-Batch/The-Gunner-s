#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double ass,mid,final;
  cout << "enter assignment mark:";
  cin  >> ass;
  cout << "enter midterm mark:";
  cin  >> mid;
  cout << "enter final mark:";
  cin  >> final;
  double total;
  total= (ass*0.2) +(mid*0.3)+(final*0.5);
  cout <<"Total: "<<total<<endl;
  total>=50?cout<<"pass\n":cout<<"fail\n";
  return 0;
}
