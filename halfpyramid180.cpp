/* half pyramid after 180 degree rotation
   *
  **
 ***
****
*/
 #include<iostream>
 using namespace std;

 int main()
 {
    int i, j;
    for (i = 0; i <5; i++)
    {
        for(j=5; j>i-1; j--)
        {
           cout<<" ";
        }
        for(int k=0; k<i; k++)
        {
             cout<<"*";
        }
        cout<<endl;
    }
     return 0;
 }