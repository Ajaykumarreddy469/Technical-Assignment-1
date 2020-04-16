#include<iostream>
using namespace std;

class A 
{
    private:
            int s;
    
    public :
    A()  { 
        
        cout<<"Enter the value of s :- "<<endl;   
        cin>>s;
        
         }
    
    friend void showA(A&);   
};

void showA(A& x)
{
    cout<<"The private variable x value is :- "<<x.s<<endl;   
}

int main()
{
    A s;     // creating object to the class
    showA(s);

return 0;
}