


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const float WEIGHT_LIMIT = 20.0;

    int route, age;
    double baseFare, bagWeight, rate = 0;
    double extraCharge = 0, discount = 0;
    double discountAmount, totalFare;

    string routeName;
    char isStudent;

    // Select trip route
    cout << "========== TRIP ROUTES ==========\n";
    cout << "1. Addis Ababa - Hawassa\n";
    cout << "2. Addis Ababa - Bahir Dar\n";
    cout << "3. Addis Ababa - Mekelle\n";
    cout << "4. Addis Ababa - Dire Dawa\n";
    cout << "5. Addis Ababa - Gondar\n";

    cout << "Select route number: ";
    cin >> route;

    // Determine route using switch
    switch (route)
    {
        case 1:
            routeName = "Addis Ababa - Hawassa";
            break;

        case 2:
            routeName = "Addis Ababa - Bahir Dar";
            break;

        case 3:
            routeName = "Addis Ababa - Mekelle";
            break;

        case 4:
            routeName = "Addis Ababa - Dire Dawa";
            break;

        case 5:
            routeName = "Addis Ababa - Gondar";
            break;

        default:
            cout << "Invalid route selection!";
            return 0;
    }

    // Enter base fare
    cout << "Enter base fare (Birr): ";
    cin >> baseFare;

    // Enter passenger information
    cout << "Enter passenger age: ";
    cin >> age;

    // Enter baggage weight
    cout << "Enter baggage weight (kg): ";
    cin >> bagWeight;

    // Calculate extra baggage charge
    if (bagWeight > WEIGHT_LIMIT)
    {
        cout << "Enter extra rate per kg (Birr): ";
        cin >> rate;

        extraCharge = (bagWeight - WEIGHT_LIMIT) * rate;
    }

    // Determine passenger discount
    if (age <= 12)
    {
        discount = 0.50;
    }
    else if (age >= 60)
    {
        discount = 0.25;
    }
    else
    {
        cout << "Are you a student? (Y/N): ";
        cin >> isStudent;

        if (isStudent == 'Y' || isStudent == 'y')
        {
            discount = 0.15;
        }
    }

    // Calculate discount and total fare
    discountAmount = baseFare * discount;

    totalFare = baseFare - discountAmount + extraCharge;

    // Display trip information
    cout << fixed << setprecision(2);

    cout << "\nTRIP RECEIPT \n";
    cout << "Route: " << routeName << endl;
    cout << "Base fare: " << baseFare << " Birr\n";
    cout << "Passenger age: " << age << endl;
    cout << "Baggage weight: " << bagWeight << " kg\n";
    cout << "Extra baggage charge: " << extraCharge << " Birr\n";
    cout << "Discount rate: " << discount * 100 << "%\n";
    cout << "Discount amount: " << discountAmount << " Birr\n";

  
    cout << "TOTAL FARE: " << totalFare << " Birr\n";
   

    return 0;
}

