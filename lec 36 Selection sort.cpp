#include <iostream>
#include <vector>
using namespace std; 
void selectionSort(vector <int > &v){
	for(int i =0 ; i<v.size()-1; i++){
		int min_idx=i;
		for(int j =i+1; j<v.size(); j++){
			if (v[j]<v[min_idx]){
				min_idx=j;
			}
		}
		if (min_idx!=i){
			swap(v[i],v[min_idx]);
		}
	}
}
int main(){
	vector <int > v;
	int n; 
	cin>>n;
	for (int i = 0; i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	selectionSort(v);
	for (int i =0 ; i<n;i++){
		cout<<v[i]<<"  	";
	}
}
