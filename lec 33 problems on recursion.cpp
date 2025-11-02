#include <iostream>
#include <vector>
using namespace std;
 
void ways (int arr[][3] ,int i,int j,int r,int c,int w){
	if (i==r-1 and j== c-1){
		w++;
		return;
	}
	else if (i==r-1 and j<c-1)  ways(arr,i,j++,r,c,w);

	else if (i<r-1 and j==c-1)  ways(arr,i++,j,r,c,w);

	ways(arr,i,j++,r,c,w);
	ways(arr,i++,j,r,c,w);

}
void subsetSum(int arr[],int n, int i ,int s){
	if (i==n) {
		cout<<s<<endl ;
		return;
	}
	subsetSum(arr,n,i+1,s+arr[i]);
	subsetSum(arr,n,i+1,s);
}

void subsetSum2(int arr[],int n, int i ,int s,vector <int> result){
	if (i==n) {
		result.push_back(s);
		return;
	}
	subsetSum(arr,n,i+1,s+arr[i]);
	subsetSum(arr,n,i+1,s);
}
int element (vector <int> v ,int n,int i){
	if (n==v[i])  return i;
	if (i==v.size()-1) return -1;
	element(v,n,i+1);
}

bool ele(int arr[],int s, int idx,int t){
	if (idx==s) return false;
	return (arr[idx]==t) or ele(arr,s,idx+1,t);
}

int main(){
	vector <int> v;
	
	v.push_back(1);
	v.push_back(7);
	v.push_back(6);
	v.push_back(8);
	v.push_back(5);
	v.push_back(2);
	
//	cout<<element(v,78,0)<<endl;
	int arr[3]={2,4};
//	cout<<ele(arr,6,0,4);
// to find sum of all subsets of set
//subsetSum(arr,2,0,0);
vector <int > v1;
//subsetSum2(arr,2,0,0,v1);
//cout<<v1[0];

int n,m,w;
cin>>n,m;
int a[n][3];
ways(a,0,0,n,m,w);



	}
