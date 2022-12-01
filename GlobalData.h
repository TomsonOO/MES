#include "Grid.h"

class GlobalData {

public:
  int czas;
  int delta_czas;
  int cieplo_wlasciwe;
  int gestosc;
  int przewodnosc_cieplna; // k
  int alfa; //do warunku brzegowego
  int temp_otoczenia;

  GlobalData();
  void wczytaj();

};