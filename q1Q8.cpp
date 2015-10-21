#include <iostream>
#include <vector>
using namespace std;

int sumsquares_list (vector<int> v){
int len = v.size();
int sum = 0;
for(int i = 0; i < len; i++) {
sum= sum + (v[i]*v[i]);
}
return sum;
}

int main()
{
int c;
vector<int>v;
cout<<"Introduce the numbers (-1 - stop)"<<endl;
cin >> c;
while(c != -1) {
v.push_back(c);
cin >> c;
}
cout<<sumsquares_list(v)<<endl;
return 0;
}
