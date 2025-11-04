#include <iostream>
using namespace std;
class node {
	public:
	int data;
	node * next;
	node (int value ){
		data = value;
		next= NULL;
	}	
};
class queue {
	int * arr;
	int front , rear;
	int size;
	public :
	queue (int n){
		arr= new int[n];
		front= -1, rear= -1;
		size = n ;
	}
	bool IsEmpty(){
		return front ==-1;
	}
	bool IsFull(){
		return (rear+1)%size == front ;
	}
	void push(int value){
		if (IsEmpty()){
			rear=front =0;
			cout <<"element "<<value<<" pushed into the queue "<<endl;
			arr[rear]= value;
		}
		else if (IsFull()){
			cout<<"queue overflow";
			return ;
		}
		else {
			rear= (rear +1)%size;
			cout <<"element "<<value<<" pushed into the queue "<<endl;
			arr[rear]=value;
		}
	}
	
	void pop(){
	if (IsEmpty()){
		cout<<"Queue underflow";
		
	}
	else{
		if (front==rear){
			front= -1 ,rear= -1;
			cout<<"element popped";
		}
		
		else {
			front = (front +1)%size;
			cout<<"element popped";
		}
		
	}
}

	//start mea konsa hai 
	int start(){
		if(IsEmpty()){
			cout<<"queue is empty";
			return -1;
		}
		else {
			return arr[front];
		}
	}

};
class queueLinkedList{
	node * rear ;
	node * front;
	public :
	queueLinkedList(){
		front= rear =NULL;
	
	}
	bool IsEmpty(){
		return front == NULL;
	}
	void push(int value){
		if (IsEmpty()){
			front = new node (value);
			rear= front ;
			return ;
		}
		else {
			rear->next= new node (value);
			rear = rear ->next;
		}
	}
	void pop (){
		if (IsEmpty()){
			cout<<"Queue Underflow";
			return ;
		}
		else {
			node *temp= front ;
			front = front ->next;
			delete temp;
			cout<<"element popped";
		}
	}
	int start (){
		if (IsEmpty()){
			cout<<"empty queue ";
			return -1;
		}
		else {
			return front->data;
		}
	}
};

int main (){
/////////////////IMPLEMENT QUEUE USING ARRAY
queueLinkedList q;
q.push(-1);
q.push(55);
q.push(75);
q.pop();
//////////////////////////////// -1 in start of Queue 
/*there is confusion start function as the queue is empty or the front element is -1
as start return -1 in both the case that is queue is empty or element is -1*/

int value = q.IsEmpty();
if (value==0){
	cout<<q.start();
}
	
}
