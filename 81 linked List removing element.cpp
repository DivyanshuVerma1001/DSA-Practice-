#include <iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node(int value){
		data = value ;
		next= NULL;
	}
};

node * createLinkedList(int arr[],int index,int size){
	if (index== size){
		return NULL;
	}
	node * temp= new node(arr[index]);
	temp->next= createLinkedList(arr,index+1, size);
	return temp;
	
}

int main(){
	/*
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	node * head= createLinkedList(a, 0 ,10);
	
	node *temp = head;
	while (temp){
		cout <<temp->data<<endl;
		temp=temp->next;
		
	}
	
////////////////CODE TO DELETE EVERY KTH ELEMENT 
int k;
cin >> k;
int count =0;
temp = head;
while (temp){
	count ++;
	temp=temp->next;
}
	
count -=k;

if (count==1){
	temp = head;
	head=head->next;
	delete temp;
}
else{
node *curr = head , *prev=NULL;
while (count ){
	prev= curr;
	curr = curr->next;
	count--;
}	
prev->next = curr->next;
delete curr;
}

temp = head;
	while (temp){
		cout <<temp->data<<endl;
		temp=temp->next;
		
	}
*/	
////////////////////Code to remove every kth element 

/*
int arr[10]={1,2,3,4,5,6,7,8,9,10};


node * head = createLinkedList(arr, 0 , 10);
int k , n= 1;
cin>>k;
node * curr= head, *prev= NULL;
while (curr){
	while (n!= k and curr->next!= NULL){
		prev= curr;
		curr= curr->next;
		n++;
	}

	if (n==k){
		prev->next= curr->next;
		delete curr;
		n= 1;
		curr= prev->next;
	}
	else {
		break;
	}
}		
node *temp = head;
	while (temp){
		cout <<temp->data<<endl;
		temp=temp->next;
		
	}
*/

/*
int arr[5]={1,2,3,4,5};
node * head = createLinkedList(arr, 0, 5);

int count = 5, k ;
cin>>k;
count -= k;
node * curr= head, *prev= NULL;
while (count --){
	prev = curr;
	curr= curr->next;
	}
prev->next= NULL;
node * temp = curr;
while (temp->next){
	temp= temp->next;
}	
temp ->next=head;
head= curr;
	
	
temp = head;
	while (temp){
		cout <<temp->data<<"   ";
		temp=temp->next;
		
	}
	
	
*/	
///////////////check for palindrome
int arr [5]={1,6,3,2,1};
node * head = createLinkedList(arr,0,5);
int count= 0;
node * temp = head;
while (temp){
	temp= temp->next;
	count ++;
}

count /=2;

int c=count;


node * head2 = head;
while (c--){
	head2= head2->next;
}



c= count ;
node * t = head ;
while (c--){
	t = t->next ;
	if ( c ==1){
		t->next= NULL;
	}
}
 
node * curr= head2 ,* prev=NULL,*fut=NULL;
while ( curr){
	fut= curr->next;
	curr->next=prev;
	prev= curr;
	curr= fut ;
	}
head2= prev;


 
int flag= 1;
while (head!= NULL and head2 != NULL){
	if (head->data!= head2->data){
		cout <<head->data<<"     "<<head2->data<<endl;
		flag = 0;
		}
	head= head->next;
	head2= head2->next;
}
	
cout<<flag;
//cout<<"end";
}

