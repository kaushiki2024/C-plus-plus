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
    void display(){
        std::cout<<"\n"<<name<<"\n";
        std::cout<<balance<<"\n";
        std::cout<<account_number<<"\n";
    }
//Copy constructor
    Customer(Customer &B){
        name= B.name;
        account_number  = B.account_number;
        balance=B.balance;
    }


};

int main(){
    Customer AI ("kaushiki",875667,892387388);
    Customer A2;
    Customer A3(AI);
    A3.display();
    Customer A4(AI);
    A4.display();
    Customer A5;
    A5=A3;
    A5.display();
}