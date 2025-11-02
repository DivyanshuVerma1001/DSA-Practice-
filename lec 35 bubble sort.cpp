#include<iostream>
#include<vector>
#include <string >
using namespace std;
void bubbleSortInt(vector <int > v){
	int n= v.size();
	for (int i=0; i<n-1; i++){
		for (int j = 0 ; j<n-1-i; j++){
			if (v[j]>v[j+1])
				swap (v[j],v[j+1]);
		}
}
}
void bubbleSortIntOptimized(vector <int > v){
	int n= v.size();
	for (int i=0; i<n-1; i++){
		bool flag = false;
		for (int j = 0 ; j<n-1-i; j++){
			if (v[j]>v[j+1]){
				swap (v[j],v[j+1]);
			}
		}
		if (!flag) break;
		
}
}
void bubbleSortString(string &s){
	int n= s.size();
	for (int i=0; i<n-1; i++){
		for (int j = 0 ; j<n-1-i; j++){
			if (s[j]>s[j+1])
				swap (s[j],s[j+1]);
		}
}
}
int main(){
	vector <int > v;
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		int ele; 
		cin>>ele;
		v.push_back(ele);
	}
	
	bubbleSortInt(v);
	for (int i= 0 ; i <n ; i++){
		cout<<v[i]<<"  ";
}


	string s = "kdfkakjoawjvld;aj";
	bubbleSortString(s);
	cout <<s;
}
