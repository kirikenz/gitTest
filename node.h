class node
{
private:
	node* leftC;
	node* rightC;
	node* parent;
	int value;
public:
	int getValue();
	node* getLeftC();
	node* getRightC();
	node* getParent();
	void setLeftC(node*);
	void setRightC(node*);
	node(node*,int);
};
