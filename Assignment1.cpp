//
// Assignment1.cpp
//
// Eric Chhun
// 08/17/22
// 
// Assignment1
// A simple little program to print and prompt
//




#include <iostream>
using namespace std;




int main()
{
        int miles;
        int feet;
        double kilo = 2.2;


        // prompt for miles and feet
        cout << "\n Enter miles : " << endl;
        cin >> miles;

        cout << "\n Enter feet : " << endl;
        cin >> feet;



        // make calulations
        miles = feet * 2;
        kilo = feet * miles / 3;

        // print results
        cout << miles << " miles " << " and " << feet << " feet " << " is "
             << kilo << " kilo." << endl;
        
        return 0;
}
