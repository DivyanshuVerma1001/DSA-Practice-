#include<iostream>
using namespace std;
int main (){
	int a = 10;
	cout<<&a<<endl;
	int * p =  &a;
	int i ;
	p=&i ;
	cout<<p;
	cout<<endl <<endl <<sizeof(p);
	cout<<endl<<*p;
	cout<<sizeof (p);
	
}
