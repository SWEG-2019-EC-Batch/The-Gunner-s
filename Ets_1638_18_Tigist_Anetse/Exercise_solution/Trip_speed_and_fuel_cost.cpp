#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance;.
    int hours, minutes;
    double fuel_per_100km;
    double price_per_liter;
    cin >> distance;
    cin >> hours >> minutes;
    cin >> fuel_per_100km;
    cin >> price_per_liter;
    double total_hours = hours + (minutes /
    double avg_speed = distance / total_hours;
    double fuel_used = (distance / 100.0) * fuel_per_100km;
    double fuel_cost = fuel_used * price_per_liter;
    cout << fixed << setprecision(2);
    cout << avg_speed << " km/h, " 
         << fuel_used << " liters and " 
         << fuel_cost << " birr." << endl;

    return 0;
}
