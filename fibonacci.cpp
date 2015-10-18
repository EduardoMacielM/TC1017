#include <iostream>
using namespace std;
long fibonacci(long n){
  long i=0,a=1,b=1,c=0;
  if (n<2){
  return n;
}
if(n==2){
  return 1;
}
  while(i<n-2)
  {
   c=a+b;
   a=b; b=c;
   i++;}
  return c;
}
int main(){
long n;
cout<< "Enter the number " << endl;
cin >> n;
cout << "The " << n << "th number in the fibonacci series is: " << endl;
cout<<fibonacci(n)<<endl;
return 0;
}
