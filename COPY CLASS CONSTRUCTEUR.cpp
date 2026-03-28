#include<iostream>
#include<cassert>
#include<string>
class voiture{
    private :
    std::string marque ;
    double prix ;
    public :
    voiture(std::string m , double p):marque(m),prix(p){
        assert(prix>0)
    ;}
    voiture(const voiture& other) : marque(other.marque), prix(other.prix){
        std::cout<<"constructeur copy"<<"\n";
    ;}
    void afficher(){
        std::cout<<"la marque de la voitures est "<< marque <<"  et le prix de la voiture est "<< prix << "\n";

    }

};
int main (){
    voiture pro("audi",20000);
    voiture pro2 = pro ;
    pro.afficher();
     pro2.afficher();
    return 0 ;
}