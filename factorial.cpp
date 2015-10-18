#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;

BigInteger fact (long x){
BigInteger i, z=1;
for (i = 1; i <= x; i++) {
z=z*i;
}
return z;
}
int main(){
long x;
char ans;
do{
cout<<"Introduce a non-negative integer: ";
cin>> x;
if (x<0){
  cout<<"The number has to be a non-negative integer!"<<endl;
}
else if (x==0){
  cout<<"The factorial of 0 is 1."<<endl;
}
else{
cout<<"The factorial number of " <<x; cout<<" is:"<<endl;
cout<<fact(x)<<endl;
}
cout<<"Do you want to try another number?(y/n)";
cin>>ans;
}
while(ans=='y');
if (ans!='y'){
cout<<"Have a nice day!"<<endl;
}
return 0;
}
