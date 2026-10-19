#include<iostream>
using namespace std;
// m2
int hcf(int a,int b){
    if(a==0) return b;
    return hcf(b%a,a);
}

int main(){
    int a,b;
    cin>>a>>b;
    // M1
    // for(int i =min(a,b);i>=1;i--){
    //     if(a%i==0 && b%i==0) {
    //         cout<<i<<" ";
    //         break;
    //     }    
    // }
    cout<<hcf(a,b);
}