#include <iostream>

using namespace std;

class Cube{
private:
    double m_a;
    double volume{};
    double area{};
public:
    explicit Cube(double a){
        m_a=a;
    }
    void Seta(){
        cout<<"Please input the length"<<endl;
        cin>>m_a ;
    }
    void getvolume(){
        volume=m_a*m_a*m_a;
    }
    void getarea(){
        area=6*m_a*m_a;
    }
    void display() const{
        cout<<"The cube side length is "<<m_a<<endl;
        cout<<"The volume of the cube is "<<volume<<endl;
        cout<<"The surface area of the cube is "<<area<<endl;
    }
};

int main(){
    double f = 0;
    Cube side(f);
    side.Seta();
    side.getvolume();
    side.getarea();
    side.display();
    return 0;
}
