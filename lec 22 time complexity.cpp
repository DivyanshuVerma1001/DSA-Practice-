#include <iostream>
#include<bits/stdc++.h> //this header file is use to include other header files
using namespace std;
int sum (int a , int  b){
	int sum = 0;
	for (int i = a;i<=b; i++){
		sum+=i;
	}
	cout <<sum;
}
int sumoptimised(int a , int b ){
	int n= (b-a-1);
	int ans= (n*(2*a+(n-1)))/2;
	cout <<ans;
}
int main(){
sumoptimised(2,100000000);
}
