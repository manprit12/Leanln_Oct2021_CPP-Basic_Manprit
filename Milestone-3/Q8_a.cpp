#include <iostream>

using namespace std;
int main()
{
    int rows;
    char ch;
    cout << "Enter the number of rows" << endl;
    cin>>rows;
    cout << "Enter the symbol as you wish" << endl;
    cin>>ch;
    for(int i=rows; i>=1;  i--)
    {
            for(int j=i; j<=rows; j++)
            {
                cout<<" ";
            }
            for(int j=1; j<=(2*i-1); j++)
            {
                cout<<ch;  
            }
   cout<<"\n";
   }
    return 0;
}
