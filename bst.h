#include "node.h"

class BST
{
private:
	node* root;
public:
	node* getRoot();
	BST(int);
	void addValue(int);
	bool addNode(int, node*);
	void print();
	void print(node*);
	int getSize();
	//more operations later
};
