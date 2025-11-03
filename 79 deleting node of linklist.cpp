#include <iostream>
using namespace std;
class node{
	public :
	int data ;
	node * next ;
	node (int value){
		data = value ;
		next=NULL;
	}	
};

//////////////////////deleting particular node using recursion 


node * deleteNode(node * curr, int x){
	if (x== 1){
		node * temp= curr->next;
		delete curr;
		return temp;
	}
	curr->next = deleteNode(curr->next,x-1);
	return curr;
}



node * createLinkList(int arr[], int index, int size){
	if (index==size){
		return NULL;
	}
	node * temp = new node (arr[index]);
	temp->next= createLinkList(arr,index+1,size);
	return temp;
	
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	node * head= createLinkList(arr,0,10);
////////////////////////////Deleting first node	
	node * temp = head;
	head= head->next;
	cout<<temp->data<<endl;
	delete temp;
	cout <<temp->data;
	
	
/////////////////////////////Deleting last node 
if(head!=NULL){
	if (head->next == NULL){
		node * a= head;
		head= NULL;
		delete a ;
	}

	else {
		node * curr = head;
		node * prev = NULL;
		while (curr->next!= NULL){
			prev= curr;
			curr= curr->next;
		}
		prev->next= NULL;
		delete curr;
	}
}
temp = head;
cout<<endl<<endl<<"given link list is :"<<endl;
while (temp){
	cout<<temp->data <<endl;
	temp=temp->next;
}
	
////////////////////////////////////Deleting particular node 

int x;
cin>>x ;

if (x==1){
	node * temp = head;
	head= head->next;
	delete temp;
}	

else{
	node * curr = head;
	node * prev = NULL;
	x--;
	while (x--){
		prev= curr;
		curr= curr->next;
	}
	prev->next= curr->next;
	delete curr;
	
}

temp = head;
cout<<endl<<endl;
while (temp){
	cout<<temp->data <<endl;
	temp=temp->next;
}
	

	
}

