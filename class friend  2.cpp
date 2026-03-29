#include <iostream>
#include <cassert>
class nombre
{
private:
    int value;

public:
    nombre(int v) : value(v)
    {
        assert(value >= 0)
    ;}
    friend int addition(nombre a, nombre b);
};
int  addition (nombre a , nombre b){
    return a.value + b.value ;

}

int main(){
    nombre n1(100);
    nombre n2(200);
    std::cout<<addition(n1,n2)<<"\n";
    return 0 ;
}