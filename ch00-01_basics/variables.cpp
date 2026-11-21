#include<iostream>
using namespace std;

int a = 5, b = 6;          // copy-initialization
int c ( 7 ), d ( 8 );      // direct-initialization
int e { 9 }, f { 10 };     // direct-list-initialization
int i {}, j {};            // value-initialization

int main(){
    int width (5); //defined an integer variable called width

    cout<< width<<"\n"; //prints width

    width = 9; //changing the value stored in the variable
    
    cout<< width << "\n"; //prints the new width value

    // Here's some math/physics values that we copy-pasted from elsewhere
    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused


    std::cout << pi << '\n';  // pi is used
    std::cout << phi << '\n'; // phi is used

    return 0;
}
