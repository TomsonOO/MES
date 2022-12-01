#include <stdio.h>
#include <ctime>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Element.h"

using namespace std;

Element::Element(int ids[]) {
  for (int i=0; i<4; i) {
    this->id_nodes[i] = ids[i];
  }
}
