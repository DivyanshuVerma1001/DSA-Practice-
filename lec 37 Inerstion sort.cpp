#include <iostream>
#include<vector>
using namespace std;
void insertionSort(vector <int> &v){
	for (int i= 1; i < v.size(); i++){
		int current = v[i];
		int j = i-1; 
		while(j>=0 and v[j]>current){
			v[j+1]= v[j];
			j--;
		}
		v[ j+1]=current ;
	}
}
int main(){
	vector <int > v;
	int n ; 
	cin>>n;
	for (int i=0; i<n;i++){
		int ele ;
		cin>>ele;
		v.push_back(ele);
	}
	insertionSort(v);
	for (int i = 0 ; i<n; i++){
		cout<<v[i]<<"  ";
	}
}
