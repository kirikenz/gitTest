#include <cstdio>
#include "bst.h"


BST::BST(int rootValue)
{
	//why not, it's a start
	this->root = new node(NULL, rootValue);
}

node* BST::getRoot()
{
	return this->root;
}

bool BST::addNode(int nodeValue, node* start)
{
	if (!start) {//NULL ptr
		start = this->root;
	}
	int val = start->getValue();
	node* temp;

	if (val == nodeValue) {
		return true;
	}
	else if (val > nodeValue) {
		temp = start->getLeftC();
		if (!temp) {//NULL ptr
			temp = new node(start,nodeValue);
			start->setLeftC(temp);
			return true;
		}
	}
	else if (val < nodeValue) {
		temp = start->getRightC();
		if (!temp) {//NULL ptr
			temp = new node(start,nodeValue);
			start->setRightC(temp);
			return true;
		}
	}

	addNode(nodeValue, start);
}
