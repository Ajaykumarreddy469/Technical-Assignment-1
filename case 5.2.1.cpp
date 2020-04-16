#include <iostream> 
using namespace std; 
 
class Parent 
{ 
	public: 
	
	
	Parent()      // Parent class constructor 
	{ 
		cout << "Inside base class" << endl; 
	} 
	
	
	~Parent()  //Parent class destructor
	{ 
		cout << "Inside base class destructor" << endl; 
	} 
}; 


class Child : public Parent 
{ 
	public: 
	
	
	Child()         //Child class constructor 
	{ 
		cout << "Inside sub class" << endl; 
	} 
	
	
	~Child()    //Child class destructor
	{ 
		cout << "Inside sub class destructor " << endl; 
	} 
}; 


int main() { 
	
	
	Child ob;     // creating object to sub class 
	
	return 0; 
}