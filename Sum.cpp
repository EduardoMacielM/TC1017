#include <iostream>    // José Eduardo Maciel Mendoza
using namespace std;

int main(){
  int m,x,y,z=0;
  int xx,yy;
  char ans;
  do{
  cout<<"I will calculate the sum of integers in the range you provide."<<endl;
  cout<<"Please give me the lower bound: ";
  cin>>xx;
  cout<<"Please give me the upper bound: ";
  cin>>yy;
x=xx;
y=yy;

if (x>y){
  m=x;
  x=y;
  y=m;
}
   while (x <= y-1){
     (z=z+x);
     (x=x+1);
    }
  cout<<"The sum from "<<xx; cout<<" to "<<yy; cout<<" (inclusive) is: "<<(x+z) <<endl;

   cout<<"Do you want to try again? (y/n)"<<endl;
   cin>>ans;
x=0;
y=0;
z=0;
}
while(ans=='y');
if (ans!='y') {
  cout<<"Have a nice day."<<endl;
}
  return 0;
}
