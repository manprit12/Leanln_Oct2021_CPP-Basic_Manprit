#include <iostream>  
using namespace std; 

int main()  
{  
int n, reverse=0, remainder;    
cout<<"Enter the number to be reversed: ";    
cin>>n;    
  while(n!=0)    
  {    
     remainder=n%10;      
     reverse=reverse*10+remainder;    
     n/=10;    
  }    
 cout<<"Reversed Number is: "<<reverse<<endl;     
return 0;  
}
