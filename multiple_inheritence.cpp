#include<iostream>
class Engineer{
    public:
    std::string specialization;
    Engineer(){
        std::cout<<"hello Engineer"<<std::endl;
    }
    void work(){
        std::cout<<"I have specialization in "<<specialization<<std::endl;
    }
};

class Youtuber{
      public:
      int subscribers;
      Youtuber(){
        std::cout<<"HELLO YOUTUBER"<<std::endl;
      }
      void contentcreator(){
        std::cout<<"I have a subscriber base of "<<subscribers<<std::endl;
      }

};

class codeteacher:public Engineer ,public Youtuber{
    public:
    std::string name;
    codeteacher(){
        std::cout<<"HELLO CODETEACHER"<<std::endl;
    }
   codeteacher(std::string name,std::string specialization,int subscribers){
      this->name=name;
      this->specialization=specialization;
      this->subscribers=subscribers;
   }
   void showcase(){
    std::cout<<"my name is "<<name<<std::endl;
    work();
    contentcreator();
   }
};
int main(){
    codeteacher A1;//"kaushiki","Cse",490000);
   // A1.showcase();
}