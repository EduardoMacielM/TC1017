#include <iostream>
using namespace std;

int GCD(int x, int y){
  int t;
  if (y==0){
    return x;
  }
  while (y!=0){
    t= y;
    y= x%y;
    x= t;
  }
  return t;
}

int main (){
  int x,y;
  cout<<"Type the first number: ";
  cin>>x;
  cout<<"Type the second number: ";
  cin>>y;
  cout<<"GCD(" <<x <<", " <<y <<") = " <<GCD(x,y)<<endl;


  return 0;
}
