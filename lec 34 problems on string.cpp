#include <iostream>
#include<string>
using namespace std;
void substring(string s,int i,int n,string subs){
	if (i==n) {
		cout<<subs<<"   ";
		return;
	}
	substring(s,i++,n,subs+s[i]);
	substring (s,i++,n,subs);
}
int main(){
	cout<<"hello world";
	cout<<"hello";
	string s="abc";
	substring(s,0,3,"");
}
