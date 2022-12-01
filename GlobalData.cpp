#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include "GlobalData.h"

using namespace std;


GlobalData::GlobalData(){
  this->czas = 0;
  this->delta_czas = 0;
  this->cieplo_wlasciwe = 0;
  this->gestosc = 0;
  this->przewodnosc_cieplna = 0;
  this->alfa = 0;
  this->temp_otoczenia = 0;
}


void GlobalData::wczytaj() {

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

