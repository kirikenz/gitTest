#include "node.h"

node::node(node* parent,int value)
{
	//We'll make this the default ctor
	//children will have indep. setters
	this->parent = parent;
	this->value = value;
}

int node::getValue()
{
	return this->value;
}

node* node::getLeftC()
{
	return this->leftC;
}

node* node::getRightC()
{
	return this->rightC;
}

node* node::getParent()
{
	return this->parent;
}

//set Children

void node::setLeftC(node* leftC)
{
	this->leftC = leftC;
}

void node::setRightC(node* rightC)
{
	this->rightC = rightC;
}
