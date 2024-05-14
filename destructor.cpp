#include<iostream>
class customer{
    std::string name;
    int *data;

    public:
    customer(){
        name="kaushiki";
        data =new int;
        *data=10;
        std::cout<<"constructor is callled"<<std::endl;

    }
    //destructor is called once
    ~customer(){
        delete data;
        std::cout<<"destructor is called";
    }

};
 int main(){
    customer A1;
 }