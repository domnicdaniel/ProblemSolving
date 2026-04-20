#include <iostream>
using namespace std;

int main() 
{
    int n=7;
    int first=0,second=1;
    int third=first+second;
    cout<<first<<" "<<second<<" ";
    for(int i=0;i<n-2;i++)
    {
        cout<<third<<" ";
        first=second;
        second=third;
        third=first+second;
    }
    return 0;
}