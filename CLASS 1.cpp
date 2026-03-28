#include <iostream> 
class  rectangle {
    public :
    int largeur ;
    int longeur ;
    int lair (){
        return longeur * largeur ;
    }
    void affich() {
        std::cout<<"lair = "<<  lair()  <<  longeur <<" X "<< largeur <<std::endl;
    }
};
int main (){
    rectangle r;
    r.longeur=20;
    r.largeur=40;
    r.affich() ; 
    return 0 ;
}