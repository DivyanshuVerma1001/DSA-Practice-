#include <iostream>
using namespace std;
int main(){
	/*
	int a[]={1,2,3,4,5,6};
	int t= 5;
	int p= 0;
	for(int i=0;i<6;i++){
		for (int j = i+1;j<6;j++){
			if(a[i]+a[j]==t){
				p++;
			}
		}
	}
	cout<<p<<endl;
	
	int a1[]={1,2,4,5,6,7,9,2,3,1,6,4,3,4,5,6};
	int t1= 8;
//	int p1= 0;
	for(int i=0;i<16;i++){
		for (int j = i+1;j<16;j++){
			if(a1[i]+a1[j]==t1){
//				p1++;
				cout<<a1[i]<<"  ";
				cout<<a1[j]<<endl;
			}
		}
	}
//	cout<<p1;



//METHOD TO UNIQUE ELEMENT

int x[]={1,2,3,4,2,1,3};

for (int i=0;i<7;i++){
	for (int j= i+1;j<7;j++){
		if(x[i]==x[j]){
			x[i]=x[j]=-1;
		}
	}
}


for(int i=0;i<7;i++){
	if (x[i]!=-1){
		cout<<x[i];
	}
}

//code to find largest element

int y[]={1,2,5,65,45,6,56,9,8,79,5,46,4,6,5,5,78,97,9,45,4,4,54,54,5,4,68,+8,87};

int max= INT_MIN;
int index=-1;
int size= sizeof(y)/4;
for (int i=0;i<size;i++){
	if (y[i]>max){
		max= y[i];
		index=i;
	}
}
cout<<endl <<max<<"  at index  "  <<index<<endl;

//code to find second max

int secmax=INT_MAX;
int idx=-1;
for ( int i = 0; i=size;i++){
	if (y[i]>secmax&&y[i]!=max){
		secmax=y[i];
		idx=i;
	}
}

cout<<secmax<<"  at index "<<idx;
*/
//method to rotate array by k steps 
int z[]= {1,2,3,4,5,6,7,8,9};
int k;
int s = sizeof(z)/4;
cin>>k;
k=k%s;
int arr[s];
for (int i = s-k,j=0;i<s;i++,j++){
	arr[j]=z[i];
}
for (int i = 0,j=k;i<s-k;i++,j++){
	arr[j]=z[i];
}

for (int i = 0;i<s;i++){
	cout<<arr[i];
}





















}
