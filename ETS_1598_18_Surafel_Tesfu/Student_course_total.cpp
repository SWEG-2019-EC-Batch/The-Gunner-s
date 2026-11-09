#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 

     const double ASSIGNMENT_P = 0.20;
      const double MIDTERM_P = 0.30;
       const double FINAL_P = 0.50;
         
          double assignmentMark;
          double midtermMark;
           double finalMark; 
           double courseTotal;
           
             cout << "Enter assignment mark (out of 100): ";
              cin >> assignmentMark;
             cout << "Enter midterm mark (out of 100): ";
              cin >> midtermMark;
               cout << "Enter final mark (out of 100): "; 
               cin >> finalMark;  
               courseTotal = (assignmentMark * ASSIGNMENT_P) + (midtermMark * MIDTERM_P) + (finalMark * FINAL_P); 
               cout << fixed << setprecision(1);
                cout << "\nyour course result is : "<<  courseTotal << endl; 
                 cout << "\nStatus: " << (courseTotal >= 50 ? "Pass" : "Fail") << endl;
                  return 0; 
                }