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

	node -> data = data;
	node -> left = NULL;
	node -> right = NULL;

	return (node);
}

void iterative_preOrderTrav(node *curr)
{
	if(curr == NULL)
	{
		return;
	}

	stack<node*>s;
	s.push(curr);

	while(!s.empty())
	{
		node *topNode = s.top();
		cout<<topNode->data<<" ";

		s.pop();

		if(topNode -> right != NULL)
		{
			s.push(topNode -> right);
		}
		if(topNode -> left != NULL)
		{
			s.push(topNode -> left);
		}
	}
}

void recursive_preOrderTrav(node *curr)
{
	if(curr == NULL)
	{
		return;
	}

	cout<<curr->data<<" ";
	recursive_preOrderTrav(curr->left);
	recursive_preOrderTrav(curr->right);
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
  	root -> right -> right = newNode(72);
  	root -> right -> right -> left = newNode(9);
  	root -> right -> right -> right = newNode(10);

  	cout<<"The pre order traversal is: ";

  	recursive_preOrderTrav(root);

  	return 0;
	
}