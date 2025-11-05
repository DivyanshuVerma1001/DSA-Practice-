#include <iostream>
using namespace std;
class human1 
{
	protected:
	string name ;
	int age ;
	
	public :
	void fun(){
		cout<<"i am working"<<endl;
	}
	human1(){
		cout <<"human consturctor "<<endl;
	}
};

class student1:public human1 
 {
	int fees , roll_no;
	public:
//	student1(string name, int age , int fees, int roll_no){
//		this->name = name ;
//		this ->age = age ;
//		this ->fees = fees;
//		this ->roll_no= roll_no;
//	}
	void display (){
		cout <<name<<endl<<age<<endl<<fees<<endl<<roll_no<<endl;
	}
	
	student1(){
		
		cout<<"student constructor"; 
	}

};
class human2 
{
	protected:
	string name ;
	int age ;
	
	public :
	human2(string name , int age){
		this ->name= name ;
		this-> age = age ;
	}
};

class student2:public human2 
 {
	int fees , roll_no;
	public:
	student2(string name, int age , int fees, int roll_no):human2(name,age) {
		this->name = name ;
		this ->age = age ;
		this ->fees = fees;
		this ->roll_no= roll_no;
	}
	void display (){
		cout <<name<<endl<<age<<endl<<fees<<endl<<roll_no<<endl;
	}
	

};
///////////////////////MULTILEVEL INHERITANCE ////////////////////////////
class person{
	protected:
	string name ;
	
	public :
	void fun(){
		cout <<"hello my name is "<<name <<endl;
	}
};
	
class employee:public person
{
	protected :
	int salary;
	
	public :
	void fun(){
		cout<<"monthly salary is "<<salary<<endl;
	}
};
class manager : public employee {
	protected :
	string department ;
		
	public :
	void fun (){
		cout <<"department is"<<department <<endl;
	}
};
	
///////////////////////////////MULTIPLE INHERITANCE //////////////////////////////
class youtuber {
	public :
	int subscriber ;
	void yt(){
		cout<<"no of subcriber "<<subscriber<<endl;
	}
};	

class engineer {
	public :
	string branch ;
	void b(){
		cout<< "branch is "<<branch <<endl;
	}
};

class codeteacher :public engineer , public youtuber {
	public :
	string name ;
	codeteacher (string name , string branch , int subscriber){
		this ->name = name ;
		this -> branch = branch ;
		this -> subscriber= subscriber;
	}
	
	void display (){
		cout <<"my name is "<<name <<endl;
		yt();
		b();
	}
	
};

/////////////////////HIERARARCHIACAL INHERITANCE //////////////////////////
class human {
	public :
	string name ;
	int age ;
	
};

class teacher : public human {
	public :
	int salary;
	
};

class student : public human {
	public :
	int marks ;
};

//////////////////////////HYBIRD INHERITANCE ////////////////
class student0 {
	public :
	void print (){
		cout <<"I am student "<<endl;
		
	}
};


class male {
	public :
	void maleprint (){
		cout << " I am male "<<endl;
	}
};

class female {
	public :
		void femaleprint (){
			cout <<" I am female "<<endl;
		}
};

class boy : public student0,public male {
	public :
	void boyprint (){
		cout << "I am a boy"<<endl;
	}
};
class girl : public student0, public female  {
	public :
	void girlprint (){
		cout <<"I am a girl"<<endl;
	}
};

int main (){
  
//  student1 a1("rahul",18,5500,11);
//  a1.fun();
//  a1.display();

//student1 a1;
//student2 a2("rahul",18,5500,11);
//a2.display();

//
//manager m;
//m.fun();
//m.fun();
//m.fun();
//m.fun();

codeteacher ct("rohit","cse",500000);
ct.display();

}
