#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int binarySearch(vector <int > v,int target ){
	int r = v.size()-1;
	int l = 0 ; 
	while (l<=r){
		int mid = (l+r)/2;
		
		if (v[mid]==target)  return mid;
		
		else if (v[mid]< target)
			l=mid+1;
			
		else
			r= mid-1;
	}
	
}

int binarySearchRecursion(int v[], int l , int r ,int target ){
	if (l>r) return -1;
	int mid = (l+r)/2; 
	if (v[mid]==target) return mid;
	else if (v[mid]>target)  return binarySearchRecursion(v,l,mid-1,target);
	else  return binarySearchRecursion(v,mid+1, r,target);
}


int binarySearchQuestion(vector <int > v,int target ){
	int r = v.size()-1;
	int l = 0 ; 
	int ans =-1;
	while (l<=r){
		int mid = (l+r)/2;
		
		if (v[mid]==target) {
		
		ans= mid ;
		r= mid -1; 
	}
		else if (v[mid]< target)
			l=mid+1;
			
		else
			r= mid-1;
	}
	return ans;
	
}
int question2(i t n){
	int lo=1;
	int hi=n;
	int ans = -1;
	while (lo<=hi){
		int mid = (lo + hi)/2;
		
		if(mid*mid<= n){
			ans= mid ;
			lo = mid +1;
		} 
		else
			hi= mid-1;
		
	}
	return ans ;
}

int main(){
	
	vector <int > v; 
	
	v.push_back(1);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(5);
	v.push_back(5);
	v.push_back(9);
	v.push_back(9);
	int arr[]={1,3,5,6,8,10,11,16};
//	cout<<binarySearch(v,16)<<endl;
//	cout<< binarySearchRecursion(arr,0,7,16);
//	cout<< binarySearchQuestion(v, 9);
	cout <<question2(40);
}
