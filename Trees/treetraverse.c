#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newnode(int item)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->left=temp->right=NULL;
	return temp;
}

struct node *insert(struct node *node,int key)
{
	if(node==NULL)
		return newnode(key);
	if(key<node->data)
		node->left=insert(node->left,key);
	if(key>node->data)
		node->right=insert(node->right,key);
	return node;
}

void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
}

int main()
{
	int n,i,ch,ch1,key,pos;
	struct node *root=NULL;
	printf("Enter no. of nodes\n");
	scanf("%d",&n);
	printf("Enter elements to be inserted\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&key);
		root=insert(root,key);
	}
	printf("\nPreorder tree travesal - ");
	preorder(root);
	printf("\nInorder tree travesal - ");
	inorder(root);
	printf("\nPostorder tree travesal - ");
	postorder(root);
	printf("\n");
	return 0;
}
