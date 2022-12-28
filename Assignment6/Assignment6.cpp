//
// Assignment6.cpp
// 
// Eric Chhun
// 10/26/22
//
// Assignment6
// using loops to draw a shape
//

#include <iostream>
using namespace std;




int main()
{
        int numr; // numbers of rows
        int numstars = 1; // number of stars
        char spaces; // number of spaces
        int i,j;
        spaces = numr - 1;

        // prompt for the rows
        cout << " number of rows : ";
        cin >> numr;

        // loop through the stars
        for (i = numr; i > 0;i--)
        {
                cout << endl;
                for (j = numr; i < j; j--)
                {
                        cout << " ";
                }
                for (j = 0; i > j;j++)
                {
                        cout << '*';
                }
                for (j =0;i > j; j++)
                {
                        cout << '*';
                }
        }

        // another loop to get the stars
        for (i = 0; i < numr; i++)
        {
                cout << endl;
                for (j = 0; (numr - (i+1)); i++)
                {
                        cout << ' ';
                }
                 for (int j = 0; j < (2 * i + 1); j++)
                 {
                        cout << '*';
                 }
                 for (int j = 0; j < (numr - (i + 1)); j++)
                 {
                        cout << ' ';
                 }
                 cout << endl;
        }
        return 0;
}