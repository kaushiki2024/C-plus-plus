#include<iostream>
class Student{
    public:
    int age;
    int roll_number;
};
int main(){
    Student S1;
    S1.roll_number= 10;
    S1.age =54;
    std::cout<<S1.age<<"\n";
    std::cout<<S1.roll_number;
}