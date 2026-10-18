#include<iostream>
using namespace std;

void param();
void aryan();

void kartik(){
    aryan();
    cout<<"kartik"<<endl;
    param();
}
void param(){
    aryan();
    cout<<"param"<<endl;
    aryan();
}

void aryan(){

    cout<<"aryan"<<endl;
}
int main(){
    kartik();
    param();
    aryan();
}
    