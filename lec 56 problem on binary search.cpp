#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peakElement(int arr[], int size){
	int lo=0;
	int hi = size-1;
	int ans  =-1;
	while (lo<=hi ){
		int mid = (lo +hi)/2;
		if (arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
			ans = mid ; 
			return mid ;
		}
		if (arr[mid]>arr[mid -1]){
			lo = mid +1;
			ans= mid ;
		}
		else{
			hi= mid -1;
			ans = mid ;
		}
			
	}
	return ans;
}
int findPeak(int arr[]){
	int size= sizeof (arr)/sizeof(arr[0]);
	int lo= 0;
	int hi = size-1;
	while (lo<=hi){
		int mid = (lo+hi)/2;
		if (arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
			cout<<"hello";
	}
}

vector <int >  binary2D(int arr[][3],int r, int c,int target)
{
	vector <int> v(2);
	int lo = 0 ; 
	int hi = r*c-1;
	while (lo <= hi){
		int mid = (lo+hi)/2;
		int row = mid /c;
		int column= mid %c;
		if (arr[row][column]==target){
			v[0]=row;
			v[1]=column;
			return v;
		}
		else if (arr[row][column]<target)
			lo = mid +1;
			
		else 
			hi = mid -1; 
	}
	return {-1,-1};
}




int main (){
//	cout<< "hello"; 	
	int arr[3][3]={{0,1,3},{5,6,7},{8,9,10}};
	vector < int > v(2);
	v=binary2D(arr,3,3,7);
	cout <<v[0]<<" "<<v[1];
}
