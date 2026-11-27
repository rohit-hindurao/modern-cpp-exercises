#include<iostream>
#include<vector>


int main(){
    std::vector<std::string> vec;
    const int KiterNum = 100;
    //always call reserve when you know the size
    vec.reserve(KiterNum);
    for (int i = 0; i <KiterNum; i++){
        vec.emplace_back("hello");
    }
    std::cout<< vec[1] <<std::endl;

    std::vector<int> vect_int = {1,2}; 
    vect_int.push_back(3.0);
    std::cout<< vect_int.front() << " " << vect_int.back() << std::endl;
    return 0;
}