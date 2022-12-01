#include "Node.h"

Node::Node() {
	this->x = 0;
	this->y = 0;
	this->t = 0;
}

Node::Node(double x, double y, double t, bool BC) {
	this->x = x;
	this->y = y;
	this->t = t;
	this->BC = BC;

}
