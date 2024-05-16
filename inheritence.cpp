#include<iostream>
class human{
    public:
    std::string name;
    int age,weight;
};

class student:public human{
    int roll_number,fees;
};

int main(){
    student A;
    A.name="rohit";
    std::cout<<A.name;
}