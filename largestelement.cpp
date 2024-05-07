#include<iostream>
int  main(){
    int a[5]={3,2,1,5,2};
    int largest=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    std::cout<<largest;
}//time complexity O(n)
//o(5*3)