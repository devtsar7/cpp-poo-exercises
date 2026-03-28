#include <iostream>
int main (){
int age;
std::cout<<"entrez votre age";
std::cin>>age ;
if (age>=18)
{ std::cout<<"vous etes majeur"<<std::endl;

}else{
    std::cout<<"vous etes mineur"<<std::endl;
}
return 0.;
}