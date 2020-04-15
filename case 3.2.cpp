#include<iostream>
#include<stdlib.h>
using namespace std;


    signed x; 
    unsigned y;
     int  z = -1; 
     unsigned short c;	
	signed short d;		
    
    

int main(int argc,char *argv[])
{
	// declaring varible signed short
	
    if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{		
		 cout << "The size of x is " << sizeof(x) <<endl; 
		 cout << "The size of y is " << sizeof(y) <<endl; 
		 cout << " unsigned short = " << c << endl;
		cout << " signed short = " << d << endl;
		 cout << "z is "<< z  << endl; 
		 
		return 0;
	} 
}