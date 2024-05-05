#include<iostream>
int main(){
    std:: string s="kaushiki";
    std::cout<<s<<"\n";
    s.pop_back();
    std::cout<<s<<"\n";
    s.push_back('i');
    s.append(" mishra");
    std::cout<<s;
    s.clear();
    std::cout<<s<<"\n"<<s.length();
}