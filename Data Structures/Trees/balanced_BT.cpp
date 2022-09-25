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


int check_balancedBT(node *curr) // added some extra stuff to max_depth
{
	if(curr == NULL)
		return 0;

	int lh = check_balancedBT(curr -> left);
	if(lh == -1) return -1;
	int rh = check_balancedBT(curr -> right);
	if(rh == -1) return -1;

	if(abs(lh - rh) > 1)
		return -1;
	else
		return 1+max(lh,rh);
}

bool isBalancedBT(node *curr)
{
	return check_balancedBT(curr) != -1;
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

  	cout<<"Is the tree a balanced tree? ";
  	if(isBalancedBT(root) == 1){
  		cout<<"True";
  	}
  	else{
  		cout<<"False";
  	}
}