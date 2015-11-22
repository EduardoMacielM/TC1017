#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int checkBanana (string filename){
  string Read;
  string Banana = "banana";
  int n = 0;
  int m = 0;
  int x = 0;
  ifstream read_file (filename);
  if (read_file.is_open()){
    while (getline(read_file , Read)){
      n = 0;
      while (n < Read.length()) {
        char letra = Read[n];
        if ( letra == 'B' || letra== 'b'){
          m = n + 1;
          char letra = Read[m];
          if (letra == 'A' || letra== 'a'){
            m++;
            char letra = Read[m];
            if (letra == 'N' || letra== 'n'){
              m++;
              char letra = Read[m];
              if (letra == 'A' || letra== 'a'){
                m++;
                char letra = Read[m];
                if (letra == 'N' || letra== 'n'){
                  m++;
                  char letra = Read[m];
                  if (letra == 'A' || letra== 'a') {
                    x++;
                  }
                }
              }
            }
          }
        }
        n = n + 1;
      }
    }
  read_file.close();
  }
  else{
    cout << "Error 404: file not found" << endl;
  }
  return x;
}

int main(){
string filename;
cout << "Write your file name: "<<endl;
cin >> filename;
cout << "found " << checkBanana(filename) << " bananas" << endl;


return 0;
}
