//
// Assignment3.cpp
// 
// Eric Chhun
// 10/26/22
//
// Assignment3
// A program using if statements
// 

#include <iostream>
using namespace std;



int main(int argc, char **argv)
{
        int a; // side a
        int b; // side b
        int c; // side c


        // check for sides of the triangle
        if (a < b)
        {
                // prompt for side a
                cout << " Enter side a : " << endl;
                cin >> a;
                
                // print results
                cout << " The side form a right triangle. " << endl;
        }
        
        if (b < c)
        {
                // prompt for side b
                cout << " Enter side b: " << endl;
                cin >> b;

                // print results
                cout << " The side form a right triangle. " << endl;
        }

        if (c < a)
        {
                // prompt for side c
                cout << " Enter side c: " << endl;
                cin >> c;

                // print results
                cout << " The side form a left triangle. " << endl;
        }

        // check if sides does not form a triangle
        if (a > b)
        {
                cout << " Enter side a : " << endl;
                cin >> a;

                cout << " The side do not form a triangle. " << endl;
        }
        return 0;
}