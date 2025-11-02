#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
void bucketSort(float arr[],int size){
	vector <vector <float> >v (size, vector <float> ());
	
	for (int i =0 ;i<size;i++){
		int index= arr[i]*size;
		v[index].push_back(arr[i]);
	} 
	for (int i=0; i<size;i++){
		if (!v[i].empty()){
			sort(v[i].begin(),v[i].end());
		}
	}
	int k=0 ; 
	for (int i = 0; i <size;i++){
		for (int j=0; j<v[i].size();j++){
			arr[k++]=v[i][j];
		}
	}
}
void bucketSort2(float arr[],int size){
	vector <vector <float> >v (size, vector <float> ());
	
	float max_ele= arr[0];
	float min_ele= arr[0];
	
	for (int i =1; i < size ; i ++){
		max_ele= max(max_ele, arr[i]);
		min_ele= min(min_ele, arr[i]);
	}
	
	float range = (max_ele-min_ele)/size;
	
	for (int i =0 ;i<size;i++){
		int index= (arr[i]-min_ele)/range;
		float diff= (arr[i]-min_ele)/range -index;
		if (diff==0 && arr[i]!=min_ele)
			v[index-1].push_back(arr[i]);
			
		else
			v[index].push_back(arr[i]);
			
	} 
	for (int i=0; i<size;i++){
		if (!v[i].empty()){
			sort(v[i].begin(),v[i].end());
		}
	}
	int k=0 ; 
	for (int i = 0; i <size;i++){
		for (int j=0; j<v[i].size();j++){
			arr[k++]=v[i][j];
		}
	}
}
int main(){
	float arr[]={0.23,0.15,0.89,0.46,0.18,0.78};
	int size = sizeof(arr)/4;
	bucketSort(arr, size);
	for (int i =0 ; i< size; i++){
		cout<<arr[i]<<"  ";
	}
}
