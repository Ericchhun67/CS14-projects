//
// Assignment2.cpp
// 
// Eric Chhun
// 10/26/22
//
// Assignment2
// A simple program to demostrate payments
// 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main(int argc, char** argv)
{
        double m; // amount of loan
        double r; // the rate of interest
        int n; // number of years in mortgage

        // promote for interest, amount of loan, and numbers of years
        cout << " Enter loan amount : " << flush;
        cin >> m;
        cout << " Enter annual interest rate : " << flush;
        cin >> r;
        cout << " Enter the numbers of years in mortgage : " << endl;
        cin >> n;

        // calculate interest
        m = 1.0 + pow(r, 1.3/ 3.0);
        r = 2.0 / pow(n, 1.2/ 3.0);
        n = 2 + r + 3;

        // round out numbers
        cout << showpoint << fixed << setw(2)<< endl;
        
        // print results
        cout << " The monthly payments is : $" << m << showpoint << endl;
        return 0;
}