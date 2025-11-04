#include <iostream>
using namespace std;

class Node {
	public:
	int data , height;
	Node *left ,*right;
	Node (int value){
		data= value;
		height=1;
		left = right=NULL;
	}
};
int getHeight(Node *root){
	if (!root) return 0;
	return root->height;
}
int getBalance(Node * root){
	return getHeight(root->left)-getHeight(root->right);
}
Node * rightRotation (Node * root){
	Node *child= root->left;
	Node * childright= child->right;
	child->right= root;
	root->left= childright;
	root->height= 1+ max(getHeight(root->left),getHeight(root->right));
	child->height= 1 +max(getHeight(child->left), getHeight(child->right));
	return child;
}
Node * leftRotation( Node * root){
	Node * child= root->right;
	Node * childleft= child->left;
	child->left= root;
	root->right= childleft;
	root->height= 1 +max(getHeight(root->left), getHeight(root->right));
	child->height= 1 + max(getHeight(child->left),getHeight(root->right));
	return child;
}
Node * insert(Node * root, int key){
	//Doesnot exist
	if (!root) return new Node (key);
	//if exist
	if (key<root->data)
		root->left= insert(root->left, key);
	else if (key >root->data)
		root->right= insert(root->right, key);
	else 
		return root;  //Duplicate elements are not allowed
	
	//update height
	root->height = 1+max(getHeight(root->left), getHeight(root->right));
	
	//balancing 
	int balance= getBalance(root);
	
	//LL
	if (balance>1 and root->left->data >key)
	    return rightRotation (root);
	//RR
	if (balance <-1 and root->right->data <key)
		return leftRotation (root);
	//LR
	else if (balance >1 and root->left->data< key ){
		root->left= leftRotation(root->left);
		return rightRotation(root);
	}
	//RL
	else if (balance <-1 and root->right->data> key){
		root->right= rightRotation(root->right);
		return leftRotation(root);
	}
	//No Unbalance
	else return root;
}

int main (){
	Node * root= NULL;
	root= insert(root, 10);	
	root= insert(root, 20);	
	root= insert(root, 30);	
	root= insert(root, 40);	
	root= insert(root, 50);	
	root= insert(root, 4);	
	root= insert(root, 1);	
	root= insert(root, 78);	
	
}
