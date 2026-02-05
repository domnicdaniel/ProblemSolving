#include <iostream>
using namespace std;

int main() {
    int n=4;
    int flag=1;
    int arr[n]={2,7,11,13};
    int target=10;
    int left=0,right=n-1;
    while(left<right){
        if(arr[left]+arr[right]==target){
            cout<<"found";
            flag=0;
            break;
        }
        else if(arr[left]+arr[right]>target){
            right--;
        }
        else{
            left++;
        }
    }
    if(flag){
        cout<<"Not found";
    }
    return 0;
}