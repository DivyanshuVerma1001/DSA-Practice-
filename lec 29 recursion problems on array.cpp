#include <iostream>
#include<vector>
using namespace std;
void element(int arr[],int idx,int l){
	if (l==0||idx>l-1) return ;
	cout <<arr[idx]<<endl;
	return element (arr,idx+1,l);
}
int maxele(int arr[], int idx , int l ){
	if (idx==l-1) return arr[idx] ;
	
	return max(arr[idx],maxele(arr,idx+1,l));
	
}
int sum(int arr[],int idx , int l ){
	if (idx == l-1) return arr[idx];
	return arr[idx]+sum ( arr, idx+1, l);
}
int main(){
	int arr[]={1,2,100,6,7,8,9};
	int n = 7;
//	element(arr, 0 ,n);
int x= maxele(arr,0,n);
cout<<x<<endl;	
int y = sum(arr , 0, n );
cout<<y;
}
