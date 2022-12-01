#include "Node.h"

class Node{
 	int id;
	double x, y, t;
  bool BC; 


  Node() {
  this->x = 0;
  this->y = 0;
  this->t = 0;
}

  Node(double x, double y, double t, bool BC) {
    this->x = x;
    this->y = y;
    this->t = t;
    this->BC = BC;
  }


};
