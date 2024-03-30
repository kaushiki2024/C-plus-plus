//A seller has made proft ,loss ,or no profit no loss?
#include<iostream>
int main(){
    float c;
    float s;
    std::cout<<"enter the cost price of the item:";
    std::cin>>c;
    std::cout<<"enter the selling price of the item:";
    std::cin>>s;
    
    if(s>c){
        std::cout<<"profit is made"<<"\n"<<s-c<<"n";
        
    }
    else if(c>s){
        std::cout<<"loss is made"<<"\n"<<c-s<<"\n";          
    }
    else{
        std::cout<<"No proft no loss";
    }
    return 0;
}