#include<iostream>
#include<stdlib.h>
using namespace std;

//main function
int main(int argh,char *argj[])
{
    int Sum,Num; //declaring  variables
    if(argh==1) 
	{
		
		cout<<"Enter Input: ";
		cin>>Num; //read 'Num'
		Sum=0;
    	for(int z=1; z<=Num; z++)	//checks the  condition
        	Sum =Sum + (z*z);	
     	cout << "Output: " << Sum;
     	return 0;
	}
	else
	{	
		Num = atoi(argj[1]); //assigning the argument to 'n'
    	Sum=0;
    	for(int z=1; z<=Num; z++)	//checks the argument value
        	Sum =Sum + (z*z);
     	cout << "Output: " << Sum;
     	return 0;
	} 
}