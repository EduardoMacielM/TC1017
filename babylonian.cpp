#include <iostream>
using namespace std;

float babyl (float x)
{
  float a = x;  //This is a guess (the closest to the number, the better)
  float b = 1;
  float ac = 0.00001; //accuracy
  while(a - b > ac)
  {
    a = (a + b)/2;
    b = x/a;
  }
  return a;
}
int main ()
{
  float x;
  cout << "Enter the number from which you want the sqrt: ";
  cin >> x;
  cout << "√"<<x<<" = " << babyl(x) << endl;
  return 0;
}
