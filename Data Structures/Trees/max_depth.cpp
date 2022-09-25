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

int max_depth(node *curr)
{
	if(curr == NULL)
		return 0;

	int lh = max_depth(curr -> left);
	int rh = max_depth(curr -> right);

	return 1+max(lh,rh);
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

  	cout<<"Max depth of the binary tree is: ";
  	cout<<max_depth(root);
  	
}