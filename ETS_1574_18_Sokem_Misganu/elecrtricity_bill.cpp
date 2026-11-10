
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const int LIMIT = 50;
    const double SERVICE_CHARGE = 10.00;

    int units;
    double energy, service, total;

    
    cout << "Enter electricity units: ";
    cin >> units;

    
    energy = (units <= LIMIT)
           ? units * FIRST_RATE
           : LIMIT * FIRST_RATE + (units - LIMIT) * EXTRA_RATE;

    service = SERVICE_CHARGE;
    total = energy + service;


    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energy << " birr" << endl;
    cout << "Service charge: " << service << " birr" << endl;
    cout << "Total bill: " << total << " birr" << endl;

    return 0;
}
