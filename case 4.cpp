#include <iostream>
using namespace std;

class base
{
 	private:
        int s;

 	protected:
 	    int p;

 	public:
 	    int d;

 	base() //constructor to initialize data members
 	{
 		cout<<"Enter  value of s :- "<<endl;
 		cin>>s;
 		
 		cout<<"Enter  value of p :- "<<endl;
 		cin>>p;
 		
 		cout<<"Enter  value of d :- "<<endl;
 		cin>>d;
 		
 	  
 	}
};

class derived: public base
{

 	public:
 	    void showdata()
 	    {
 	       cout << "s is not accessible" << endl;
               cout << "value of p is " << p << endl;
               cout << "value of d is " << d << endl;
 	    }
};
int main(int argc,char *argv[])
{
	if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{
		 derived a; //creating object to the class a
     a.showdata();
    
     return 0;
     } 
	}