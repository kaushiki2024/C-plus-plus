#include<iostream>
class Person{
    protected:
    std::string name;
    public:
    void introduce(){
        std::cout<<"Hello my name is:"<<name<<std::endl;
    }
};

class Employee:public Person{
      protected:
      int salary;
      public:
      void monthly_salary(){
        std::cout<<"My monthly salary is:"<<salary<<"\n";
      }
};

class Manager: public Employee{
    public:
    std::string department;
    Manager(std::string name,int salary,std::string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    };
    void work(){
        std::cout<<"I am leading the department-> "<<department<<std::endl;
    }

};

int main(){
    Manager A1("kaushiki",10000000,"SDE");
    A1.monthly_salary();
    A1.introduce();
    A1.work();

}

