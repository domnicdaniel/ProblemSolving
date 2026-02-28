#include <iostream>
using namespace std;

int main() {
    int n=5;
    int f=0;
    int arr[n]={1,3,0,0,2};
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0){
            arr[f++]=arr[i];
        }
    }
    for(int j=f;j<n;j++){
        arr[j]=0;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}