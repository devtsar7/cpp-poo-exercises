#include <iostream>

int main () { 
int nombre;
std::cout << "ecrire un nombre:";
std::cin >>nombre; 
if (nombre %2 == 0){

    std::cout<<nombre<<" pair "<< std::endl;
}
else { 
std::cout<<nombre<<" impair"<< std::endl;
}

return 0;
}