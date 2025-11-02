#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void FirstandLastOccurance(int arr[],int size,int target, int ans[2]){
	int lo = 0 ; 
	int hi = size-1;
	int first=-1;
	int last=-1;
	while (lo<=hi){
		int mid = (lo+hi)/2;
		if (arr[mid]==target){
			first = mid;
			hi= mid-1;
		}
		else if (arr[mid]<target){
			lo = mid +1;
		}
		else 
			hi = mid -1;
		
	}
	lo=0,hi=size-1;
	while (lo<=hi){
		int mid = (lo+hi)/2;
		if (arr[mid]==target){
			last = mid;
			lo= mid+1;
		}
		else if (arr[mid]<target){
			lo = mid +1;
		}
		else 
			hi = mid -1;
		
	}
	ans[0]=first;
	ans[1]=last;
	
}
int binarySearchSortedRotated(int arr[],int size , int target){
	int lo = 0 ; 
	int hi = size -1;
	while (lo <hi){
		int mid = (lo +hi)/2;
		if (arr[mid]==target)   return mid;
		if (arr[mid]>arr[lo]){
			if (target>arr[lo] and target < arr[mid]){
				hi= mid-1;
			}
			else
				lo = mid+1;
		}
		else{
			if (target >arr[mid] and target <arr[hi]){
				lo = mid +1;
			}
			else
				hi = mid -1;
		}
	}
	return -1;
}
int main (){
	int arr[8]={6,7,8,5,4,3,2,1};
	int ans[2];
//	FirstandLastOccurance(arr,8,4,ans);
//	cout <<ans[0]<<"  "<<ans[1];
	cout <<binarySearchSortedRotated(arr, 8, 2);
	
}
