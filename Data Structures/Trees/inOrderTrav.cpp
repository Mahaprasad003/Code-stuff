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

void recursive_inOrderTrav(node *curr)
{
	if(curr == NULL)
		return;

	recursive_inOrderTrav(curr->left);
	cout<<curr->data<<" ";
	recursive_inOrderTrav(curr->right);
}

void iterative_inOrderTrav(node *curr)
{
	stack<node*>s;

	while(true)
	{
		if(curr != NULL)
		{
			s.push(curr);
			curr = curr->left;
		}
		else{
			if(s.empty() == true)
			{
				break;
			}
			curr = s.top();
			cout<<curr->data<<" ";
			s.pop();
			curr = curr->right;
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
  	root -> right -> right = newNode(72);
  	root -> right -> right -> left = newNode(9);
  	root -> right -> right -> right = newNode(10);

  	cout<<"Recursive Inorder traversal is: ";
  	recursive_inOrderTrav(root);
  	cout<<endl<<endl;

  	cout<<"Iterative Inorder traversal is: ";
  	iterative_inOrderTrav(root);
}