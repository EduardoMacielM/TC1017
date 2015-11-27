#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int checkBanana (string filename){
  char letra;
  string Read;
  //string Banana = "banana";
  int n = 0;  // contador del string
  int x = 0;   // contador de bananas
  ifstream read_file (filename);
  if (read_file.is_open()){
    while (getline(read_file , Read)){
      n = 0;    //iniciador
      while (n < Read.length()) {
        if (Read[n] == 'B' || Read[n]== 'b'){   // iniciar
          if (Read[1] == 'A' || Read[1]== 'a'){
            if (Read[2] == 'N' || Read[2]== 'n'){
              if (Read[3] == 'A' || Read[3]== 'a'){
                if (Read[4] == 'N' || Read[4]== 'n'){
                  if (Read[5] == 'A' || Read[5]== 'a') {
                    if (Read[6] == ' ' || Read[6]== '.') {
                      x++;      // suma de banana
                    }
                  }
                }
              }
            }
          }
        }
      n++;      // suma de string completo
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
