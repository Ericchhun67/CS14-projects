//
// Assignment8.cpp
// 
// Eric Chhun
// 10/27/22
//
// Assignment8
// writing a three functions
//

#include <iostream>
#include <iomanip>
using namespace std;




const double COFFEE = 1.75f;
const double BEGELS = 1.50f;
const double DANISH = 2.25f;



// prompt the user
// calulated the bill: subtotal, tax, and grand total of the bill
// print out the bill
void getuserbill(int &, int &, int &);
void calbill(int b, int c, int d, double &d1, double &d2, double &b1, double &c1, double &c2,
                double &tax, double &total);
void printbill(int c, int b, int d, double d1, double c1, double b1, double s, double tax, double total );




void getuserbill(int &b, int &c, int &d)
{
        // prompt for  coffee
        cout << " Enter quantity for coffee : " << flush;
        cin >> c;
        // prompt for BEGELS
        cout << " Enter quantity for BEGELS : " << flush;
        cin >> b;
        // prompt for Danish
        cout << " Enter quantity for Danish : " << flush;
        cin >> d;
        return;         
}


void calbill(int b, int c, int d, double &d1, double &b1, double &c1,
                double &tax, double &total)
{
        c1 = c * COFFEE;
        b1 = b * BEGELS;
        d1 = d * DANISH;
        tax = c * d * b; // tax the 3 item
        total = c1 * c + d1 * d + b1 * b; // get the total amount
        return;
}



void printbill(int c, int b, int d, double d1, double c1, double b1, double s, double tax, double total )
{
        int i, ct; //; ct for count loop
       // title of the coffee shop
       cout << " skybucks coffee shop" << endl;
       cout << " Item " << "\tQuantity " << "\tPrice" << flush;
       cout << "\n------------------------------------" << endl;
       cout << "\n coffee\t\t" << c << "\t\t$" << c1 << endl;
       cout << "\n Begels\t\t" << b << "\t\t$" << b1 << endl;
       cout << "\n Danish\t\t" << d << "\t\t$" << d1 << endl;
       cout << "\n Sub Tax\t\t" << s << "$";
       cout << "\n Tax\t\t\t\t" << tax << "$";
       cout << "\n Total\t\t\t\t" << total << "$";
      return;
}

int main(int argc, char* argv[])
{
        int a, b,c,d;
        double c1,b1, d1, tax, total;
        cout << fixed << setprecision(2);
        getuserbill(a,c,b);
        calbill(a,c,b,c1,b1,d1,tax,total);
        printbill(a,c,b, c1,b1,d1,d,tax,total);
        return 0;
}