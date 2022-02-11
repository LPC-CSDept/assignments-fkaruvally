#include <iostream>
using namespace std;

int main()
{
    int numMale; 
    int numFemale; 
    int total = numMale + numFemale;

    cout << "Enter the number of male students in the class: " << endl;
    cin >> numMale;

    cout << "Enter the number of female students in the class " << endl;
    cin >> numFemale;

    cout << "The total number of students in the class is " << total << "." << endl;

    int perMale = numMale / total;
    int perFemale = numFemale / total;

    cout << perMale << " percent of students are male." << endl;
    cout << perFemale << " percent of students are female." << endl;

    return 0;
}