#include <algorithm>
#include <iostream> 
#include <vector>
int main () {
std::vector<int> v{1,2,6,8,7,6,35,-35}; 
if (std::any_of(v.cbegin(),v.cend(),[](int nombre)->bool {return nombre<0;})){

    std::cout<<"il ya au moins un nombre negatif"<<"\n";
}else {
    std::cout<<"tous les nombres sont positifs "<<"\n";
    
    
}
for (auto i : v) {
        std::cout<<i<<"\n";
    }
return 0 ;
}