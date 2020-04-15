#include<iostream>
#include<stdlib.h>
using namespace std;


int m=80; 


void acces() 
{ 
   int m=90;
	cout<<"local value :- "<<m<<endl; 		
} 


int main(int argh,char *argj[])
{
    if(argh>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"			or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{	
	 
	   	acces(); 			 

		cout<<"Global value:- "<<m;  
	
		
	} 
}