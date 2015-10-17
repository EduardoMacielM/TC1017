#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
vector<int> v;
int c,i,len;
cout<<"Introduce the numbers (-1 - stop)"<<endl;
cin >> c;
while(c != -1) {
v.push_back(c);
cin >> c;
}
len=v.size();
for(i = 0; i < len; i++) {
cout << v[i] <<", ";
}
cout<<endl;
cout<<"The total is: ";
float sum = accumulate( v.begin(), v.end(), 0.0 );
cout<< sum;
cout<<endl;
cout<<"The average is: ";
float ave = (sum/len);
cout<<ave<<endl;
float stddev=0;
for(i = 0; i < len; i++) {
stddev = stddev + (ave-v[i])*(ave-v[i]);
}
stddev = stddev / len;
stddev = sqrt(stddev);
cout<<"The standard deviation is: ";
cout<<stddev<<endl;
return 0;
}
