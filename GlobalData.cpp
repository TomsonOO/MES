#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class GlobalData{

public:

    int czas;
    int delta_czas;
    int cieplo_wlasciwe;
    int gestosc;
    int przewodnosc_cieplna; // k
    int alfa; //do warunku brzegowego
    int temp_otoczenia;

    GlobalData(){
      this->czas = 0;
      this->delta_czas = 0;
      this->cieplo_wlasciwe = 0;
      this->gestosc = 0;
      this->przewodnosc_cieplna = 0;
      this->alfa = 0;
      this->temp_otoczenia = 0;
    }


    void wczytaj(){

    //int i = 0;
  // string lines[];
    fstream file;

    cout<<"test";
  // file.open("test.txt", ios::in);

    // if (file.good() == true) {
    //   while(!file.eof() && i < 14) {
        
    //   }
    // }
    }

};

