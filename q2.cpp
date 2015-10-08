#include <iostream>
using namespace std;

void star(int x){
while (x>0){
 cout<<"*";
 x-=1;
}
}
int main(){
int x;
cout<<"Introduce the number of * you want to print: ";
cin>> x;
star(x);
cout<<endl;

return 0;
}
