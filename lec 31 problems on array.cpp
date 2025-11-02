#include <iostream>
using namespace std;
void increasingNumber(int n){
	if (n==0) return; 
	increasingNumber(n-1);
	cout<<n<<" ";
}
void kMultiple(int n , int k){
	if (k==0) return ;
	kMultiple(n,k-1);
	cout<<n*k<<"  ";
}
int alternatePlusMinus(int n){
	if (n==0) return 0;
	if (n%2==0){
		return alternatePlusMinus(n-1) -n;
	}
	else{
		return alternatePlusMinus(n-1)+n;
	}
}
int betterAlternatePlusMinus(int n){
	if (n==0) return 0;
	return betterAlternatePlusMinus(n-1)+((n%2==0)?(-n):(n));
}

int main(){
	int n;
	cin>>n;
	increasingNumber(n);
	cout <<endl;
	int k ;
	cin>>k;
	kMultiple(n,k);
	cout<<endl;
	cout<<alternatePlusMinus(n)<<endl;
	cout<<betterAlternatePlusMinus(n);
}
