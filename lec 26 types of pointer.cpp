#include <iostream>
using namespace std;
int main(){
/////////////////////////TYPES OF POINTER

//1 WILD POINTER
	int x;
	cout<<x<<endl; //garbage value
	int * ptr;
	cout<<ptr<<endl;   //garbage address
	cout<<*ptr<<endl;         //garbage value 
	
//2 NULL POINTER
	int *p1 = NULL;
	int *p2=0;
	int *p3= '\0';
	cout <<p1<<"  "<<p2<<"  "<<p3<<endl;
//	cout <<*p;       segmentation fault

//3 DANGLING POINTER
int * p=0 ;
for (int i = 0 ; i<5; i++){
	int x= 10 ; 
	p= &x;
}

cout<<"value of x "<<x<<endl;
//cout <<"value of pointer"<<p<<endl;  its not working i dont know why


//4 VOID POINTER
void *pv;
int a= 10;
float b = 2.3;
pv =&a ;
cout <<"address of a "<<pv <<endl;
pv = &b;
cout <<"address of b"<<pv <<endl ;
pv= &a ;
//cout <<*pv; //it give error
//derefrence of only done after type casting 

int * intptr = (int*)pv ;
cout <<"value in pv is"<<*intptr;













	
}
