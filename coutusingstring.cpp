//return the total number of digits in a number without using any loop
#include<iostream>
int main(){
    int x=57225;
    std::string s=std::to_string(x);
    std::cout<<s.length();
    std::string y="12461";
    int z=stoi(y);
    std::cout<<z;
}