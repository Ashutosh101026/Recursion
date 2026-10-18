#include<iostream>
using namespace std;
int n;
void print(int x){
    if(x>n) return;
    cout<<x<<endl;
    print(x+1);
}
int main(){
    cin>>n;
    print(1);
}
