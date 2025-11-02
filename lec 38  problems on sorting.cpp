#include<iostream>
#include <vector>
using namespace std;
void arrangeBubble( vector <int> &v){
	for (int i=0; i<v.size()-1;i++){
		for (int j =i+1; j<v.size(); j++){
			if (v[i]==0){
				swap(v[j],v[i]);
			}
		}
	}
}
void arrangeInsertion(int v[],int size){
	for (int i = size-2; i<=0; i++){
		int current=i; 
		int j= i+1;
		while (v[j]<size and v[j]==0){
			v[j-1]=v[j];
			j++;
		}
		if (v[current]==0){
			v[j-1]=current;
		}
		
	}
}
int main(){
//	vector <int > v;
//	int n ; 
//	cin>>n;
//	
//	for (int i = 0; i< n;i++){
//		int ele; 
//		cin>>ele;
//		v.push_back(ele);
//	}
//	arrangeBubble(v);
int arr[]={0,5,0,3,42};
	arrangeInsertion(arr,5);
	for (int i =0 ; i<n ; i++){
		cout<<arr[i];
	}
	
	
	
	
}
