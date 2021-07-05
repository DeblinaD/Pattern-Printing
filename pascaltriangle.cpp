/* 
1(0C0)                       this pattern simply follows the the combination pattern
1(1C0) 1(1C1)
1(2C0) 2(2C1) 1(2C2)
1(3C0) 2(3C1) 3(3C2) 1(3C3) */

#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;
    for(int i=0; i<n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n;
    cout<<"enter the no. of rows";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    } 
}