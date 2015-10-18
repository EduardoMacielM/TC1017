#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;

BigInteger factorial(BigInteger n){
  if (n==0){
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}
int main(){
long x;
char ans;
do{
cout<<"Introduce a non-negative integer: ";
cin>> x;
cout<<"The factorial number of " <<x; cout<<" is:"<<endl;
cout<<factorial(x)<<endl;
cout<<"Do you want to try another number?(y/n)";
cin>>ans;
}
while(ans=='y');
if (ans!='y'){
cout<<"Have a nice day!"<<endl;
}
return 0;
}
