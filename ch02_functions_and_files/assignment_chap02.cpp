#include<iostream>
using namespace std;

int readNumber(){
    cout<<"Enter a single integer ";
    int input{};
    cin>>input;
    return input;
}

void writeAnswer(int x){
    cout<<"The addition is "<< x <<'\n';
}

int main(){
    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x+y);
    return 0;
}