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
