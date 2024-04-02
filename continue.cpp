#include<iostream>
int main(){
    for(int i=1;i<=20;i++){
        if(i==3||i==8){
            continue;
        }
            std::cout<<i<<" ";
        
    }
}