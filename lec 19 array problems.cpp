#include <iostream>
#include <vector>
using namespace std;
void maxOneRow(vector <vector<int> >v){
	int maxno = INT_MIN;
	int idx =-1;
	for(int i = 0; i<v.size();i++){
		for (int j= 0 ; j<v[i].size();j++){
			 	if (v[i][j]==1){
			 		int noOfOnes = v[i].size()-j;
			 		if (noOfOnes>maxno){
			 			maxno=noOfOnes;
			 			idx= i;
					 }
					 break;
				 }
		}
	}
	cout<<maxno<<"at index"<<idx<<endl;
}

void maxOneRowMethod2(vector<vector<int> > v){
	int first = v[0].size()-1;
	int maxNo= 0;
	int idx=-1;
	for (int j = first; j>= 1; j--){
		if(v[0][j]==1){
			first==j;
			maxNo++;
		}
		
	}
	for (int i = 1 ;i<v.size();i++){
		for (int j = first+1 ;j>=0;j--){
			if(v[i][j]==1){
				first =j;
				maxNo++;
				cout <<"max no increase by 1  " <<maxNo<<" i = "<<i<<endl;
				cout<<"first= "<<first<<endl;
				idx=i;		     	
				}
			if (v[i][j]==0){
				break;
			}
		}cout <<"out of inner loop "<<endl;
	}
	cout<<"max no of ones  "<<maxNo<<"at index  "<<idx<<endl;
}

void transposeMatrix(vector <vector <int > > &v){
	
	for (int i = 0; i <v.size();i++){
		for (int j = 0 ; j<i; j++){
			
			swap(v[i][j],v[j][i]);
			
		}
	}
	for (int i =0; i<v.size();i++){
		for (int j= 0;j<v[0].size();j++){
			cout<<v[i][j]<<" : ";
		}
		cout<<endl;
	}
}
//
//void rotate90degre(vector <vector<int> > &v){
//	transposeMatrix(v);
//	for(int i = 0 ;i<v.size();i++){
//	
//		reverse(v[i].begin(),v[i].end());
//}
//}











int main(){
	 int r ,c;
	 cout <<"enter no of row  ";
	 cin>>r;
	 cout<<"enter no of column  ";
	 cin>>c;
	 vector <vector <int> > v (r, vector< int >(c));
	
	for (int i =0; i<r;i++){
		for (int j= 0;j<c;j++){
			cout<<j<<"  ";
			cin>>v[i][j];
		}
	}
	
	for (int i =0; i<r;i++){
		for (int j= 0;j<c;j++){
			cout<<v[i][j]<<" : ";
		}
		cout<<endl<<endl;
	}
	
//	maxOneRow(v);
//	
//	maxOneRowMethod2(v);
	
//transposeMatrix(v);
//reverse (v[0].begin(),v[0].end());
rotate90degre(v);	
	for (int i =0; i<v.size();i++){
		for (int j= 0;j<v[0].size();j++){
			cout<<v[i][j]<<" : ";
		}
		cout<<endl;
	}
	
	
}

