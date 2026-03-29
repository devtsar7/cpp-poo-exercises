#include <iostream>
class nombre {
    private :
    int value ;
    public :
    nombre(int v):value(v){
    }
friend void afficher (nombre n);
};
void afficher (nombre n){
    std::cout<<n.value<<"\n";
}
int main (){
        nombre n1(100);
        afficher(n1);
        return 0 ;
    }