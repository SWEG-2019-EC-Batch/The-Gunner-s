#include<iostream>
using namespace std;
int main()

{
   float base_fare,bag_weight,rate;
   const short int weight_limit=20;
   float extra_charge=0;
   float total_value;
cout<<"enter base_fare";
cin>>base_fare;
cout<<"enter bag_weight in k.g"<<endl;
cin>>bag_weight;
cout<<"enter rate";
cin>>rate;
if(bag_weight>weight_limit)
     {extra_charge=(bag_weight-              weight_limit)*rate;}
total_value=base_fare+extra_charge;
cout<<"your trip fare information\n"<<endl;
cout<<"base_fare:"<<base_fare<<endl<<"extra_charge:"<<extra_charge<<endl<<"total_value:"<<total_value<<endl;
     short int age;
     string is_student;
     float discount;
cout<<"enter age"<<endl;
cin>>age;
cout<<"are you student/?"<<endl;
cin>>is_student;
if (age<=0)  discount=0;
else if (age <=12&&is_student=="yes")
{base_fare =base_fare-base_fare*0.65;
discount=base_fare*0.65;}
else if (age>=60&&is_student=="no")
{base_fare=base_fare-base_fare*0.5;
discount=base_fare*0.5;}
else if (age>=60&&is_student=="yes")
{base_fare=base_fare-base_fare*0.4;
discount=base_fare*0.4;}
else if (age>=60&&is_student=="no")
{base_fare=base_fare-base_fare*0.25;
discount=base_fare*0.25;}
else if (age<=60&&age>=12&&is_student=="yes")
{base_fare=base_fare-base_fare*0.15;
discount=base_fare*0.15;}
else if
(age<=60&&age>=12&&is_student=="no")
{base_fare=base_fare;
discount=0;}
cout<<"base_fare:"<<base_fare<<endl;
cout<<"discount:"<<discount;


return 0;
}#include<iostream>
using namespace std;
int main()

{
   float base_fare,bag_weight,rate;
   const short int weight_limit=20;
   float extra_charge=0;
   float total_value;
cout<<"enter base_fare";
cin>>base_fare;
cout<<"enter bag_weight in k.g"<<endl;
cin>>bag_weight;
cout<<"enter rate";
cin>>rate;
if(bag_weight>weight_limit)
     {extra_charge=(bag_weight-              weight_limit)*rate;}
total_value=base_fare+extra_charge;
cout<<"your trip fare information\n"<<endl;
cout<<"base_fare:"<<base_fare<<endl<<"extra_charge:"<<extra_charge<<endl<<"total_value:"<<total_value<<endl;
     short int age;
     string is_student;
     float discount;
cout<<"enter age"<<endl;
cin>>age;
cout<<"are you student/?"<<endl;
cin>>is_student;
if (age<=0)  discount=0;
else if (age <=12&&is_student=="yes")
{base_fare =base_fare-base_fare*0.65;
discount=base_fare*0.65;}
else if (age>=60&&is_student=="no")
{base_fare=base_fare-base_fare*0.5;
discount=base_fare*0.5;}
else if (age>=60&&is_student=="yes")
{base_fare=base_fare-base_fare*0.4;
discount=base_fare*0.4;}
else if (age>=60&&is_student=="no")
{base_fare=base_fare-base_fare*0.25;
discount=base_fare*0.25;}
else if (age<=60&&age>=12&&is_student=="yes")
{base_fare=base_fare-base_fare*0.15;
discount=base_fare*0.15;}
else if
(age<=60&&age>=12&&is_student=="no")
{base_fare=base_fare;
discount=0;}
cout<<"base_fare:"<<base_fare<<endl;
cout<<"discount:"<<discount;


return 0;
}
