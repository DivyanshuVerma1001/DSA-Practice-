#include<iostream>
using namespace std;
class fruit{
public:	
	string name ;
	string colour;
	string taste ; 
	
};
class rectangle{
public:
	int l ;
	int b;
	rectangle(){   //default constructor 
		l=0;
		b=0;
	}
	rectangle (int x, int y){  //paramatrized constructor 
		l = x;
		b= y;
	}
	rectangle (rectangle & r){  //copy constructor 
		l= r.l;
		b= r.b;
	}
	
	~rectangle (){         //destructor
		cout<<"Desturctor is called"<<endl;
	}
	
};

class abc{
	int x;
public :
	void set(int n){
		x = n;
	}
	
	int get(){
		return x;
	}
};

class parent {

	public :
		int x;
	
	protected :
		int y;
		
	private :
		int z;
};

class child1 : public parent {
	// x will remain public
	// y will remain protected 
	// z will be inaccessible 
};
class child2: private parent {
	// x will be private
	// y will be private
	// z will be inaccessible 
};
class child3 : protected parent{
	// x will be protected 
	// y will be protected
	// z will be inaccessible 
	
};

class p {
	public :
		p (){
			cout<< " we are in parent class"<<endl;
		}
};
class c : public p {
	public :
		c (){
			cout << " we are in child class"<<endl;
		}
};

int main(){

fruit apple ;
apple.name= "apple";
apple.colour= "Red";
apple.taste="noice";
cout<<apple.name<<" "<<apple.colour<<" "<<apple.taste<<endl;


fruit *mango= new fruit();
mango->name="mango";
mango->colour="yellow";
mango->taste="yummy";

cout<<mango->name<<"  "<<mango->colour<<"  "<<mango->taste<<endl;

rectangle r1;
cout<<r1.l<<" "<<r1.b<<endl;

rectangle r2(5,2);
cout<< r2.l<<" "<<r2.b<<endl;
rectangle r3 = r2;
cout<< r3.l<<" "<<r3.b<<endl; 


abc e;
e.set(5);
cout<<e.get()<<endl;

parent a ;
a.x=10;
cout<<a.x<<endl;
//a.y=13;   y is not accessible as it is protected 
//a.z= 5;  z is not accessible as it is private

c child;


}























