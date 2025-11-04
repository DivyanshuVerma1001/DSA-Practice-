#include <iostream>
#include <stack>
using namespace std;
int main (){
///////////////////////////REVERSE ARRAY USING STACK
char arr[]={'h','e','l','l','o'};
stack <char> st;
for (int i = 0 ; i<sizeof(arr);i++){
	st.push(arr[i]);
	}
int i= 0;	
while (!st.empty()){
	arr[i]=st.top();
	i++;
	st.pop();
}	
for (int i = 0 ; i<sizeof(arr);i++){
	cout<<(arr[i]);
	}	
}
