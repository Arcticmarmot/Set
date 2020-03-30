#include <iostream>
#include "set.h"
#include "node.h"
using namespace std;

Set::Set() :l() {}
Set::Set(int* begin, int* end):l(begin,end) {}

Set Set::operator+(Set& s) {
	int* p1 = this->getArray();
	int* p2 = s.getArray();
	Set result(p1, p1 + this->getLength());
	for (int i = 0;i<s.getLength(); i++) {
		result.insert(p2[i]);
	}
	return result;
}
Set Set::operator-(Set& s) {
	Set result;
	int* p1 = this->getArray();
	int* p2 = s.getArray();
	for (int i = 0; i < this->getLength(); i++) {
		for (int j = 0; j <s.getLength(); j++) {
			if (p1[i] == p2[j]) {
				result.insert(p1[i]);
			}
		}
	}
	return result;
}

void Set::insert(int v) {
	this->l.insert(v);
}

void Set::remove(int v) {
	this->l.remove(v);
}
void Set::show() {
	this->l.show();
}
int Set::getLength() {
	return this->l.getLength();
}
int* Set::getArray() {
	return this->l.getArray();
}
void Set::setArray(int* begin, int* end) {
	this->l.setArray(begin, end);
}
void Set::clear() {
	this->l.clear();
}
