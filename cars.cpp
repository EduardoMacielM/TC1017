#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main (){
  string Read;
  string midprice;
  string cmpg;
  string hwmpg;
  float city;
  float cityav = 0.0;
  float hw;
  float hwav = 0.0;
  float price;
  float priceav = 0.0;

  ifstream file("93cars.dat.txt");
  if (file.is_open()){
    for (int i =0; i < 93; i++){
        getline(file, Read);
        midprice = Read.substr(42,4);
        istringstream value1(midprice);
        value1 >> price;
        cmpg = Read.substr(52,2);
        istringstream value2(cmpg);
        value2 >> city;
        hwmpg = Read.substr(55,2);
        istringstream value3(hwmpg);
        value3 >> hw;
        hwav = hwav + hw;
        priceav = priceav + price;
        cityav = cityav + city;
        getline(file, Read);
    }
    file.close();
  }else{
    cout << "Error 404: File not found" << endl;
  }
  priceav = priceav/93;
  cityav = cityav/93;
  hwav = hwav/93;
  cout << "Average Midrange price: " << priceav << endl;
  cout << "Average City MPG: " << cityav << endl;
  cout << "Average Highway MPG: " << hwav << endl;
  return 0;
}
