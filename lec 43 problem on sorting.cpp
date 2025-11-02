#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition (int arr[],int first ,int last){
	int pivot= arr[last];
	int i = first -1;
	int j = first; 
	for (; j<last; j++){
		if (arr[j]<pivot){
			swap(arr[++i], arr[j]);
		}
	}
	swap(arr[i+1], arr[j]);
	return i+1;
}
int kthNumber(int arr[], int l ,int r,int k){


	int pi = partition (arr, l , r);
	if (pi-l ==k-1) 
		return arr[pi];	
	
	else if( pi-l <k-1)	
		kthNumber(arr, l , pi -1,k);
		
	else
		kthNumber(arr, pi+1, r,k-pi+l-1);
}
vector <int> q2(vector <int> v1, vector <int> v2){
	int s1= v1.size();
	int s2= v2.size();
	vector <int> v3(s1+s2);
	int a=0;
	int b= 0; 
	for (int i =0; i<s1+s2; i++){
		if (v1[a]<=v2[b])
			v3[i]=(v1[a++]);
			
		else
			v3[i]=(v2[b++]);
			
	}
	return v3;
	}

 
int main (){
	int arr[]= {3,5,2,1,4,7,8,6};
//	cout <<kthNumber(arr,0,7,5);
	vector <int > v1,v2,v3;
	v1.push_back(5);
	v1.push_back(8);
	v1.push_back(10);
	v2.push_back(2);
	v2.push_back(7);
	v2.push_back(8);
	v3= q2(v1,v2);
	for (int i = 0 ;i < v3.size();i++){
		cout<<v3[i]<<"  ";
	}
}
