#include<iostream>
using namespace std;

int getvaluefromuser(){
    cout<<"Enter an integer ";
    int input{};
    cin>>input;
    return input;
}

int main(){
    int x{getvaluefromuser()};
    int y{getvaluefromuser()};

    cout<< x << " + " << y << " = " << x + y <<'\n';
    return 0;
}