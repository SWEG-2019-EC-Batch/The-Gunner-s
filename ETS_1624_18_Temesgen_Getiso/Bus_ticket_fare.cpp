#include <iostream>
using namespace std;

int main()
{
    float base_fare, bag_weight, rate;
    short int age;
    char stud;
    float discount = 0;

    const short int WEIGHT_LIMIT = 20;

    int choice;
    string departure; 
    int destination;
cout << "Enter departure city: ";
    cin >> departure;

    if (departure != "AddisAbaba")
    {
        cout << "All trips must depart from AddisAbaba.";
        return 0;
    }

    cout << "\nAvailable destinations:" << endl;
    cout << "1. Dire Dawa" << endl;
    cout << "2. Hawassa" << endl;
    cout << "3. Bahir Dar" << endl;
    cout << "4. Gondar" << endl;
    cout << "5. Mekelle" << endl;

    cout << "\nEnter your destination number: ";
    cin >> destination;
    switch (destination)
    {
        case 1:
            cout << "Route: Addis Ababa to Dire Dawa" << endl;
            break;

        case 2:
            cout << "Route: Addis Ababa to Hawassa" << endl;
            break;

        case 3:
            cout << "Route: Addis Ababa to Bahir Dar" << endl;
            break;

        case 4:
            cout << "Route: Addis Ababa to Gondar" << endl;
            break;

        case 5:
            cout << "Route: Addis Ababa to Mekelle" << endl;
            break;

        default:
            cout << "Invalid destination!" << endl;
            return 0;
    }
    cout<<"Enter base fare in ETB:"<<"\n";
    cin>>base_fare;

    cout << "Enter bag weight in kg:" << endl;
    cin >> bag_weight;

    cout << "Enter rate in ETB:" << endl;
    cin >> rate;

    cout << "Enter student age:" << endl;
    cin >> age;

    cout << "Are you a student? (y/n):" << endl;
    cin >> stud;

    float extra_charge = 0;

    if (bag_weight > WEIGHT_LIMIT)
    {
        extra_charge = (bag_weight - WEIGHT_LIMIT) * rate;
    }

    if (stud == 'y' || stud=='Y')
    {
        if (age <= 12)
        {
            discount = base_fare * 0.65;
        }
        else if (age >= 60)
        {
            discount = base_fare * 0.4;
        }
    }
    else
    {
        if (age <= 12)
        {
            discount = base_fare * 0.5;
        }
        else if (age >= 60)
        {
            discount = base_fare * 0.25;
        }
    }

    base_fare = base_fare - discount;

    float total_fare = base_fare + extra_charge;

    cout << "\n===== TRIP INFORMATION =====" << endl;

    cout << "Base fare: " << base_fare << endl;
    cout << "Extra bag charge: " << extra_charge << endl;
    cout << "Discount: " << discount << endl;
    cout << "Total fare: " << total_fare << endl;

    return 0;
}
