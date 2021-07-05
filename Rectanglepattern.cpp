#include<iostream>
using namespace std;

int main()
{
    int i, j;
    cout<<"Enter the number of rows and column";
    cin>>i>>j;

    for(int x=0; x<i; x++)
    {
        for(int y=0; y<j; y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   
   return 0;
}
