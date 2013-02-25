#include <cstdio>
#include "bst.h"

using namespace std;

int main()
{
	printf("hey world\n");
	BST* testBST = new BST(5);
	testBST->addValue(2);
	testBST->addValue(3);
	testBST->addValue(99);
	testBST->addValue(4321);
	return 0;
}
