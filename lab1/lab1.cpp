#include <iostream>
using namespace std;












int main(int argc, char **argv)
{
        char female = 'F';
        char married = 'Y' ;
        int numofSum;
        int year;
        int Salary;
        double height = 79.20;
        double gpa = 4.69;
        int balance;

        // exerise 2
        int sum;
        int sum2;



        // prompt 
        cout << "\nPlease enter gender : " << endl;
        cin >> female;
        cout << "\n is she married?" << endl;
        cin >> married;
        cout << "\n Enter number of sons : "<< endl;
        cin >> numofSum;
        cout << "\n Enter the year : " << endl;
        cin >> year;
        cout << "\n Enter Salary : " << endl;
        cin >> Salary;
        cout << "\n Enter height :" << endl;
        cin >> height;
        cout << "\n Enter gpa : " << endl;
        cin >> gpa;
        cout << balance;



        // print results
        cout << "\n the gender is " << female << endl;
        cout << "\nis she married?" << married << endl;
        cout << "\n The number of son is  " << numofSum << endl;
        cout << " \n The year is " << year << endl;
        cout << "\n the Salary is " << Salary << endl;
        cout << "\n the height is " << height << endl;
        cout << "\n gpa is " << gpa << endl;
        cout << "\n the balance is " << balance << endl;




        // exerise 2

        cout << " \n Enter sum 1 : " << endl;
        cin >> sum;
        cout << " sum 2 : " << endl;
        cin >> sum2;




        sum = sum2 + 4 / 2;
        sum = 4/ 2 * sum2;
        cout << " sum is " << sum  << sum2 << endl;

        return 0;
}