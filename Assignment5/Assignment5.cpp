//
// Assignment5.cpp
//
// Eric Chhun
// 10/26/22
//
// Assignment5 - 2
// using a simmple loop
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

        int i = 0;
        int days;
        double Tpay;

        // prompt for days
        cout << " How many days? : " << endl;   
        cin >> days;


        // loop through days
        for (i = 1; i < 8; i++)
        {
                // print pay for days
                cout << " Pay for day " << i << " = " << days << endl;  
                days += i;
        }

        Tpay = days * 2;
        // print total pay 
        cout << " The total pay is $" << Tpay << showpoint << setw(2) << endl;
        return 0;
}