#include<iostream>
#include<string>

using namespace std;

int main(){
    string hello = "Hello";
    cout<<"enter your name: ";
    string name = "";
    cin>>name;
    cout<< hello + ", " + name + "!"<<'\n';
    return 0;
} 