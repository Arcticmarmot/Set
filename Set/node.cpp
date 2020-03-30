#include <iostream>
#include "list.h"
using namespace std;

Node::Node(int value) {
	this->next = nullptr;
	this->value = value;
}