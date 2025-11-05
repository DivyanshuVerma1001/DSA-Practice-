#include <iostream>
using namespace std;

////////////////////////////////FUNCTION OVERLOADING///////////////
class area {
	int calculatearea(int r){
		return 3.14*r*r;
	}
	int calculatearea (int l , int b){
		return l*b;
	}
};


///////////////////////////////////OPERATOR OVERLOADING////////////////


class complex {
	
	int real , img;
	public :
	complex(int real , int img ){
		this->real=real;
		this ->img = img ;
	}
	complex (){
		
	}
	
	void diplay (){
		cout<<real<<" + i"<<img<<endl;
	}
	
	complex operator +(complex & c){
		complex ans;
		ans.real= real +c.real;
		ans.img= +c.img;
		return ans ;
		
	}
};

int main (){
	complex c1(3,4);
	complex c2(4,6);
	complex c3= c1 + c2;
	c3.diplay();
	
}
