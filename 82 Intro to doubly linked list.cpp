#include<iostream >
using namespace std;
class node {
	public :
	int data;
	node *prev;
	node * next;
	node (int value)
	{
		data = value ;
		prev= NULL;
		next= NULL;
	}
	};



node * createDLL(int arr[], int index , int size, node * back){
	if (size== index){
		return NULL;
	}
	node *temp = new node (arr[index]);
	temp ->prev= back;
	temp->next= createDLL(arr,index+1,size,temp);
	return temp ;
}

int main (){
/*
	node * head = new node ( 10);

/////////////////////INSERTION NODE AT STARTING 


if (head ==NULL){
	head= new node (1);
}
else {

	node * temp = new node (1);
	temp ->next = head ;
	head -> prev = temp ;
	head = temp ;
}
node * temp = head;	
while ( temp ){
	cout <<temp->data <<"   ";
	temp= temp->next;
}


	
//////////////////////INSERTION AT END

if (head==NULL){
	head= new node (11);	
}
else{

	node *curr= head ;
	
	while (curr->next!= NULL){
	curr= curr->next;
	}
	temp = new node (11);
	curr->next= temp ;
	temp ->prev= curr;

}

temp = head;	
while ( temp ){
	cout <<temp->data <<"   ";
	temp= temp->next;
}
*/
/*
node * head= NULL,*tail= NULL;
int arr[10]= {1,2,3,4,5,6,7,8,9,10};
for (int i = 0; i<10;i++){

	if (head==NULL){
		head= new node ( arr[i]);
		tail = head;
	}
	else{
		tail ->next= new node (arr[i]);
		tail ->next->prev= tail;
		tail = tail->next;
	}
}

node *temp = head;	
while ( temp ){
	cout <<temp->data <<"   ";
	temp= temp->next;
}

int arey[5]={1,2,3,4,5};

node * h= createDLL(arey,0,5,NULL);

temp = h;	
while ( temp ){
	cout <<temp->data <<"   ";
	temp= temp->next;
}
*/
/*
int arr[5]={1,2,3,4,5};
node * head = createDLL(arr,0,5 , NULL);
int k;
cin>>k;

//inserting at start 
if (k==0){
	//if linked list not exist
	if (head==NULL){
		head= new node (5);
	}
	//if linked list exist
	else{
		node *temp = new node(5);
		temp ->next= head;
		head->prev= temp ;
		head= temp;
	}
}
else{
	node * curr= head;
	while (--k){
		curr = curr->next;
	}
	
	//insert at last
	if (curr->next== NULL){
		node * temp = new node (5);
		curr->next = temp;
		temp ->prev= curr;
	}
	//insert at middle
	else{
	
		node *temp = new node (5);
		temp->prev= curr;
		temp ->next= curr->next;
		curr->next= temp;
		temp->next->prev= temp;
	}

}

node * temp = head;	
while ( temp ){
	cout <<temp->data <<"   ";
	temp= temp->next;
}

*/
/*
int arr[5]={1,2,3,4,5};
node * head= createDLL(arr, 0 , 5 , NULL);

////////////////////////CODE TO DELTE NODE FROM START
if (head->next!=NULL){
	node *temp = head;
	head = head->next;
	if ( head!= NULL){
	head ->prev= NULL;
	}
	delete temp;
}
cout<<head->data;
node * temp = head;	
while ( temp ){
	cout <<temp->data <<"   ";
	temp= temp->next;
}
*/
///////////////////////code to delete node from last
/*
int arr[5]={1,2,3,4,5};
node * head= createDLL(arr, 0 , 5 , NULL);

if ( head!=NULL){
	if ( head->next== NULL){
		node * temp = head;
		head= head->next;
		delete temp;
	}
	else{
		node * curr= head;
		while (curr->next){
			curr= curr->next;
		}
		curr->prev->next= NULL;
		delete curr;
	}
}

node * temp = head;	
while ( temp ){
	cout <<temp->data <<"   ";
	temp= temp->next;
}
*/
int arr[5]={1,2,3,4,5};
node * head= createDLL(arr, 0 , 5 , NULL);
int pos;
cin >>pos;
if (head!= NULL){
	if (pos==1){
		if (head->next==NULL){
			node *temp = head;
			delete temp;
		}
		else{
			node *temp= head;
			head=head->next;
			head->prev= NULL;
			delete temp;
		}
	}
	else{
		node * curr=head;
		while (--pos){
			curr= curr->next;
		}
		if (curr->next==NULL){
			curr->prev->next= NULL;
			delete curr;
		}
		else{
		
		curr->prev->next= curr->next;
		curr->next->prev= curr->prev;
		delete curr;
	}
}
}
node * temp = head;	
while ( temp ){
	cout <<temp->data <<"   ";
	temp= temp->next;
}

}
