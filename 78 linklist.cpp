#include <iostream>
using namespace std;
class node {
	public :
	int data;
	node * next ;
	node (int value){
		data = value;
		next = NULL;

	}
};

////////////////	CREATING LINKLIST USING RECURSION
node * createLinkList(int arr[], int index,int size){
	if (size == index){
		return NULL;
	}
	
	node * temp = new node (arr[index]);
	temp->next= createLinkList(arr,index+1,size);
	return temp;
	
}

node * addBeginLinkList(int arr[], int index ,int size,node *previous){
	if (index == size){
		return previous;
		  
	}
	node * temp = new node (arr[index]);
	temp->next= previous;
	return addBeginLinkList(arr,index +1,size,temp);
	
}

int main(){
/*
	node a (55);                            //node created statically
	cout <<a.data<<endl<<a.next<<endl;
	
	node * head;
	head = new node (4);
	cout <<head<<endl;
	cout<<(*head).data<<endl<<(*head).next;
	
	
///////////////////// code to add element at starting of linklist
	
	if(head == NULL) {
		head = new node (55);
	}
	else {
		node * temp;
		temp  = new node (55);
		temp->next = head;
		head = temp ;
	
	
}

//////////////////////////////converting array into linklist
int arr[5]={1,2,3,4,5};
node * head1;
head1= NULL;
for (int i=0;i<5;i++){

	if (head1 == NULL){
		head1 = new node(arr[i]);

	}
	else{
		node * temp;
		temp = new node ( arr[i]);
		temp->next = head1;
		head1= temp;
	} 
}

///////////////////print above link list
node * temp ;
temp = head1;
cout <<endl <<endl <<endl;
while (temp!= NULL){
	cout <<temp->data<<endl;
	temp = temp->next;

	
}

/////////////////////////////ADDING ELEMENT AT END 
//
//int ar[5]={6,7,8,9,10};
//node * head2;
////cout <<head2->next<<endl <<head2->data;
//head2 = NULL;
//for (int i= 0; i<5; i++){
//
//	if (head2 ==NULL){
//		head2= new node (ar[i]);
//	}
//	else {
//		node * tail =head2 ;
//		while (tail != NULL){
//			tail=tail->next;
//		}
//		tail->next = new node (ar[i]) ;
//	}
//}
////printing above link list 	
//node * temp ;
//temp = head2 ;
//for(int i = 0 ; i <5;i++){
//	cout <<temp ->data <<endl ;
//	temp = temp -> next;
//}		
//

int arr[5]={1,2,3,4,5};

node * head , * tail ;
tail = head = NULL;
for (int i = 0 ; i< 5; i++){
	if (head==NULL){
		head = new node (arr[i]);
		tail = head;
	}
	else {
		tail->next= new node (arr[i]);
		tail = tail->next;
		
	}
}
node * temp = head;
for (int i = 0 ; i<5; i++){
	cout <<temp ->data<<endl;
	temp= temp ->next;
	}

node * head2;
head2= createLinkList(arr,0,5);

node * temp2 = head2;
for (int i = 0 ; i<5; i++){
	cout <<temp2 ->data<<endl;
	temp2= temp2 ->next;
	}

*/
///////////////ADDING ELEMENT AT PARTICULAR POSITION 

int arr[5]={2,4,6,8,10};
node * head = createLinkList(arr,0,5);

int x= 3 ; // we want to instert at position 3
int value= 20;
x--;
node * temp;
temp = head;

while (x--){
	temp = temp->next;
}
node *temp2 = new node (30);
temp2->next = temp->next;
temp->next = temp;

temp = head ;
for (i )

















}







