
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, hours, minutes;
    double fuelConsumption, price;
    double time, speed, fuel, cost;

    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel hours: ";
    cin >> hours;

    cout << "Enter travel minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100 km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter: ";
    cin >> price;

    time = hours + minutes / 60.0;

    speed = distance / time;

    fuel = distance * fuelConsumption / 100.0;

    cost = fuel * price;

    cout << fixed << setprecision(2);

    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuel << " liters" << endl;
    cout << "Fuel cost: " << cost << " birr" << endl;

    return 0;
}
