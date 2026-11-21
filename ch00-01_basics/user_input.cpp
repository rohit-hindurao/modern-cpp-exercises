#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a number: "; //ask user for a input.

    int x {}; //define a variable called x to hold user input.
    cin >> x; //get the numer from keyboard and save it in the variable x.

    cout<< "The number you entered is "<< x <<'\n';

    cout<<"Enter two numbers separated by space "; 
    int a{}; // variable a to hold first user input
    int b{}; // variable b to hold second user input 
    cin >> a >> b; //get two numbers and store in variable x and y respectively.
    cout<<"You entered numbers "<< a << " and "<< b <<'\n';
    return 0;

}