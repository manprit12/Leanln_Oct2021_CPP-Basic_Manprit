#include<iostream>

using namespace std;
int main() 
{
   int i,n,sum=0;
   int arr[]={4,7,37,21,11,16};

   n=6;
   for(i=0;i<n;i++)
   {
      sum+=arr[i];
      cout<<sum<<"   ";
   }

   return 0;
}
