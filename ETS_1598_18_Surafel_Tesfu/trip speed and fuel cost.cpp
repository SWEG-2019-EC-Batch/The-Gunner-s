#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance;
    int hours;
    int minutes;
    double fuelRatePer100Km;
    double pricePerLiter;
    double totalHours;
    double averageSpeed;
    double fuelUsed;
    double fuelCost;

    
    cout << "Enter trip distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Enter car's fuel use (liters per 100 km): ";
    cin >> fuelRatePer100Km;

    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;
    totalHours = hours + (minutes / 60.0);

    averageSpeed = distance / totalHours;
    fuelUsed = (distance / 100.0) * fuelRatePer100Km;
    fuelCost = fuelUsed * pricePerLiter;

    
    cout << fixed << setprecision(2);
    cout << "\n Trip Summary \n";
    cout << "Average Speed: " << averageSpeed << " km/h\n";
    cout << "Fuel Used:     " << fuelUsed << " liters\n";
    cout << "Fuel Cost:     " << fuelCost << " birr\n";

    return 0;
}