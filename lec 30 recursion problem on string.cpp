#include <iostream >
using namespace std ;
bool palindromeNumber(int num ,int*temp){
	if(num>=0 and num <= 9){
		int last= *temp%10;
		*temp/=10;
		return num==last;
	}
	bool result = ((num%10==(*temp)/10) and palindromeNumber(num/=10,temp));
	*temp/=10;
	return result;
}
string removeElement(string s , char c , int idx){
	if (idx==s.size()) return "";
	string result ="";
	if (s[idx]!=c) result+=s[idx]; 
	
	return result+removeElement(s,c,idx+1);
	
} 
int main (){
	string s = "adhdodaakdkdoaakkfjdfk";
	cout <<removeElement(s,'a',0)<<endl;
	
	cout <<((1<2) and (1<3))<<endl; 
//	checking palindrome number without converting into string 

	int num = 12621;
	int num2 = num;
	int *temp = &num2;
	cout <<palindromeNumber(num,temp);

	
	
	
	
	
}
