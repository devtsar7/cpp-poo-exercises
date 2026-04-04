#include<iostream>
 class point3d {
    private :
    int x , y ,z ;
    public :
    point3d (int a , int b , int c):x(a),y(b),z(c){}
    point3d operator+(const point3d &other)const{
        return point3d(x + other.x , y + other.y ,  z + other.z);
    };
    point3d& operator+=(const point3d &other){
        x += other.x ;
        y += other.y ;
        z += other.z ;
        return *this ;
        };
    void afficher() const {
        std::cout << "(" << x << "," << y << "," << z << ")" <<std::endl;
    }

 };
 int main (){
    point3d p1(10,15,30);
     point3d p2(10,15,30);
      point3d p3(10,15,30);
 p1 += p2 += p3;  
    p1.afficher();   
    p2.afficher();   
    return 0 ;
 }
