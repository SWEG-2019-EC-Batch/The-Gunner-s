
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int route, age;
    float baseFare = 0, bagWeight, rate;
    float extraCharge = 0, discount = 0;
    float discountAmount, totalFare;
    string routeName;
    char isStudent;

    // Select trip route
    cout << " TRIP ROUTES \n";
    cout << "1. Addis Ababa - Hawassa\n";
    cout << "2. Addis Ababa - Bahir Dar\n";
    cout << "3. Addis Ababa - Mekelle\n";
    cout << "4. Addis Ababa - Dire Dawa\n";
    cout << "5. Addis Ababa - Gondar\n";

    cout << "\nEnter your route number: ";
    cin >> route;

    // Determine base fare using switch
    switch (route)
    {
        case 1:
            routeName = "Addis Ababa - Hawassa";
            baseFare = 1000;
            break;

        case 2:
            routeName = "Addis Ababa - Bahir Dar";
            baseFare = 1500;
            break;

        case 3:
            routeName = "Addis Ababa - Mekelle";
            baseFare = 2000;
            break;

        case 4:
            routeName = "Addis Ababa - Dire Dawa";
            baseFare = 1200;
            break;

        case 5:
            routeName = "Addis Ababa - Gondar";
            baseFare = 1800;
            break;

        default:
            cout << "Invalid route selection!\n";
            return 0;
    }

    // Enter passenger information
    cout << "\nEnter passenger age: ";
    cin >> age;

    // Enter baggage information
    cout << "Enter baggage weight (kg): ";
    cin >> bagWeight;

    // Calculate extra baggage charge
    if (bagWeight > 20)
    {
        cout << "Enter extra rate per kg: ";
        cin >> rate;

        extraCharge = (bagWeight - 20) * rate;
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

    // Print trip information
    cout << fixed << setprecision(2);

    cout << "\n TRIP RECEIPT\n";

    cout << "Route: " << routeName << endl;
    cout << "Passenger age: " << age << endl;
    cout << "Base fare: " << baseFare << " Birr\n";
    cout << "Baggage weight: " << bagWeight << " kg\n";
    cout << "Extra baggage charge: " << extraCharge << " Birr\n";
    cout << "Discount: " << discount * 100 << "%\n";
    cout << "Discount amount: " << discountAmount << " Birr\n";

    cout << "TOTAL FARE: " << totalFare << " Birr\n";
    cout << "==================================\n";

    return 0;
}
