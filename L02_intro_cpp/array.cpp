#include<iostream>
#include<array>

int main(){
    std::array<float,3> arr = {1.00f,2.0f,3.0f};
    std::cout<<arr[0]<<'\n';
    std::cout<<arr.size()<<'\n';
    std::cout<<arr.front()<<"\n"; // arr.front() == arr[0]
    std::cout<<arr.back()<<'\n'; // arr.back() == [arr.size() - 1]
    return 0; 
}