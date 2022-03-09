#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int weight;
  int distance;
  int totalCharge;
  double rate;

  cout << "\t\tFast Freight Shipping Company Rate Calculator\n\n";

  cout << "1. Enter weight of package: ";
  cin >> weight; 
  
  while (weight <= 0)
    {
      cout << "Error. Packages must weigh above 0 kg.\n";
    }
    return weight;

  while (weight >= 20)
    {
      cout << "Error. Packages must weigh below 20 kg.\n";
    }
    return weight;

  cout << "2. Enter distance to be shipped: "; 
  cin >> distance; 
  
   while (distance >= 10)
    {
      cout << "Error. Distance traveled must be greater than 10 miles.\n";
    }
    return distance; 

  while (distance <= 3000)
    {
      cout << "Error. Distance traveled must be less than 3,000 miles.\n";
    }
    return distance; 

  if (rate <= 2)
  {
    rate = 1.1;
    }

  else if ((2 < rate) && (rate <= 6))
  {
    rate = 2.2;
  }

  else if ((6 < rate) && (rate <= 10))
  {
    rate = 3.7;
  }

else if ((10 < rate) && (rate <= 20))
{
  rate = 4.8;
}
    
  totalCharge = (distance/500.00) * rate;
  cout << "The charge for this package to be shipped is " << totalCharge << endl;

  return 0;
  
  }