#include <iostream >
#include<bits/stdc++.h>
#include<vector>
using namespace std; 
int hello(vector <int > v, int n ,int cost){
	if(n-1==0) return (cost+ abs(v[n]-v[n-1]));
	if ( abs(v[n]-v[n-1])< abs(v[n]-v[n-2])){
		cout<<cost<<endl;
		return (v,n-1,cost+ abs(v[n]-v[n-1]));
	}
	else{
		cout<<cost<<endl;
		return (v,n-2, cost+ abs(v[n]-v[n-2]));
	}
	
}
int main(){

// Forg jump problem
vector <int>  v ;
v.push_back(10);
v.push_back(40);
v.push_back(30);
v.push_back(20);
int x=hello(v,3,0);
cout <<x;
}
