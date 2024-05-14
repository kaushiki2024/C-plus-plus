#include<iostream>
class customer{
    std::string name;
    int *data;

    public:
    customer(std::string name){
        this->name=name;
        std::cout<<"constructor is "<<name<<std::endl;

    }
    //destructor is called once
   ~customer(){
     //destructor follows reverse order
     std::cout<<"destructor is "<<name<<"\n";
    }

};
 int main(){
    customer A1("1"),A2("2"),A3("3");
 }