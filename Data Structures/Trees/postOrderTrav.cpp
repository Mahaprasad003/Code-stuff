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

void recursive_postOrderTrav(node *curr)
{
	if(curr == NULL)
		return;

	recursive_postOrderTrav(curr -> left);
	recursive_postOrderTrav(curr -> right);
	cout<<curr -> data<<" ";
}

void iterative_postOrderTrav_twostack(node *curr)
{
	if(curr == NULL)
		return;

	stack<node*> s1, s2;

	s1.push(curr);
	node *node;

	while(s1.empty() == false)
	{
		node = s1.top();
		s1.pop();
		s2.push(node);

		if(node -> left != NULL)
		{
			s1.push(node -> left);
		}
		if(node -> right != NULL)
		{
			s1.push(node -> right);
		}

	}
		while(!s2.empty())
		{
			node = s2.top();
			s2.pop();
			cout<<node -> data<<" ";
		}
}

void iterative_postOrderTrav_onestack(node *curr)
{
	if(curr == NULL)
		return;

	stack<node *> s;

	while(curr != NULL || s.empty() == false)
	{
		if(curr != NULL)
		{
			s.push(curr);
			curr = curr -> left;
		}
		else
		{
			struct node *temp = s.top() -> right;
			if(temp == NULL)
			{
				temp = s.top();
				s.pop();
				cout<<temp -> data<<" ";

				while(s.empty() == false && temp == s.top() -> right)
				{
					temp = s.top();
					s.pop();
					cout<<temp -> data<<" ";
				}
			}
			else
			{
				curr = temp;
			}
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

  	cout<<"Recursive Post order traversal is: ";
  	recursive_postOrderTrav(root);
  	cout<<endl<<endl;

  	cout<<"Iterative Post order traversal using two stacks is: ";
  	iterative_postOrderTrav_twostack(root);
  	cout<<endl<<endl;

  	cout<<"Iterative Post order traversal using one stack is: ";
  	iterative_postOrderTrav_onestack(root);
}