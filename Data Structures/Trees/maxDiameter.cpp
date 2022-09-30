#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data)
{
	struct node *node = (struct node *)malloc(sizeof(struct node));

	node->data = data;
	node -> left = NULL;
	node -> right = NULL;

	return (node);
}


int height(node *curr, int& diameter)
{
	if(curr == NULL)
		return 0;

	int lh = height(curr -> left, diameter);
	int rh = height(curr -> right, diameter);

	diameter = max(diameter, lh+rh+1);

	return 1 + max(lh,rh);
}

int diameterBT(node *root)
{
	int diameter = 0;
	height(root, diameter);
	return diameter;
}

int main()
{
	struct node *root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3);
	root -> left -> left = newNode(4);
	root -> left -> right = newNode(5);
  	root -> left -> right -> left = newNode(8);
  	root -> right -> left = newNode(6);
  	root -> right -> right = newNode(7);
  	root -> right -> right -> left = newNode(9);
  	root -> right -> right -> right = newNode(10);
  	root -> right -> right -> right -> left = newNode(11);
  	root -> right -> right -> right -> left -> left = newNode(12);

  	int height = 0;

  	cout<<"Diameter of the BT is: ";
  	cout<<diameterBT(root);
}