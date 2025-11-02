#include <iostream>
#include <vector >
using namespace std;
void countSort(vector <int > v){
	int n = v.size();
	int max_ele = INT_MIN;
	for (int i=0; i<n; i++){
	max_ele = max(v[i],max_ele);
}
	vector <int > freq( max_ele+1,0);
	for (int i=0; i<n; i++){
		freq[v[i]]++;
	}
	for (int i =1; i <=max_ele; i++){
		freq[i]+=freq[i-1];
	}
	vector <int > ans(n);
	for(int i = n-1; i >=0; i--){
		ans[--freq[v[i]]]=v[i];
	  }
	for (int i =0 ; i <n ; i++){
		cout<< ans[i]<<" ";
	}
}
int main(){
	vector <int > v;
	
	v.push_back(51);
	v.push_back(1);
	v.push_back(21);
	v.push_back(6);
	v.push_back(7);
	v.push_back(1);
	v.push_back(3);
	
	
	countSort(v);
	
}
