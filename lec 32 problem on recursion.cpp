#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int frogjump(vector <int > v, int n ,int cost){
	if(n-1==0) return cost+ abs(v[n]-v[n-1]);
	if ( abs(v[n]-v[n-1])< abs(v[n]-v[n-2])){
		return (v,n-1,cost+ abs(v[n]-v[n-1]));
	}
	else{
		return (v,n-2, abs(v[n]-v[n-2]));
	}
	
}
int hcf(int x , int y){
	int hcf ;
	for ( int i = 1;i<=min(x ,y);i++){
		if (x%i==0 && y%i==0){
			hcf = i;
		}
	}
	return hcf;
}
int hcfRecursion(int x , int y){
	if (x==y) return x;
	if (x>y){
		x=x-y;
	}
	else{
		y= y-x;
	}
	hcfRecursion(x,y);
}

int hcfWhile(int x ,int y ){
	while(x!=y){
		if (x>y){
			x=x-y;
		}
		else y=y-x;
	}
	return x;
}

int power(int n ,int d){
	if (d==0) return 1;
	return n*power(n,d-1);
}
int armstrong(int n , int d){
	if (n>=0 and n<=9) return power(n,d);
	return power(n%10,d) + armstrong(n/10,d);
}


int main(){{}
	int num1,num2 ;
	cin >>num1>>num2;
/*		
	cout<<hcf(num1,num2)<<endl;
	
	cout<<hcfRecursion(num1,num2)<<endl;
	
	cout<<hcfWhile(num1 ,num2)<<endl;
	*/
	int hcf =1;
	while(num1!=1 and num2 !=1){
		if (num1%2==0 and num2%2==0){
			hcf*=2;
			num1/=2;
			num2/=2;
		}
		else if (num1%3==0 and num2%3==0){
			hcf*=3;
			num1/=3;
			num2/=3;
		}
		else if (num1%5==0 and num2%5==0){
			hcf*=5;
			num1/=5;
			num2/=5;
		}
		else if (num1%7==0 and num2%7==0){
			hcf*=7;
			num1/=7;
			num2/=7;
		}
		
		else if (num1%2==0 and num2%2!=0){
			num1/=2;
		}
		else if (num1%3==0 and num2%3!=0){
			num1/=3;
		}
		else if (num1%5==0 and num2%5!=0){
			num1/=5;
		}
		else if (num1%7==0 and num2%7!=0){
			num1/=7;
		}
		
		else if (num1%2!=0 and num2%2==0){
			num2/=2;
		}
		else if (num1%3!=0 and num2%3==0){
			num2/=3;
		}
		else if (num1%5!=0 and num2%5==0){
			num2/=5;
		}
		else if (num1%7!=0 and num2%7==0){
			num2/=7;
		}
		
	}
	
	cout<<hcf<<endl;
	//Armstrong
	cout<<armstrong(153,3)<<endl;
// Forg jump problem
vector <int> v;
v.push_back(10);
v.push_back(30);
v.push_back(40);
v.push_back(20);
cout <<frogjump(v,v.size()-1,0);
}
