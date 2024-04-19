#include <iostream>
  using namespace std;
  
  int main()
  {
  // Step 1: Read in radius
  double radius;
  double area;
  cout << "Enter a radius: ";
  cin >> radius;
  area = radius * radius * 3.14;
  cout << "area: ";
  cout << area << endl;
  cout << & area;

  return 0;
  }
