#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

void sort (vector <int> &v){
	int count=0;
	for (int i = 0; i <v.size();i++){
		if(v[i]==0){
			count++;
		}
	}
	for (int i=0;i<(v.size()-count);i++){
		v[i]=0;
	}
	for (int i=(v.size()-count);i<v.size();i++){
		v[i]=1;
	}
}

void sortMethod2(vector <int> &v){
	int left=0;
	int right= v.size()-1;
	while (left<right){
		if (v[left]==1&&v[right]==0){
			v[left++]=0;
			v[right--]=1;
		}
		if(v[left]==0){
			left++;
		}
		
		if(v[right]==1){
			right--;
		}
	}
	
}
void sortOddEven(vector <int> &v){
	int l= 0;
	int r= v.size();
	while(l<r){
		if(v[l]%2==1 && v[r]%2==0){
			swap(v[l],v[r]);
			l++;
			r--;
			}
		if(v[l]%2==0){
			l++;
		}
		if(v[r]%2==1){
			r--;
		}
	}
}
void numberSquareSort(vector <int> v){
	vector <int> ans;
	int l=0;
	int r= v.size()-1;
	while (l<r){
		if(abs(v[l])<abs(v[r])){
			ans.push_back(v[r]*v[r]);
			l++;
			r--;
		}
		else{
			ans.push_back(v[l]*v[l]);
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
//	##########################code to sort array of 0 and 1
	vector <int> v;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
		}
	cout<<endl;
	numberSquareSort(v);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

