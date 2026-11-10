/*
   Task 2: Electricity bill
   
   (a) Inputs and Outputs:
       - Inputs: Monthly electricity consumption in kWh (whole number)
       - Outputs: Energy fee, service fee, and total payment amount in birr (two decimal places)
   
   (b) Process:
       1. Read the total electricity units used from the user.
       2. Set up the fixed service charge at 10.00 birr.
       3. Determine energy charges via the conditional operator based on the 50 kWh tier limit.
       4. Add service charge to the energy charge to get the total bill.
       5. Output the results formatted to 2 decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int kWhUsed;
    const double SERVICE_FEE = 10.00;
    
    // Read input consumption
    cout << "Enter electricity units consumed (kWh): ";
    cin >> kWhUsed;
    
    // Energy calculation using conditional operator
    double energyFee = (kWhUsed <= 50) ? (kWhUsed * 1.50) : (50 * 1.50 + (kWhUsed - 50) * 2.00);
    
    // Final total computation
    double paymentTotal = energyFee + SERVICE_FEE;
    
    // Displaying formatted output
    cout << fixed << setprecision(2);
    cout << "Energy: " << energyFee << " and Total: " << paymentTotal << endl;
    
    return 0;
}
