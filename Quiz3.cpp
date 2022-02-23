#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3; 
    srand(time(0));

    num1 = rand() % 100; // produce a random number from range 0-99
    cout << num1 << endl;

    num2 = rand() % 100; // produce a random number from range 0-99
    cout << num2 << endl;

    num3 = rand() % 100; // produce a random number from range 0-99
    cout << num3 << endl;

    int sum;
    int avg;
    sum = num1 + num2 + num3; // add all three random numbers
    cout << sum << endl; 
    
    avg = sum / 3.0; // divide sum of all three numbers by "3" to get average
    cout << avg << endl;

    cout << fixed << setprecision(5); // allows for five digits of the average to be displayed
    cout << "The average of the three numbers is " << avg << endl;

    return 0;
}