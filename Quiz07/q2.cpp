#include <iostream>
using namespace std;

string isPalindrome(string x){
if (x == string(x.rbegin(), x.rend())) {
return "True";}
else{
return "False";
}
}
int main()
{
string x;
    cin >> x;
    cout<<isPalindrome(x)<<endl;
    return 0;
}
