#pragma once
#include <iostream>
#include "list.h"
using namespace std;
class Set {
public:
	Set();
	Set(int* begin, int *end);
	void show();
	void insert(int e);
	void remove(int e);
	int getLength();
	Set operator+(Set& s);
	Set operator-(Set& s);
	int* getArray();
	void setArray(int* begin, int* end);
	void clear();
private:
	List l;
};