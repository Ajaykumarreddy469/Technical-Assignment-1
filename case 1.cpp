#include <iostream> 
#include<string.h>
#include<stdlib.h>
#include<cctype>

#include<typeinfo>
#include<bits/stdc++.h>
using namespace std; 
  
int main(int argj, char** argk) 
{ 
  
    char ch;//Declaring character datatype
    int c,i;//Declaring integer datatype
    double d;//Declaring double datatype
   if(argj == 2 && strcmp(argk[1], "--help")==0)
   
    {cout<<"The main purpose of this program is to calculate the datatype,value and sizeof the value"<<endl;
            cout<<"user can give the input in integer,float/double,char and string"<<endl;

    }

   else{
    
    cout << "You have entered " << argj 
         << " arguments:" << "\n";
         
  for(i=1;i<argj;i++)//for loop to increase the i value with respect to argument counter
  {

        if(argk[i]>=0)//if condition for checking whether the value greater than zero or not
	{
		c=atoi(argk[i]);//atol function accepts a string and convert to integer
		d=atof(argk[i]);//atof function accepts a string and convert to float
		cout<<"TYPE"<<"    "<<"value"<<"  "<<"size"<<endl;
		if(c==d) //if condition for comparing the values
		{
                 cout<<"Integer"<<"   "<<c<<"   "<<sizeof(int)<<endl;
		}
		else
		{
		cout<<"Double"<<"   "<<d<<"    "<<sizeof(double)<<endl;
		}
	}
	else
	{
	 
// cout<<argk[i].size()<<endl;
ch=atoi(argk[i]);
          if((ch==1))
	   {
	   cout<<sizeof(char);
	   }
	   else
	   {
	   cout<<sizeof(wchar_t);
	   }
	}
  }
}

       

    return 0; 
}