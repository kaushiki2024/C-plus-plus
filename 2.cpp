#include<iostream>
class Customer{
    public:
    std::string name;
    int balance;
    int account_number;
    int *roi;

    Customer(){
        roi= new int[100];
        std::cout<<"This is default constructor";

    }
    Customer(std::string name,int balance,int account_number){//parameterised constructor
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
        std::cout<<name<<"\n";
        std::cout<<balance<<"\n";
        std::cout<<account_number<<"\n";
    }
 


};

int main(){
    Customer AI ("kaushiki",875667,892387388);
    Customer A2;
}