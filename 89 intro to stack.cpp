#include <iostream>
using namespace std;

class stack {
	int * arr;
	int size;
	int top ;
	public:
	int flag;   //flag = 1 when empty and flag = 0 when not empty
	stack(int s){
		arr= new int [s];
		size= s;
		top =-1;
		flag = 1;
	}
	//OPERATION
	//1 push
	void push(int value){
		if (top== size-1){
			cout<<"STACK OVERFLOW!!!";
			return ;
		}
		else{
			top++;
			arr[top]= value;
			flag = 0;
		}
	}
	//2 pop 
	void pop (){
		if (top==-1){
			cout<<"STACK UNDERFLOW";
			return;
		}
		else{
			cout <<"Popped "<<arr[top]<<" from stack";
			top--;
			if (top==-1){
				flag = 1;
			}
		}
	}
	//3 peek
	int peek(){
		if (top == -1){
			cout <<"Stack is empty";
			return -1;
		}
		else{
			return arr[top];
		}
	}
	//4 isEmpty
	bool isEmpty(){
		return (top==-1);
	}
	
	//5 isSize
	int isSize(){
		return (top+1);
	}
};

///////////////STACK USING SINGLY LINKED LIST
class node{
	public :
	int data;
	node* next;
	node (int value){
		data= value ;
		next = NULL;
	}
};
class stackLL{
	node * top; 
	int size;
	public:
	stackLL(){
		top= NULL;
		size= 0;
	}
	// 1 push
	void push (int value){
		
		node * temp = new node ( value);
		temp ->next= top;
		top = temp ;
		
		size++;
	}
	//2 pop 
	void pop(){
		if (top==NULL){
			cout<<"STACK UNDERFLOW";
			return ;
		}
		node * temp = top ;
		top = top->next;
		delete temp;
		size--;
	}
	
	//3 peek
	int peek (){
		if (top== NULL){
			cout<<"Stack is empty";
			return -1;
		}
		else{
			return top->data;
		}
	}
};

int main(){
	
stack s(5);
s.push(1);
s.push(2);
s.push(3);	
s.pop();
cout<<s.isEmpty()<<endl;
cout<<s.isSize()<<endl;
s.pop();
//////////////////////////////// -1 in stack
/*there is confusion in peek function as the stack is empty or the top element is -1
as peek return -1 in both the case that is stack is empty or element is -1*/
s.push(-1);
int value = s.isEmpty();
if (value==0){
	cout<<s.peek();
}
}
