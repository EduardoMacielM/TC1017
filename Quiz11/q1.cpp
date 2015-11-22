#include <iostream>
#include <iomanip>
using namespace std;

double factorial(int n){
  double fact = 1;
  for (int i = 1; i <= n; i++){
  if (n==0){
    return 1;
  }
  else {
  fact = fact * i;
  }
}
return fact;
}

float calculateE (float ac){
  float e = 1.0;
  for (int i=1; i<999; i++){
    e = e + 1/(factorial(i));
  }
  cout<< fixed <<setprecision(ac) << e;
  return e;
}

int main(){
  float ac;
  cout<<"(﻿ ͡° ͜ʖ ͡°) How accurate you want your e number? ";
  cin>>ac;
  cout<<"Here's ya numba: "<<endl;
 calculateE(ac);
 cout<<endl;
  return 0;
}
