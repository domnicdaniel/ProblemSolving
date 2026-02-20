#include <iostream>
using namespace std;
int addi(int a){
    if(a==0){
        return 0;
    }
    return a+addi(a-1);
}
int main() {
    for(int i=1;i<=5;i++){
        cout<<i<<"\n";
      cout<<"add"<<i<<": "<<addi(i)<<"\n";
    }
    return 0;
}