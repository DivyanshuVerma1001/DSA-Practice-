#include<iostream>
using namespace std;
class a{
	char c;  
	int a ;
	char b;
//	char c;
//	char d ;
//	char e;
//	char f;	
};

class customer{
	public:
	string name ; 
	int acc_num;
	int balance ;
	
	customer (){
		cout <<"hello world"<<endl;
		cout<<"constructor is called"<<endl;
	}
	customer(string a , int b , int c){   //parameterized constructor 
		name = a ;
		acc_num = b;
		balance = c;
	}
	
	
};



class customer1{
	public:
	string name ; 
	int acc_num;
	int balance ;
	
	
	customer1(){
		name = "rahul";
		acc_num=1001;
		balance = 9999;
		
	}

	customer1(string name , int acc_num , int balance){   //parameterized constructor 
		this->name = name  ;
		this->acc_num = acc_num;
		this->balance = balance;
	}
	

	
};
class customer2 {
	string name ;
	int acc_num;
	int balance;
	public:
	customer2 (string a , int b){
		name = a;
		acc_num= b;
	}
	
	//inline constructor 
	inline customer2 (string a , int b, int c):name (a),acc_num(b), balance(c){
	}
	
	void display (){
		cout <<name <<endl << acc_num<<endl<<balance<<endl;
	}
};


int main(){
	a obj;
	cout<<sizeof(a)<<endl;	
	
	customer rahul;
	customer rohan ("rohan", 100,5255);
	customer1 rohit ("rohit",656,577);
	cout<<rohit.name <<endl << rohit.acc_num<<endl <<rohit.balance<<endl;
	customer1 a;
	cout<<a.name <<endl << a.acc_num<<endl <<a.balance<<endl;
	
	
//	customer2 a;   give error because no default constructor is present 
	
	customer2 x("ankit",445);

	customer2 y ("divyanhu ",444,4444);
	y.display();
	x.display();   //balance has garbage value



	
}
