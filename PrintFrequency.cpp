#include <iostream>
using namespace std;

int main() {
    string s="a2b2";
    int n=s.size()/2;
    int arr[n];   

    int j=0;
    for(int i=1;i<s.size();i+=2)
    {
        int k=s[i]-48;
        arr[j++]=k;
    }

    int z=0;
    for(int i=0;i<s.size();i+=2){
        for(int j=0;j<arr[z];j++)
        {
            cout<<s[i];
        }
        z++;
    }
    return 0;
}