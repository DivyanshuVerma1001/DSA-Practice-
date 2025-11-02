#include <iostream>
using namespace std;
int main(){
	int a[2][3]={{},{4,5,6}};
	for (int i= 0;i<2;i++){
		for (int j= 0; j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int b[2][3]={{1,2},{4,5,6}};
	for (int i= 0;i<2;i++){
		for (int j= 0; j<3;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	int c[2][3]={1,2,3,4,5,6};
	for (int i= 0;i<2;i++){
		for (int j= 0; j<3;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	int d[2][3]={1,2,3,4,5,6};
	for (int i= 0;i<2;i++){
		for (int j= 0; j<3;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
//	Multiplication of maatrixs 
int a1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b2[3][3]={1,2,3,4,5,6,7,8,9};
int ans[3][3]={0};
int n =0;
for (int i =0;i<3;i++){
	for (int j = 0;j<3;j++){
		for (int k= 0 ; k<3;k++){
			ans[i][j]+= a1[i][k]*b2[k][j]; 
			cout <<n<<endl;
			n++;
		}
		
	}
	cout<<endl;
}
	cout<<endl;
for (int i =0;i<3;i++){
	for (int j = 0;j<3;j++){
		cout<<ans[i][j]<<" : ";
	}
	cout<<endl;
}
	
	
	
}
