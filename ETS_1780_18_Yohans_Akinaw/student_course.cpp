#include<iostream>
using namespace std;

int main(){


const double assignment_weight=0.2;
const double midterm_weight=0.3;
const double final_weight=0.5;
const int    pass_mark=50;

double assignment{};
double midterm{};
double final{};

cout<<"Enter your assignment result out of 100:\n";
cin>>assignment;
cout<<"Enter midterm exam result out of 100:\n";
cin>>midterm;
cout<<"Enter finam exam result out of 100:\n";
cin>>final;
//calculate the total result 

double total=(assignment_weight*assignment)
+(midterm_weight*midterm)
+(final_weight*final);

string status=(total>=pass_mark)?"Pass":"Fail";

//display the output 
cout<<"Total:"<<total<<"\n";
cout<<"Status:"<<status<<"\n";

return 0;







}