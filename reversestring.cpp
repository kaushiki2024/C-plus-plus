//input a string of even length and reverse the first half of the string
#include<iostream>
int main(){
    std::string s="kaushiki";
    std::cout<<s<<"\n";
    int n =s.length();
    int i=0;
    int j=n/2-1;
    while(i<j){
        char temp =s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;

    }
    std::cout<<s<<"\n";

    //second method
    //reverse(s.begin(),s.begin()+n/2);

}