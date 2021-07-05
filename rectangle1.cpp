#include<iostream>
using namespace std;

int main()
{
    int i,j,row, column;
     int count=1;
    cout<<"enter the row and column number respectively";
    cin>>row>>column;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {   
           cout<<count<<" ";
           if(i<10 || j<10)
           cout<<"  ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}