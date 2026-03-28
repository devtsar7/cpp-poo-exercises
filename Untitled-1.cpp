#include <iostream>
int main () {
    int t[10] , a , s ;
    float m ;
   long long  p  ;
    for (a=0 ; a<10 ; a++) {
    std::cout<<"entre les valeurs de tableaux :"<<a+1<<std::endl;
    std::cin>>t[a] ;
    }
    s=0 ;
    p=1 ;
    for(a=0 ; a<10 ; a++){
        s+=t[a] ;
        
    
    }
    p*=t[a] ;
       m = s / 10.0 ;
    std::cout<<"le produit est "<<p<<std::endl;
    std::cout<<"la somme est "<<s<<std::endl;
    std::cout<<"la moyenne est "<<m<<std::endl;
    return 0 ;
}
