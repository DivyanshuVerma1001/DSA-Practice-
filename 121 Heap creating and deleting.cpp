#include <iostream>
using namespace std;
class heap{
	int * arr;
	int size;
	int total_size;
	public:
	heap (int n){
		arr=new int [n];
		total_size=n;
		size=0;
	}
	//insert int heap
	void insert(int value){
		if (size==total_size){
			cout<<"Heap Overflow";
			return ;
		}
		arr[size]=value;
		int index=size;
		size++;
		//Compare it with parents
		while (index>0 and arr[(index-1)/2]<arr[index]){
			swap(arr[(index-1)/2],arr[index]);
			index=(index-1)/2;
		}
		cout <<arr[index]<<" element insert into heap";
	}
	void print(){
		for (int i = 0 ; i < size ; i++){
			cout<<arr[i]<<"  ";
		}
		cout<<endl;
	}
	void heapify(int index){
		int largest= index;
		int leftchild= 2*index+1;
		int rightchild= 2*index+2;
		
		//largest element store the index of largest element between index , leftchild and rightchild
		if (leftchild<size and arr[leftchild]>arr[index]){
			largest= leftchild;
		}
		if (rightchild<size and arr[rightchild]>arr[index]){
		
			largest=rightchild;
		}
		if (largest!=index){
			swap(arr[largest],arr[index]);
			heapify(largest);
		}
	}
	void del (){
		if (size==0){
			cout<<"Heap underflow";
			return;
		}
		cout<<arr[0]<<"  element delete from Heap"<<endl;
		
		arr[0]=arr[size-1];
		size--;
		heapify(0);
		
	}
};
int main(){
	heap h(6);
	h.insert(10);
	h.insert(5);
	h.insert(50);
	h.insert(25);
	h.insert(52);
	h.insert(100);
	cout<<endl<<endl;
	h.print();
	
}	
