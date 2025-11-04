#include <iostream>
using namespace std;
class node {
	public :
	int data;
	node * left , *right ;
	node (int value){
		data = value ;
		left=right =NULL;
	}
};
node * insert(node * root, int target){
	if (root==NULL){
		node *temp= new node (target);
		return temp ;
	}
	if (root->data>=target){
		root->left = insert(root->left, target);
	}
	if (root->data<target){
		root->right = insert(root->right, target);
	}
	return root;
}
void inorder(node * root){
	if (!root) return ;
	
	if (root->left) inorder (root->left);
	cout<<root->data;
	if (root->right) inorder (root->right);
}
int search(node * root,int target){
	if (root== NULL) return 0;
	if (root->data==target) return 1;
	if (root->data>target) 
		return search(root->left, target);
	if (root->data<target)
		return search (root->right , target);
 
 }
 void hi(node * &root){
 	root= new node ( 60);
 }
int main (){
	int arr[10]={6,4,9,3,2,1,5,7,8,10};
	node *root = NULL;
	for (int i = 0 ; i < 10; i++){
		root = insert(root,arr[i]);
	}
//	inorder(root);
//	cout<<endl;
//	cout<<search(root,55);
node* root1 = new node (50);
hi(root1);
cout<<root1->data;
}
