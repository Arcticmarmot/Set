#pragma once
#include <iostream>
#include "node.h"
using namespace std;

class List {
public:
	List();
	List(int* begin,int* end);
	void show();
	void insert(int e);
	void remove(int e);
	bool checkDuplicate(Node* e);
	int getLength();
	int* getArray();
	void setArray(int* begin, int* end);
	void clear();
private:
	Node* head;
};
