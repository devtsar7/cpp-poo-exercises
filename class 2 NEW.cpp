#include<iostream>
class nombre {
    private :
    int numero ;
    public :
    nombre (int n):numero(n){

    ;}
    void afficher(){
        std::cout<<"nombre: "<< numero<<"\n";
    }    

};
int main (){
    nombre nom(10);
    nom.afficher();
    return 0 ;
}