#include<iostream>
#include<vector>
using namespace std; 
void countSort (vector <int > &v,int pos){
	int n = v.size();
	
	vector <int > freq(10,0);
	for (int i = 0 ; i<n; i++){
		freq[(v[i]/pos)%10]++;
	}
	for (int i =1 ; i<=10; i ++){
		freq [i]+=freq[i-1];
	}
	vector <int > ans(n);
	for (int i=n-1 ; i >=0 ; i --){
		ans[--freq[(v[i]/pos)%10]] =v[i];
	}
	for (int i=0 ; i<n ; i ++){
		v[i]=ans[i];
	}
}
void radix(vector <int > &v){
	int n = v.size();
	int max_ele = INT_MIN;
	for (int i =0 ; i < n ; i++){
		max_ele=max(max_ele, v[i]);
	}
	for (int pos=1; max_ele/pos>0; pos*=10){
		countSort(v,pos);
	}
}
int main (){
	vector < int > v;
	v.push_back(52);
	v.push_back(5);
	v.push_back(4);
	v.push_back(6);
	v.push_back(78);
	v.push_back(3);
	
	radix(v);
	for (int i= 0 ; i<v.size();i++){
		cout<<v[i];
		
	}
	
}
