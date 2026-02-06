#include <iostream>
using namespace std;

int main() 
{
    int n,k=1;
    cout<<"Enter Range :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
           cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
           cout<<j<<" ";
        }
        for(int j=1;j<i;j++)
        {
           cout<<j+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}