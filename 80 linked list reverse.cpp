#include <iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node(int value){
		data = value;
		next=NULL;
	}
};

node* createLinkedList(int arr[], int index, int size){
	if (index==size){
		return NULL;
	}
	node * temp= new node (arr[index]);
	temp->next = createLinkedList(arr,index+1,size);
	return temp;
}

node * reverseLinkedList(node * curr, node *prev){
	if (curr==NULL){
		return prev;
	}
	node *x= reverseLinkedList(curr->next,curr);
	curr->next=prev;
	return x;
}


node* reverseLinkedList2(node * curr, node*prev){
	if (curr== NULL){
		return prev;
	}
	
	node * fut= curr->next;
	curr->next = prev;
	return reverseLinkedList(fut, curr);
	
}



int main(){
	
	int arr[5]={1,2,3,4,5};
	node * head;
	head= createLinkedList(arr, 0,5);
	
	node * temp= head;
	while(temp){
		cout<<temp->data<<endl;
		temp= temp->next;
	}
	
	head= reverseLinkedList(head,NULL);
	
	temp= head;
	while(temp){
		cout<<temp->data<<endl;
		temp= temp->next;
	}
	
	
	
	////////////////////////////code to reverse linked list
	
	/*
	node * curr= head,*prev = NULL;
	while (curr){
		node * temp = curr->next;
		curr->next = prev;
		prev= curr;
		curr= temp;
	}
	
	head = prev; 
	
	
	temp= head;
	while(temp){
		cout<<temp->data<<endl;
		temp= temp->next;
	}
	*/
	
	//////////////////////to find the middle of linked list
	
	
	int count=0 ;
	temp = head;
	while(temp){
		count++;
		temp= temp->next;
	}
	count /=2;
	temp= head;
	while (count){
		temp= temp->next;
        count--;
	}
	
	cout <<temp<<endl<<temp->data;
	
	
	
}
