#include<iostream>
using namespace std;

void doB(){
    cout<<"In doB()\n";
}
void doA(){
    cout<<"In doA()\n";
    doB();
}

int main(){
    cout<<"Starting main()\n";

    doA();
    doB();

    cout<<"ending main()\n";
    return 0;
}