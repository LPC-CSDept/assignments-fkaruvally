#include <iostream>
using namespace std;

int main()
{
    int classA;
    int classB;
    int classC;

    int priceA = 15;
    int priceB = 12;
    int priceC = 9;

    int total;

    cout << "Enter the number of tickets sold for Class A: " << endl;
    cin >> classA;

    int classAT = classA*priceA;

    cout << "Class A sold " << classAT << " tickets." << endl;

    cout << "Enter the number of tickets sold for Class B: " << endl;
    cin >> classB;

    int classBT = classB*priceB;

    cout << "Class B sold " << classBT << " tickets." << endl;

    cout << "Enter the number of tickets sold for Class C: " << endl;
    cin >> classC;

    int classCT = classC*priceC;

    cout << "Class C sold " << classCT << " tickets." << endl;

    total = classAT + classBT + classCT;

    cout << "The total amount of income generated was " << total << "." << endl;

    return 0;
}