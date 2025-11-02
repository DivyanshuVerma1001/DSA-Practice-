#include <iostream>
#include <vector>
using namespace std;
int fact (int n){
	int f=1;
	for (int i =1;i<=n;i++){
		f*=i;
	}
	return f;
}
void nthRowPascalTriangle(int n){
	n-=1;
	for (int i =0;i<=n;i++){
		int ele = fact(n)/(fact(i)*fact(n-i));
		cout <<ele<<" : ";
	}
}
vector <vector < int > > pascalTriangle( int n){
	vector <vector <int> > v;
	for (int i = 0; i<n;i++){
		v[i].resize(i+1);
		
		for(int j=0;j<i+1;j++){
			if (j==0||j==i){
				v[i][j]=1;
			}
			else{
				v[i][j]=v[i-1][j]+v[i-1][j-1];
			}
		}
	}
	return v;
}




int main (){
//
//	vector <int > v1  ;
//	vector <int > v2;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	for (int i=0; i<v1.size();i++){
//		cout <<v1[i];
//	}
//	cout <<endl;
//	
//	v2=v1;           //we can copy one vector to another and copy is created
//	
//	for (int i=0; i<v2.size();i++){
//		v2[i]=1;
//		cout <<v2[i];
//	}
//	cout <<endl;
//	for (int i=0; i<v1.size();i++){
//		cout <<v1[i];
//	}
////	pascal triangle
///*
//1
//1 : 1
//1 : 2 : 1
//1 : 3 : 3 : 1
//1 : 4 : 6 : 4 : 1
//1 : 5 : 10:10 : 5 : 1
//*/
// 
//cout<<endl<<endl;
//int i = fact(0);
//cout<<i;
//cout<<endl<<endl<<endl<<endl;
//nthRowPascalTriangle(4);

vector < vector < int > >  v; 

v=pascalTriangle(5);
}
