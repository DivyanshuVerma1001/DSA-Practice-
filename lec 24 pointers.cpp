#include <iostream >
using namespace std ;
int main (){
	//&(address of operator )- use to find address of variable
	int x= 10;
	cout <<"address of x"<<&x<<endl;
	// pointer store the address of variable 
	int *ptr= &x;
	cout<<ptr;
	
}
