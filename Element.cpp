#include <iostream>

using namespace std;

class Element{
	int id_element;
	int id_nodes[4];

  Element(int ids[]) {
  for (int i=0; i<4; i) {
    this->id_nodes[i] = ids[i];
  }
}

};