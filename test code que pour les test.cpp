#include<iostream>
int main (){
    int a {10};
    int* ptr_a = &a;
    std::cout<<"la valeur de a "<<*ptr_a<<"\n";
    *ptr_a = 21 ;
    std::cout<<"la valeur de a "<<a<<"\n";
    return 0 ; 
}