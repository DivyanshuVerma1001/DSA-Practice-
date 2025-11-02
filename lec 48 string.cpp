#include <iostream >
#include <string >
#include <cstring>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int slidingWindow(string s, int n ){
	int start = 0; 
	int end= 0;
	int count = 0;
	int m= 0;
	for(;end<s.size();end++){
		if(s[end]=='0'){
			count++;
			m++;			
		}
		while(count>n){
			if(s[start]=='0')  count--;
			start++;
			m--;
		}
		m = max(m,end-start+1);
	}
	return m;
}
int maxs(string s,int n){
	int k= 0;
	for (int i =0; i<s.size(); i++){
		int count=0;
		int p = n; 
		for (int j = i; j<s.size(); j++){
			if (s[j]=='0'&& p==0){
				break;
			}
			count++;
			if (s[j]=='0')
				p--;
		}
		if ( count>k){
			k=count;
		}
	}
	return k;
}
bool isomorphic(string s1,string s2){
	if (s1.size()!=s2.size()){
		return false;
	}
	vector <int> v1 (128,-1);
	vector <int> v2 (128,-1);
	for (int i= 0 ; i<s2.size();i++){
		if (v1[s1[i]] != v2[s2[i]]){
			return false;
		}
		v1[s1[i]]=v2[s2[i]]=i;
	}
	return true;
}

string LongestCommonPrefix(vector <string> &v){
//time complexity for sorting integer vector O(nlogn)
//time complexity for sorting string vector o(nlogn*m) ,m= general length of string
//time complexity for this problem = O(nlogn*m)+o(min(v[0].size(),v[n-1].size())
// step 1 sort the array
//	sort(v.begin(),v.end());

// step 2 comparing first and last element
string s1= v[0];
string s2= v[v.size()-1];
int i= 0;
string ans;
while (i<s1.size()&&i<s2.size()){
	if (s1[i]==s2[i]){
		ans+=s1[i];
	}
	else{
		break;
	}
}
}

string LongestCommonPrefixMethod2(vector <string> v){
	string s1 = v[0];
	int max= -1;
	for (int i = 0 ; i<v.size();i++){
		int j =0;
		while(i<s1.size()&& i <v[i].size()){
			int m = 0;
			if (s1[i]==v[i][j]){
				m++;
			}
			if(m<max){
				max=m;
			}
		}
		}
		return s1.substr(0,max);
	
}

string decode(string s){
	string result = "";
	for (int i = 0 ; i < s.size();i++){
		if (s[i]!=']'){
			result.push_back(s[i]);			
		}
		else{
			//extract string from result
			string str="";
			while(s.empty() &&s.back()!='['){
				str.push_back(result.back());
				result.pop_back();
			}
			//reversing the string
			reverse(str.begin(),str.end());
			
			//removing [ from string
			result.pop_back();
			
			//extract number from result
			string num="";
			while(s.empty() &&(result.back()>='0'&&result.back()<='9')){
				num.push_back(result.back());
				result.pop_back();
			}
			//reversing the num 
			reverse(num.begin(),num.end());
			
			//converting string num to integer
			int x =stoi(num);
			
			for (int i= 0; i<x ; i++){
				result+=str;
			}
		}
	}
}

