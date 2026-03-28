#include <iostream>
int main (){
    int a , b ;
    std::cout<<"entrez le numero a " ;
    std::cin>>a ;
    for (b=1 ; b<=10 ; b++ ) {
    std::cout<<a<<" X "<<b<<" = "<<a*b<<std::endl;
    }
    return 0 ;
}