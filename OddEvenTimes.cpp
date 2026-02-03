#include <iostream>
using namespace std;
int printt(int a){
    int count=0;
    while(a!=0){
        if(a%2==0){
            a=a/2;
            count++;
        }else{
            a=a-1;
            count++;
        }
    }
    return count;
}
int main() {
    int a=8;
    cout<<printt(a);
    return 0;
}