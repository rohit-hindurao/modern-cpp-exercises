#include<iostream>
using namespace std;

int getvaluefromuser(){
    cout<<"Enter an integer value ";
    int input{};
    cin >> input;
    return input;
}

void printdouble(int value){
    cout << value <<" double is "<< value * 2 << '\n';
}

int main(){
    printdouble(getvaluefromuser());
}