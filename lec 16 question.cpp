//Q at 32:00 in lec 16 
#include <iostream>
#include <vector>
using namespace std;
int main (){
	int n;
	cout<<"enter number of element";
	cin>>n;
	vector <int> v(n+1,0);
	cout<<v.size();
	for (int i=1; i<v.size();i++){
		int ele ;
		cout<<"enter element"; 
		cin>>ele;
		v[i]=ele;
	}
	for (int i=1; i<v.size();i++){
		v[i]+=v[i-1];
	}
	int q;
	cout<<"enter number of queries";
	cin>>q;
	while (q--){
		int l,r;
		cin>>l>>r;
		int ans= v[r]-v[l-1];
		cout<<ans;
	}
	
}
