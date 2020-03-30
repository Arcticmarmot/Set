#include <iostream>
#include "list.h"
#include "node.h"

using namespace std;
List::List() {
	this->head = nullptr;
}
List::List(int* begin, int* end) {
	this->setArray(begin, end);
}
void List::insert(int v) {
	Node* np = (Node*)malloc(sizeof(Node));
	np->value = v;
	if (this->checkDuplicate(np)) {
		return;
	}
	Node* temp = this->head;
	this->head = np;
	np->next = temp;

}

void List::remove(int v) {
	if (this->head->value == v) {
		this->head = this->head->next;
		return;
	}
	for (Node* i = this->head; i->next != nullptr; i = i->next) {
		if (i->next->value == v) {
			i->next = i->next->next;
			return;
		}
	}

}

bool List::checkDuplicate(Node* np) {
	for (Node* i = this->head; i != nullptr; i = i->next) {
		if (i->value == np->value) {
			return true;
		}
	}
	return false;
}
void List::show() {
	cout << "{ ";
	for (Node* i = this->head; i != nullptr; i = i->next) {
		cout << i->value <<" ";
	}
	cout << "}";
	cout << endl;
	cout << "--------------------------------"<<endl;
}
int List::getLength() {
	int sum = 0;
	for (Node* i = this->head; i != nullptr; i = i->next) {
		sum++;
	}
	return sum;
}
int* List::getArray() {
	int* a = (int*)malloc(sizeof(int)*this->getLength());
	Node* i = this->head;
	for (int index = 0;  i != nullptr; i = i->next, index++) {
		a[index] = i->value;
	}
	return a;
}
void List::clear(){
	this->head = nullptr;
}
void List::setArray(int* begin, int* end) {
	this->head = nullptr;
	int* p;
	for (p = begin; p != end; p++) {
		this->insert(*p);
	}
}