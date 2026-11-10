#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const double ASSIGN_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    double assignment, midterm, finalMark;
    double total;
    string result;
    
    cout << "Enter assignment mark:";
    cin >> assignment;

    cout << "Enter midterm mark:";
    cin >> midterm;

    cout << "Enter final mark:";
    cin >> finalMark;


    total = assignment * ASSIGN_WEIGHT
          + midterm * MIDTERM_WEIGHT
          + finalMark * FINAL_WEIGHT;

    result = (total >= PASS_MARK) ? "Pass" : "Fail";

    
    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
