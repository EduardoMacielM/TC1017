#include <iostream>
using namespace std;

long superpower(long a, long b){
long power=1, i;
for (i = 0; i < b; i++) {
power *= a;
}
return power;
}

int main(){
long x;
long y;
cin>>x;
cin>>y;
cout<<superpower(x,y)<<endl;

return 0;
}
