#include <iostream >
#include <iostream>
using namespace std ;
int sumDigit(int n){
	
//	to find the sum of digits of a numbers
	if (n<=9&n>=1){
		return n;
		}
	int x = n%10;
	int sum = x+ sumDigit(n/10);
//	cout <<sum<<endl;
	return sum;
}

int power(int p , int q){
	if ( q== 0 ) return 1;
	return p*power(p,q-1);
}
int power2(int p , int q ){
	if ( q== 0) return 1;
	if (q%2== 0){
	int result = power2(p,q/2);
	return result*result;
}
	else {
	int result= power2(p,q/2);
	return p*result*result;
}
}
int power3(int p , int q ){
	if ( q== 0) return 1;
	if (q%2== 0){
	return power(power2(p,q/2),2);
}
	else {
	return p*power(power2(p,q/2),2);
}
}

int main(){
	int x = sumDigit(235);
	cout <<x<<endl;
	int y = power(3,3);
	cout <<y<<endl;
	int z= power2(3,3);
	cout<<z<<endl;
	int a = power3(3,3);
	cout<<a;
	cout <<endl<<5/2;
}
