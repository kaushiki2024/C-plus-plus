#include<iostream>
int swap(int *x,int *y){//int& x,int& y
 
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
 
}

   int main(){
   int x,y;
    std::cin>>x;
    std::cin>>y;
    swap(&x,&y);
    std::cout<<x<<"\n";
    std::cout<<y;
}


