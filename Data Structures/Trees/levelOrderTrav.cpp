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

void levelOrderTraversal(node *curr)
{
	if(curr == NULL)
		return;

	queue<node *> q;
	q.push(curr);

	while(!q.empty())
	{
		struct node *temp = q.front();
		cout<<temp -> data<<" ";
		q.pop();

		if(temp -> left != NULL)
		{
			q.push(temp->left);
		}
		if(temp -> right != NULL)
		{
			q.push(temp -> right);
		}
	}

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

  	cout<<"Level order traversal using queue is: ";
  	levelOrderTraversal(root);
}