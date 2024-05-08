#include<iostream>
int  main(){
    int a[5]={3,2,1,5,2};
    int largest=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    std::cout<<"largest:"<<largest<<"\n";
    int slargest=-1;//INT_MIN;
    for(int i=0;i<5;i++){
        if(a[i]>slargest && a[i]!=largest){
            slargest=a[i];
        }
    } 
    std::cout<<"slargest:"<<slargest;  
}//complexity-->O(2N)better code