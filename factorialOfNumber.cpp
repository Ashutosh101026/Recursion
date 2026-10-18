#include<iostream>
using namespace std;

int printFactorial(int n){
    if(n==0 || n==1) return 1;
    int ans=n * printFactorial(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<printFactorial(n);
}