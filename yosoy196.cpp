#include <string>
#include <iostream>

using namespace std;


#include "BigIntegerLibrary.hh"

bool is_Palindrome (string i){
if (i == string(i.rbegin(), i.rend())) {
return true;}
else{
return false;
}
}

BigInteger apply196(string i){
string j;
j = (string(i.rbegin(), i.rend()));
BigInteger n, m;
n = stringToBigInteger(i);
m = stringToBigInteger(j);
return n + m;
}


int main() {
  long x,y;
  BigInteger n;
  long np =0;
  long ln= 0;
  long nln = 0;
  long count = 0;
  cout<<"Lower bound: "<<endl;
  cin>>x;
  cout<<"Upper bound: "<<endl;
  cin>> y;
  while(y<x){
  cout<<"Please be sure that the upper bound is bigger than the lower."<<endl;
  cin>>y;
  }
  for(n=x;n<=y;n++){
  string i;
  i = bigIntegerToString(n);
  if (is_Palindrome(i) == true){
  np = np + 1;
  }
  if (is_Palindrome(i)==false) {
  BigInteger ap = apply196(i);
  string k;
  k = bigIntegerToString(ap);
  if (is_Palindrome(k) == true){
  nln = nln + 1;
  }
else {
  do{
    k = bigIntegerToString(apply196(k));
    count = count + 1;
  } while((is_Palindrome(k)) == false);
}
}
if (count <=30){
  nln = nln + 1;}
  else{
ln = ln + 1;
cout<<"Lycherel number found: "<<i;}
}
cout<<"The range of numbers analysed was from "<<x <<" to "<<y<<endl;
cout<<"The number of natural palindromes: "<<np<<endl;
cout<<"The number of non-Lycherels encountered: "<<nln<<endl;
cout<<"The number of Lycherel number candidates: "<<ln<<endl;
  return 0;
}
