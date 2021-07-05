#include<iostream>
using namespace std;

int main()
{
    int i,j,row,cols;
    cout<<"enter rows and cols";
    cin>>row>>cols;

    for (i=1; i<=row; i++)
    {
        // Print stars for each solid rows
        if (i==1 || i==row)
            for (j=1; j<=row; j++)
                cout << "*";
 
        // stars for hollow rows
        else
            for (j=1; j<=row; j++)
                if (j==1 || j==row)
                    cout << "*";
                else
                    cout << " ";
 
        // Move to the next line/row
        cout << "\n";
    }
    return 0;
}