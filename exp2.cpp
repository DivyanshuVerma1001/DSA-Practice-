#include <iostream >
#include <string>
#include<vector>
using namespace std;
string LongestCommonPrefixMethod2(vector <string> v){
	string s1 = v[0];
	int max= -1;
	for (int i = 0 ; i<v.size();i++){
		int j =0;
		while(j<s1.size()&& j <v[i].size() && s1[j]==v[i][j])
			j++;
			
		max = min (max,j);	
		}
		
		
		return s1.substr(0,max);
	
}

int main(){
vector <string> v;
int n;
cin>>n;

for (int i = 1 ; i<n ; i++){
	cin>>v[i];
}

for (int i = 1 ; i<n ; i++){
	cout<<v[i];
}

string p2= LongestCommonPrefixMethod2(v);
cout<<p2<<endl;

}
