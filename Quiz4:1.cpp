#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
  int choice; 
  double radius;
  double width; 
  double length;
  double base;
  double height;
  double area1;
  double area2;
  double area3; 
  double area4;
  
  cout << "\t\tGemotry Calculator\n\n";
  cout << "1. Calculate the Area of a Circle\n";
  cout << "2. Calcualte the Area of a Rectangle\n";
  cout << "3. Calculate the Area of a Triangle\n";
  cout << "4. Quit";
  cout << "Enter your choice (1-4): ";
  cin >> choice;

  cout << fixed << showpoint << setprecision(5);
  if (choice == 1)
  {
    cout << "Enter radius of circle: ";
    cin >> radius;
    
    while (radius < 0)
    {
      cout << "Error. Please enter a positive number.\n";
    }
    return radius; 
    
    area1 = 3.14159 * pow(radius, 2.0);
    cout << "The Area of the cirlce is " << area1 << endl; 
    }
  
    else if (choice == 2)
  {
    cout << "Enter length and width, respectively, of rectangle: ";
    cin >> length;

     while (length < 0)
    {
      cout << "Error. Please enter a positive number.\n";
    }
    return length; 
    
    cin >> width;

     while (width < 0)
    {
      cout << "Error. Please enter a positive number.\n";
    }
    return width; 
    
    area2 = length * width;
    cout << "The Area of the rectangle is " << area2 << endl;
    }
  
     else if (choice == 3)
  {
    cout << "Enter base and height, respectively, of triangle: ";
    cin >> base;
    
     while (base < 0)
    {
      cout << "Error. Please enter a positive number.\n";
    }
    return base; 
    
    cin >> height;

     while (height < 0)
    {
      cout << "Error. Please enter a positive number.\n";
    }
    return height; 
    
    area3 = base * height * 0.5;
    cout << "The Area of the triangle is " << area3 << endl;
    }

  else if (choice == 4)
  {
    cout << "Program ending.\n";
    }

  else
  {
    cout << "Please run the program again and select a choice within the range of 1-4.\n";
  }
  return 0;
}