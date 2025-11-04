#include <iostream>
#include <queue>
using namespace std;
class node {
	public :
	int data;
	node * left , * right ;
	node (int value){
		data= value ;
		left = NULL;
		right = NULL;
	}
};
int main (){
	int x ;
	cin>>x;
	cout<<"enter root node ";
	queue <node * > q;
	node * root = new node (1);
	q.push(root);
	
	while (!q.empty()){
		int first,second;
		node * temp = q.front() ;
		cout<<"enter left"<<temp->data<<endl;
		cin >>first ;
		if (first !=-1){
			temp->left = new node (first);
			q.push(temp->left);
		
		}
		cout<<"enter right "<<temp->data<<endl;
		cin >>second;
		if (second !=-1){
			temp->right = new node (second);
			q.push(temp->right);
			
		}
		q.pop();
		
	}
}
