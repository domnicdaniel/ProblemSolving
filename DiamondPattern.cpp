#include <iostream>
using namespace std;

int main() 
{
    int n,k=1;
    cout<<"Enter Range :";
    cin>>n;
    for(int i=1;i<=(n/2)+1;i++)
    {
        for(int j=1;j<=(n/2)-i+1;j++)
        {
           cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
           cout<<"* ";
        }
        cout<<"\n";
    }
    int space=1;
    for(int i=1;i<=(n/2);i++)
    {
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(n/2)-i+1;j++)
        {
           cout<<"* ";
        }
        cout<<"\n";
        space++;
    }
    return 0;
}