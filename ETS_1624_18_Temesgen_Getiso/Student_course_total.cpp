/*
   Task 1: Student course total
   
   (a) Inputs and Outputs:
       - Inputs: Assignment score, midterm score, and final exam score out of 100
       - Outputs: Calculated course total (1 decimal place) and Pass/Fail result
   
   (b) Process:
       1. Prompt user for assignment, midterm, and final grades.
       2. Calculate final weighted score: (assignment * 0.20) + (midterm * 0.30) + (final * 0.50).
       3. Check pass status using the conditional operator (>= 50.0 is Pass, else Fail).
       4. Print the total mark and status.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double assignMark, midMark, finalExam;
    
    // Accepting user inputs
    cout << "Enter assignment mark (out of 100): ";
    cin >> assignMark;
    cout << "Enter midterm mark (out of 100): ";
    cin >> midMark;
    cout << "Enter final mark (out of 100): ";
    cin >> finalExam;
    
    // Computing final score
    double courseTotal = (assignMark * 0.20) + (midMark * 0.30) + (finalExam * 0.50);
    
    // Ternary operator for status evaluation
    string remark = (courseTotal >= 50.0) ? "Pass" : "Fail";
    
    // Output formatting
    cout << fixed << setprecision(1);
    cout << "Total: " << courseTotal << " and " << remark << endl;
    
    return 0;
}
