/*
   Task 3: Trip speed and fuel cost
   
   (a) Inputs and Outputs:
       - Inputs: Trip distance (km), travel hours, travel minutes, fuel consumption per 100 km, and unit price per liter
       - Outputs: Average speed (km/h), fuel consumed (liters), and total fuel cost (birr), formatted to two decimal places
   
   (b) Process:
       1. Input trip distance, hours, minutes, fuel rate, and price per liter.
       2. Convert travel minutes into fractional hours and add to total hours.
       3. Compute average speed (distance / total hours).
       4. Compute fuel volume used based on the 100 km rating.
       5. Compute total financial cost by multiplying volume by unit price.
       6. Print results formatted to two decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double tripDist, ratePer100Km, literPrice;
    int hrs, mins;
    
    // Getting trip details
    cout << "Enter trip distance (km): ";
    cin >> tripDist;
    cout << "Enter travel time - hours: ";
    cin >> hrs;
    cout << "Enter travel time - minutes: ";
    cin >> mins;
    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> ratePer100Km;
    cout << "Enter price per liter (birr): ";
    cin >> literPrice;
    
    // Time conversion using static_cast
    double totalTimeHrs = hrs + (static_cast<double>(mins) / 60.0);
    
    // Calculations
    double meanSpeed = tripDist / totalTimeHrs;
    double litersConsumed = (tripDist / 100.0) * ratePer100Km;
    double moneySpent = litersConsumed * literPrice;
    
    // Printing formatted results
    cout << fixed << setprecision(2);
    cout << meanSpeed << " km/h, " << litersConsumed << " liters and " << moneySpent << " birr." << endl;
    
    return 0;
}
