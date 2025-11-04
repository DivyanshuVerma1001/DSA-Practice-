#include <iostream>
#include<queue>
using namespace std;
void display(queue <int> q){
	for (int i = 0 ;i <q.size();i++){
		cout<<q.front ();
		q.push(q.front());
		q.pop();
	}
}
int main (){
	int arr[6]={1,2,3,4,5,6};
	int k ;
	cin>>k;
	queue<int> q;
	
	for (int i = 0 ; i< k-1 ;i++){
		q.push(arr[i]);
	}
	for (int i = k-1;i<6;i++){
		q.push(arr[i]);
		display(q);
		cout<<endl;
		q.pop();
	}
}
