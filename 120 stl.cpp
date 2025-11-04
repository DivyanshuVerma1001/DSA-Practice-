#include <iostream>
#include<utility>
#include <list>
#include <set>
#include<unordered_set>
#include <map>
using namespace std;
class person{
	public:
	string name;
	int age;
	bool operator <(const person &other) const{
		return age>other.age;
	}
};
int main(){
	/*
	pair<string , int> p;
	//method 1
	p.first="Divyanshu";
	p.second= 20;
	cout<<p.first<<endl <<p.second<<endl;
	//method 2
	p=make_pair("rohit",30);
	cout<<p.first<<endl<<p.second<<endl;
	cout<<p.
	// pairing 3 element 
	//name , age , weight
	pair <string ,pair<int, int> >i;
	i=make_pair("Divyanshu",make_pair(20,71));
	cout<<i.first<<endl;
	cout<<i.second.first<<endl<<i.second.second;
//	auto x = "hello";
	*/
	/*
	list<int> l;
	l.push_back(10);
	cout<<l.front()<<endl<<l.back()<<endl;
	l.push_front(20);
	cout<<l.front()<<endl;
	printf("%d",l.front());
	l.pop_front();
	l.pop_back();
	l.pop_back();
	l.pop_back();
	cout<<endl<<endl<<l.front()<<l.back();
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	l.push_back(50);
	l.push_back(60);
	l.push_back(70);
	l.push_back(80);
	
	//iterating list
	for (list<int> ::iterator it=l.begin(); it!=l.end();it++){
		cout<<*it<<endl;
	}
	//iterating reverse order
//	for(list<int>::iterator it =l.rbegin();it!=l.rend();it--){
//		cout<<*it<<endl;
//	}
*/
/*
	set<int> s;
	s.insert(1);
	s.insert(8);
	s.insert(7);
	s.insert(9);
	s.insert(2);
	s.insert(3);
	s.insert(6);
	s.insert(1);
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<"  ";
	}
	cout<<endl;
	//for sorting in decending order
	set<int,greater<int> >s1;
	s1.insert(1);
	s1.insert(8);
	s1.insert(7);
	s1.insert(9);
	s1.insert(2);
	s1.insert(3);
	s1.insert(6);
	s1.insert(1);
	for(set<int,greater<int> > ::iterator it = s1.begin();it!=s1.end();it++){
		cout<<*it<<"  ";
	}
	cout<<endl;
	cout<<*(s.find(1));
	cout<<endl;
	//to check if element is present 
	if (s.find(1)!=s.end()){
		cout<<"present"<<endl;
	}	
	else {
		cout<<"not present"<<endl;
	}
	set<person> x;
	person p1;
	person p2;
	person p3;
	p1.name="Mohit";
	p1.age=20;
	p2.name="Rohit";
	p2.age=25;
	p3.name= "Sohit";
	p3.age= 10;
	x.insert(p1);
	x.insert(p2);
	x.insert(p3);
	
	for (set<person>::iterator it= x.begin();it!=x.end();it++){
		cout<<(*it).name<<" "<<(*it).age<<endl;
	}
	multiset<int> a;
	a.insert(6);
	
	
	unordered_set<int> s;
*/		
	map<int, int> m;	
	m.insert(make_pair(10,120));	
	m.insert(make_pair(20,400));	
	m.insert(make_pair(40,200));	
	m.insert(make_pair(50,600));	
	m.insert(make_pair(20,456));	//this will not add or change anything 
	m.insert(make_pair(70,100));	
	m.insert(make_pair(80,400));	
	for (auto it= m.begin();it!=m.end();it++){
		cout<<(*it).first<<"  "<<(*it).second<<endl;
	}
	
	m[100]=100;
	m[20]=99;
	for (auto it= m.begin();it!=m.end();it++){
		cout<<(*it).first<<"  "<<(*it).second<<endl;
	}
	
	
	
	
	
}