int max_num(string s){
	
}
int main(){
	/*
	string name = "Divyanshu";  //string defination
	string surname ("Verma");  //string defination
	cout<<name <<' '<<surname<<endl;
	string str ;            //string defination 
	cin>>str;
	cout<<str<<endl;
	
// getline(cin , str ) - to take input string with spaces
	string s;
	getline (cin ,s);
	cout<<str <<endl;
	
//	To find ASCII values of characters
	char a ='a';
	cout <<int(a)<<endl;
	cout<<int ('A')<<endl;
	
//	string st("hello");
//	cout<<sizeof(st);
	
	
//////////////////////////STRING FUNCTION/////////////////////////////////////	
	
//1. reverse(ptr1, ptr2) - reverse the string from starting pointer to end pointer
//Time complexity - O (length of string )
string s= "hello";
cout <<s;
//reverse( s.begin() , s.end());
cout<<s<<endl;


//2. substr(position , length ) = to find the sub - string of a string 
//Time Complexity - O(length of sub string )
string str ="0123456";
cout << str<<endl;
cout<<str.substr(5,2)<<endl;
cout <<str.substr(5)<<endl; //if length is not given then it print till last


//3. + = use to concatinate the string
string s1= "divyanshu";
string s2= "Verma";
cout <<s1+s2<<endl;
s1= s1+s2; //copy created for s1 , extra space is use to create copy 
cout <<s1<<endl;
string s3= "hello";
string s4= "world";
s3+=s4 ;          //s4 get append at end of s3 , no extra space is use 
cout<<s3<<endl;	


//4. strcat()- use to concatenate character array

char arr1[50]="avengers";
char arr2 [10]= "assemble";

//strcat(arr1,arr2);	
cout<<arr1<<endl;


//5. str.push_back(char)= use to insert character at the end of string
string alpha = "abcd";
char c = 'e';
alpha.push_back(c);
cout<<alpha<<endl;



//6. str.size()- to find the length of string 

string ss= "123456";
cout <<str.size()<<endl;


//7.  str.length()- to find length of string
//Time complexity - O(1)
cout <<str.length()<<endl;


//8. strlen(arr)- to find the length of character array

char ar[]={1,2,3,4,5,6,7,8,9};
//cout<<strlen(ar)<<endl;

//9. to_string(integer)= to convert integer into string

int x= 432;
//string s = to_string(x);


//10. str.empty()= return true is string is empty 
string str;
cout<<str.empty()<<endl;   //output - 1
string s="";
cout<<s.empty()<<endl;     //output - 1
string st= "1";
cout<<st.empty()<<endl;     //output - 0



//11. stoi()- return integer value of string 
string str1= "1121221";
int n1= stoi(str1);
cout<<n1 <<endl;


//12.  str.back - give the last character of string 
string s= "hello world";
cout<<s.back()<<endl;


//13 str.pop_back() - remove the last element from group
string s = "hello duniya";
s.pop_back();
cout <<s;


// SORTING IN STRING
//time complexity = O(size of n)
//space complexity = O(26)
string str= "divyanshu";
int freq[26]={0};
string ans;
for (int i= 0 ;i<str.size();i++){
	int a= int(str[i])-97;
	freq[a]++;
}
	
for (int i= 0; i<26;i++){
	for (int j =0; j <freq[i]; j++ ){
		ans.push_back(char(i+97));
	}
}

cout <<endl<<ans<<endl;

//code to check anagram 
//Anagram = rearranging letters of words to get another word 
// same letters , same no of count of letters 

string s = "abcd";
string t= "acdb";
int freqs[26]={0};
int freqt[26]={0};

for (int i = 0 ; i<s.size();i++){
	int a = int(s[i])-97;
	freqs[a]++;
}

for (int i = 0 ; i<t.size();i++){
	int a = int(t[i])-97;
	freqt[a]++;
}

bool as = true;
for(int i= 0 ; i<26;i++){
	if (freqs[i]!=freqt[i]){
		as=false;
	}
}
cout<<as;

// method 2
//Time complexity - O(length of string)
//space complexity = O(26)
vector <int> v(26,0);
bool a = true ;
if (s.size()!=t.size()){
	a=false;
}
for (int i= 0 ; i<s.size();i++){
	v[s[i]+'a']++;
	v[t[i]+'a']--;
	}
	
for(int i = 0; i<26;i++){
	if(v[i]!=0){
		a=false;
	}
}
cout<<a<<endl;	

//To check given string is isomorphic

string s1,s2;
cin>>s1>>s2;

bool iso= isomorphic(s1,s2);
cout<<iso;
vector <string> vx;

int n; 
cin>>n;

for (int i = 1 ; i<n ; i++){
	cin>>v[i];
}

string p = LongestCommonPrefix(vx);
cout<<p<<endl;

string p2= LongestCommonPrefixMethod2(vx);
cout<<p2<<endl;
*/

string s ="0001101011";
cout<<maxs(s,2);

////////#sliding window technique - shortest or longest sequence with some condition 
cout<<slidingWindow(s,2);
}


