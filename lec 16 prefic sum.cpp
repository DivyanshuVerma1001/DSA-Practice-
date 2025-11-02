#include <iostream>
#include <vector>
using namespace std;
void prefixSufixSum(vector <int> v){
	int idx;
	cout<<"enter index";
	cin>>idx;
	int sum1=0,sum2=0;
	for (int i= 0;i <v.size();i++){
		if (i<=idx){
			sum1+=v[i];
		}
		else{
			sum2+=v[i];
		}
	}
	cout<<"prefix sum "<<sum1<<"  sufix sum  "<<sum2<<endl;
}

void checkPrefixSufixSum(vector <int> v){
	int totalSum=0;
	int prefixSum=0;
	for (int i =0; i <v.size();i++){
		totalSum+=v[i];
	}
	for (int i = 0; i <v.size();i++){
		prefixSum +=v[i];
		int sufixSum = totalSum-prefixSum;
		
		if (sufixSum==prefixSum){
			cout <<"index at which prefix sum is equal to sufix sum "<<i<<endl;
		}
	}
}
int main(){
//	int arr[]={5,4,6,4,8,2,1,3,4,9};
//	int s= sizeof(arr)/4;
//	
//	for (int i = 1;i <s-1;i++){
//			arr[i]= arr[i-1]+arr[i];
//		}
//	for (int i = 0; i<s-1;i++){
//		cout<<arr[i]<<"  ";
//	}
vector <int> v;
int n ;
cout<<"enter no of element";
cin>>n;
for (int i = 0 ; i<n; i++){
	int ele ;
	cout<<"enter element";
	cin>>ele;
	v.push_back(ele);
}	

prefixSufixSum(v);

checkPrefixSufixSum(v);



	}
	
