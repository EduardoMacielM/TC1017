#include <iostream>
#include <ctime>
using namespace std;

int main(){
  int x, y, i = 0;
  char ans;
  do{
  srand(time (0));
  x=rand()%100+1;
cout<<"Guess the number between 1 and 100: ";
cin>>y;
 while (y != x)
 {
  i = i + 1;
    if (y<=0 || y>100) {
    cout<<endl;
    cout<<"Remember that the number should be between 1 and 100..."<<endl;
    }
    if(y>x)
    {
      cout<<endl;
      cout<<"Lower"<<endl;
      cout<<"Number of attempts: "<<i <<endl;
       cout<<"---------------------------"<<endl;
    }
    if (y<x)
    {
     cout<<endl;
     cout<<"Higher"<<endl;
     cout<<"Number of attempts: "<<i <<endl;
     cout<<"---------------------------"<<endl;
    }
    cout<<"Try again: ";
    cin>>y;
    cout<<endl;
}
   if (y==x){
    (i=i+1);
    cout<<"Congratulations! You've guessed the number in "<<i; cout<<" attempts"<<endl;
    cout<<"The number was: "<<x <<endl;
    }

    cout<<"Do you want to play again? (y/n)"<<endl;
    cin>>ans;
    if(ans=='y')
    {i=0;}
    else{
    cout<<"Have a nice day."<<endl;
    }
  }
  while(ans=='y');
  return 0;
  }
