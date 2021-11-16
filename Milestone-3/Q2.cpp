#include<iostream>
 
using namespace std;
int main() 
{
   int i,n,sum=0;
   int arr[]={1,2,3,4,5,6,7,8,9,10};
   n=10;
   for(i=1;i<n;i++)
   {
      sum=sum+arr[i];
   }
   cout<<"Sum of the elements of the array is ";
   cout<<sum;
   return 0;

}
