#include <iostream>
#include <vector>
using namespace std;
int main (){
	
//	#VECTOR= Dynamic array (we can resize the array),contigous memory allocation
/*
//declaration 
vector <int> v;
vector <int> vec(5);

cout <<sizeof(v)<<endl;
cout <<sizeof(vec)<<endl;


//v.size - give length of vector

int a = v.size();   //output 0
int b = vec.size();    //output 5
cout<<a<<endl<<b;

//v.resize(size)- use to change the size of vector

v.resize(100);
cout<<endl<<v.size()<<endl;


//v.capacity()= capaxcity >= size
//capacity changes with the change of size
//capacity increase in 2 power if we add indivially a element but unknownly if we reize

cout <<v.capacity()<<endl;

//v.begin()- use to find position of first element in vector

vector <int> v1;
v1.push_back(45);
cout<<v1.size();

v1.push_back(100);

//////////////////////////#methods to add element in vector 

//method 1 - here size giving is not necessary
//
//vector <int> vec1;       // size giving is optional
//
//for (int i = 0 ; i<5;i++){
//	int element ;
//	cin>>element;
//	vec1.push_back(element);
//}


//method 2- here size giving is important
vector <int> vec2(5);   //size giving is necessary

for (int i= 0 ; i<5;i++){
	cin>>vec2[i];
}

vec2.pop_back();
vec2.erase(vec2.begin());
vec2.clear();


/////////////////////////////////////Method to print vector 
//method 1 - using for loop

for (int i = 0; i<vec2.size();i++){
	cout<<vec2[i]<<" ";
}


//method 2- using for each loop

//for (int e:vec2){
//	cout<<e;
//}


//v.push_back()- this is use to insert element in last of vector
//v.begin()- this give the position of first element of vector
//v.end()- this give the position of last element of vector
//v.insert(positon,element)- to add element at specific position in vector
//v.pop_back ()- to delete element form back
//v.erase(position)- to delete element at specific position
//v.clear()- to delete all element form vector

*/
vector <int > vx;
vx.push_back(1);
vx.push_back(2);
vx.push_back(3);
vx.push_back(4);
vx.push_back(5);
vx.push_back(6);
vx.erase(vx.begin()+1);
for (int i= 0; i < vx.size(); i ++){
	cout<<vx[i];
}

}
