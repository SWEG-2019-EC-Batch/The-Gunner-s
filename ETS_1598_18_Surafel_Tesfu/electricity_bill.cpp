
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
    const double RATE_L = 1.50;  // the rate for the electricity units below 50        
    const double RATE_H = 2.00;  // the rate for the electricity units above 50     
    const double SERVICE_CHARGE = 10.0;    
    int units;
    double energyCharge;
    double totalBill;

    
    cout << "Enter electricity units used (kWh): ";
    cin >> units;

    energyCharge = (units <= 50 ) ? 
                   (units * RATE_L) : 
                   ((50 * RATE_L) + ((units - 50 ) * RATE_H));

    
    totalBill = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "\nElectricity Bill Summary\n";
    cout << "Energy Charge:  " << energyCharge << " birr\n";
    cout << "Service Charge: " << SERVICE_CHARGE << " birr\n";
    cout << "Total Bill:     " << totalBill << " birr\n";

    return 0;
}

