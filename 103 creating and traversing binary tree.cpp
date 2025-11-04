#include <iostream>
#include<queue>
using namespace std;

class node {
	public :
	int data ;
	node * left ;
	node * right ;
	node (int value ){
		data = value ;
		left= NULL;
		right = NULL;
	}
};
void preorder(node * root ){
	if (root==NULL)  return ;
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}
void inorder(node * root ){
	if (root==NULL)  return ;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}
void postorder(node * root ){
	if (root==NULL)  return ;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}
node * binaryTree(){
	
	int x ;
	
	cin>>x;
	if (x==-1){
		return NULL;
	}
	node * temp = new node (x);
	cout<<"enter the left child of "<<x<<endl;
	temp ->left = binaryTree();
	cout<<"enter the right child of "<<x<<endl ;
	temp ->right = binaryTree();
	return temp ;
}
 void levelorder(node * root){
 	if (!root) return ;
 	queue<node*> q;
 	q.push(root);
 	while (!q.empty()){
 		node * temp= q.front();
 		q.pop();
 		cout<<temp->data<<"  ";
 		if (temp->left) q.push(temp->left);
 		if (temp->right) q.push(temp->right);
	 }
 }
int main (){
	node *root = binaryTree();
//	preorder (root);
//	inorder (root);
//	postorder (root);
levelorder(root);
	
}
