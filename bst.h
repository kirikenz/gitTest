#include "node.h"

class BST
{
private:
	node* root;
public:
	node* getRoot();
	BST(int);
	bool addNode(int, node*);
	int getSize();
	//more operations later
};
