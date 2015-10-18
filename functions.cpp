#include <iostream>
using namespace std;

int sum (int x, int y){
  return x+y;
}
int dif (int x, int y){
  return x-y;
}
int prod (int x, int y){
  return x*y;
}
int divv (int x, int y){
  return x/y;
}
int rem (int x, int y){
  return x%y;
}
int main(){

  int a,b;
  cout<<"Introduce the first number:";
  cin>>b;
  cout<<"Introduce the second number:";
  cin>>a;
  cout<<a;
  cout<<"+";
  cout<<b;
  cout<<"=";
  cout<<sum(a,b)<<endl;

  cout<<a;
  cout<<"-";
  cout<<b;
  cout<<"=";
  cout<<dif(a,b)<<endl;

  cout<<a;
  cout<<"*";
  cout<<b;
  cout<<"=";
  cout<<prod(a,b)<<endl;

  cout<<a;
  cout<<"/";
  cout<<b;
  cout<<"=";
  cout<<divv (a,b)<<endl;

  cout<<"The reminder of the division is:";
  cout<<rem(a,b)<<endl;

return 0;
}
