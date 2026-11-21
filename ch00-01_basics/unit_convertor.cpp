#include<iostream>
using namespace std;

int main(){
    cout << "Enter a speed value to be converted into m/s ";
    int x {};
    cin>>x;

    cout<< "The speed of the bot is "<< x * 3.6 <<"\n";
    return 0;
}